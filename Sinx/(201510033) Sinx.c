#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
double i,y=1,a=1,f_a=1,c,x,sinx=0;
printf("Enter the radian value of X: ");
scanf("%lf",&x);
for(i=1;i<=10;i++)
{
sinx=sinx + pow((-1),(i+1))*(pow(x,y)/f_a);       //factorial a
y+=2;
a+=2;
f_a=1;
for(c=1;c<=a;c++)
    f_a=f_a*c;
}
printf("\nThe value of the required series is = %.2lf\n",sinx);
getch();
}
