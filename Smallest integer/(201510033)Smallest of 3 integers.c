#include <stdio.h>
#include <conio.h>
int main()
{
int a,b,c;
printf("Please enter the three integers:\n\n");
scanf("%d%d%d",&a,&b,&c);
if(a<=b)
{
if(b<=c)
printf("\nThe smallest of the three integers is: %d\n",a);
else
{
if(a<=c)
printf("\nThe smallest of the three integers is: %d\n",a);
else
printf("\nThe smallest of the three integers is: %d\n",c);
}
}
else
{
if(b<=c)
printf("\nThe smallest of the three integers is: %d\n",b);
else
printf("\nThe smallest of the three integers is: %d\n",c);
}
getch();
return 0;
}
