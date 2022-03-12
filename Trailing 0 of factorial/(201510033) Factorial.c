#include <stdio.h>
#include <conio.h>
void main()
{
unsigned long long int f=1,i,X,r,c;
printf("Enter a positive integer: ");
scanf("%llu",&X);
for(i=1;i<=X;i++)
f=f*i;
for(c=0;c<f;c++)
{
r=f%10;
f=f/10;
if(r!=0)
break;
}
printf("\nThe number of trailing zeros in the factorial value is: %llu \n",c);
getch();
}
