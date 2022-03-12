#include <stdio.h>
#include <conio.h>
int fibonacci(int n);
void main()
{
    int n,i;
    printf("Enter the position of the member upto which the fibonacci series is wanted:\n");
    scanf("%d",&n);
    printf("\nThe required fibonacci series is:\n");
    for(i=1;i<=n;i++)
        printf("%d\t",fibonacci(i));
    getch();
}
int fibonacci(int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}
