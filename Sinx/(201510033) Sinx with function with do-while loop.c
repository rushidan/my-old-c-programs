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
    do
    {
        sinx=sinx + power((-1),(i+1))*(power(x,y)/fact(y));
        y+=2;
        i++;
    }while(i<=10);
    printf("\nThe value of the required series is = %.3lf\n",sinx);
    getch();
}

double power(double x,int y)
{
    int i=1;
    double p=1;
    do
    {
        p=p*x;
        i++;
    }while(i<=y);
    return p;
}

unsigned long long int fact(int n)
{
    int i=1;
    unsigned long long int f=1;
    do
    {
        f=f*i;
        i++;
    }while(i<=n);
    return f;
}

