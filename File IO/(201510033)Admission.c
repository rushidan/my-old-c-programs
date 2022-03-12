#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <math.h>
void main()
{
    FILE *in,*out;
    int i,ranum,a[11],seat[11],n,j;
    double num=0;
    printf("Please wait, the program is loading....");
    /*for(i=0;i<=10;i++)//for some reason the a[first]=7 digits rest are 8 digits, since a[0] is ignored, so 11 numbers are generated and a[0] which is 7 digits is excluded
    {
        for(j=0; j<7; j++)
        {
            srand(time(NULL)+i*(j+1)+j*(i+1));
            n=rand()%10;
            num=num+(double)n*pow(10,j);
        }
        a[i]=num;
    }
    in=fopen("appforms.txt","w");
    for(i=1; i<=10; i++ )
    {
           fprintf(in,"%d\t\t%d\n",i,a[i]);
    }
    fclose(in);*/
    for(i=1; i<=10; i++)
    {
        again:
        srand(time(NULL)-i*(i+9));
        ranum=(rand()%10)+1;//to avoid getting 0
        seat[i]=ranum;
        for(j=i-1;j>=1;j--)//to achieve 10 different values
            if(seat[i]==seat[j])
            goto again;
        //printf("%d\n",seat[i]);
    }
    in=fopen("appforms.txt","r");
    for(i=1; i<=10; i++)
    {
        fscanf(in,"%d\t\t%d\n",&j,&a[i]);
        //printf("\n%d \t %d\n",j,a[i]);
    }
    out=fopen("admissions.txt","w");
    fprintf(out,"The Allowed Application Form numbers are as follows:\n\n\n");
    fprintf(out,"\tSerial No\t\tForm_No\t\t\t Seat No\n\n");
    fprintf(out,"\t---------\t\t-------\t\t\t -------\n\n");
    for(i=1; i<=5; i++)
    {
        fprintf(out,"%12d%28d\t\tSeat No.%d\n\n",seat[i],a[seat[i]],i);
    }
    fclose(in);
    fprintf(out,"\nNo more vacant seats are available for now...Try your luck next year..");
    fprintf(out,"\n\n\n\nThank you for choosing our school...better luck next time...");
    fclose(out);
    printf("\n\nOkay, all set\n");
    getch();
}
