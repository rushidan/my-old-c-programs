#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
void main()
{
float a,b,c,d,x,y,root1,root2;
printf("This is a program for finding out the real roots of a quadratic equation\n");
printf("Please input the a, b, c coefficients of the standard quadratic equation ax^2+bx+c=0\n");
scanf("%f%f%f",&a,&b,&c);
d=b*b-4*a*c;
x=-b/(2*a);
y=(sqrt(abs(d)))/(2*a);
if(d>=0)
{
root1= x+y;
root2= x-y;
if(d>0)
printf("The roots of the particular quadratic equation are: %.2f,%.2f\n",root1,root2);
else
printf("The particular equation has two equal roots and the value of the roots is: %.2f\n",root1);
}
else
printf("The roots of the particular equation are complex and they are: %.2f+%.2fi,%.2f-%.2fi\n",x,y,x,y);
getch();
}

