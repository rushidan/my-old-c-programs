#include <stdio.h>
#include <conio.h>
void main()
{
    int a=0,b=1,c,n,i;
    printf("Enter the position of the term up to which the fibonacci series is desired:\n");
    scanf("%d",&n);
    printf("The required fibonacci series is as follows:\n");
    printf("%d\t%d\t",a,b);
    for(i=3; i<=n; i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
    getch();
}
