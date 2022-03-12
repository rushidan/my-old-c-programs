#include <stdio.h>
#include <conio.h>
void main()
{
    int n,i,j;
    printf("Enter the no. of lines:\t");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("\n");
        for(j=1; j<=n; j++)
        {
            if(i==1 || i==n)	printf("* ");
            else	printf("+ ");
        }
    }
    getch();
}
