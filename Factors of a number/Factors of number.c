#include <stdio.h>
#include <conio.h>
void main()
{
    int n,i;
    printf("Enter a positive integer:\t");
    scanf("%d",&n);
    printf("\nThe factor(s) of the number are:\n");
    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)	printf("%d\t",i);
    }
    getch();
}
