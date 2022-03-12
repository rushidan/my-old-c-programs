#include <stdio.h>
#include <conio.h>
double power(double x,int y);
unsigned long long int fact(int n);
void main()
{
    int i=1;
    unsigned long long int y=1;
    double x,sinx=0;
    printf("Enter the radian value of x: ");
    scanf("%lf",&x);
    printf("\n");
    while(i<=10)
    {
        sinx = sinx + power((-1),(i+1))*(power(x,y)/fact(y));
        y+=2;
        i++;
    }
    printf("The value of sin(x) is = %.3lf",sinx);
    printf("\n");
    getch();
}
double power(double x,int y)
{
    int i=1;
    double p=1;
    while(i<=y)
    {
        p=p*x;
        i++;
    }
    return p;
}
unsigned long long int fact(int n)
{
    if(n==1)    return n;
    else    return (n*fact(n-1));
}
