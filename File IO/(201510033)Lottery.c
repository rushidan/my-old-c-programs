#include <stdio.h>
#include <conio.h>
#include <time.h>
void main()
{
    FILE *in,*out;
    int i,ranum,a[11]={0,12825415,39517626,86032337,69651548,50026559,98323460,46019871,88010882,73250593,10031209},prize[11];
    in=fopen("lottery.txt","w");
    for(i=1;i<=10;i++)
    fprintf(in,"%-10d%-8d\n",i,a[i]);
    fclose(in);
    for(i=1;i<=10;i++)
    {
        srand(time(NULL)+i);
        ranum=rand()%11;
        prize[i]=ranum;
        printf("%d",ranum);
    }
    in=fopen("lottery.txt","r");
    for(i=1;i<=10;i++)
    fscanf(in,"%-10d%-8d\n",i,a[i]);
    out=fopen("winners.txt","w");
    fprintf(out,"The Lottery Winners are as follows:\n\n");
    fprintf(out,"Serial No.\t\t\t Lottery_no \t\t\tWinning Position\n\n");
    fprintf(out,"----------\t\t\t ---------- \t\t\t----------------\n\n");
    for(i=1;i<=3;i++)
        {
            if(i==1)
            fprintf(out,"%d%40d\t\t\tFirst Prize\n\n",prize[i],a[prize[i]]);
            else if(i==2)
                fprintf(out,"%d%40d\t\t\tSecond Prize\n\n",prize[i],a[prize[i]]);
            else
                fprintf(out,"%d%40d\t\t\tThird Prize\n\n",prize[i],a[prize[i]]);
        }
    fclose(in);
    fprintf(out,"No more prizes...\n\nTry your luck again...\n\n\nThank you for using this program...");
    fclose(out);
    getch();
}
