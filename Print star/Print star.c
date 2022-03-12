#include <stdio.h>
#include <conio.h>
void main()
{
    int n,i,j;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n+2);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}
