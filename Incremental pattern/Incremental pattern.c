#include <stdio.h>
#include <conio.h>
void main()
{
    int n,r,c=1,d=1;
    printf("Enter the no. of lines:\n\n");
    scanf("%d",&n);
    printf("\n\n");
    for(r=1; r<=n; r++)
    {
        for(c=1; c<=r; c++)
        {
            printf("%-5d",d);
            d++;
        }
        printf("\n");
    }
    getch();
}
