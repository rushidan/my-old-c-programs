#include <stdio.h>
#include <conio.h>
void main()
{
float a,b,c,d,avg;
printf("Enter the four numbers:\n\n");
scanf("%f%f%f%f",&a,&b,&c,&d);
avg = (a+b+c+d)/4;
printf("\nThe average of the four numbers is = %.4f\n",avg);
getch();
}
