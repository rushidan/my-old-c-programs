#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int n,row,column,tab,r_val,i,fr=1,j,fc=1,k,frc=1,rCc;
    printf("Enter the number of lines of the Pascal's triangle: ");
    scanf("%d",&n);
    printf("\n");
    for(row=0;row<n;row++)
    {
        //printing the empty tabs to the left side
        for(tab=0;tab<(n-1)-row;tab++)
            printf("  ");
        //values along the rows
        for(r_val=0,column=0;r_val<=row;r_val++,column++)
        {
        //determining row! for rowCcolumn = nCk
        for(i=row,fr=1;i>=1;i--)
            fr=fr*i;
        //determining column! for rowCcolumn = nCk
        for(j=column,fc=1;j>=1;j--)
            fc=fc*j;
        //determining nCk = rowCcolumn = row!/(column!*(row-column)!)
        for(k=(row-column),frc=1;k>=1;k--)
            frc=frc*k;
        rCc=fr/(fc*frc);
        //printing the values on each row
        printf("%-4d",rCc);
        }
        printf("\n");
    }
    getch();
}
