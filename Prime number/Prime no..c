#include <stdio.h>
#include <conio.h>
void main()
{
    int n,i,c,r=1,j;
    printf("Enter the positive integer up to which you want to see the prime no.'s: ");
    scanf("%d",&n);
    printf("\nThe prime no.'s up to the entered number are:\n");
    for(i=2;i<=n;i++)
    {
        for(c=2;c<i;c++)
        {
            r=i%c;
            if(r==0)
                break;
        }
        if(r!=0)
            printf("%d\t",i);
    }
    printf("\n");
    getch();
}
