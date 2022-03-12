#include <stdio.h>
#include <conio.h>
void main()
{
    int n,i,r=1;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        r=n%i;
        if(r==0)
            break;
    }
    if(n==1||r==0)
        printf("\nThe entered number is not prime\n");
    else
        printf("\nThe entered number is prime\n");
    getch();
}
