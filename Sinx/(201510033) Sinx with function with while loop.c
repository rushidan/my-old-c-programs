#include <stdio.h>
#include <conio.h>
double power(double x,int y);
unsigned long long int fact(int n);
void main()
{
    int i,y=1;
    double x,sinx=0;
    printf("Enter the radian value of X: ");
    scanf("%lf",&x);
    i=1;
    while(i<=10)
    {
        sinx=sinx + power((-1),(i+1))*(power(x,y)/fact(y));
        y+=2;
        i++;
    }
    printf("\nThe value of the required series is = %.3lf\n",sinx);
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
    int i=1;
    unsigned long long int f=1;
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    return f;
}
