#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
int buildnum(int *,int);
void main()
{
    FILE *in,*out;
    int randig[8],rand8[11],d,i,ranum,j;
    srand(time(NULL));
    ranum=rand();
    in=fopen("lottery.txt","w");
    for(i=1; i<11; i++)
    {
        for(j=0; j<8; j++)
        {
            srand(time(NULL)+ranum*i);
            randig[j]=rand()%10;
            printf("%d",randig[j]);
        }
        rand8[i]=buildnum(randig,8);

        //rand8[i]=digits(rand8[i],8);
        //fprintf(in,"%-10d%-8d\n",i,rand8[i]);
        printf("%-10d%d\n",i,rand8[i]);
    }
    //printf("%d",digits(65372,4));



}
int buildnum(int d[],int n)
{
    int i;
    int s=0;
    for(i=0; i<n; i++)
        s=s+pow(d[i],(10*i));
    return s;
}
