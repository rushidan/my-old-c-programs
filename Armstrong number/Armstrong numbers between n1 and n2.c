#include <stdio.h>
#include <conio.h>
#include <math.h>
int arm(int n);
void main()
{
    int n1,n2,i;
    printf("Enter the starting number:\t");
    scanf("%d",&n1);
    printf("\nEnter the ending number:\t");
    scanf("%d",&n2);
    printf("\nThe Armstrong numbers within this limit are presented below:\n\n") ;
    for(i=n1; i<=n2; i++)
        if(arm(i)==i)
        printf("%d\t",i);
    printf("\n");
    getch();
}
int arm(int n)
{
    int i,r[100],count=0;
    double x=0;
    for(i=0; ; i++)
    {
        r[i]=n%10;
        n=n/10;
        count++;
        if(n==0)
            break;
    }
    for(i=0; i<count; i++)
        x = x + pow(r[i],count);
    return (int)x;
}
