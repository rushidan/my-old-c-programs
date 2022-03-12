#include <stdio.h>
#include <conio.h>
int main()
{
int a,b,c;
printf("Please enter the three different integers:\n\n");
scanf("%d%d%d",&a,&b,&c);
if(a==b||b==c||c==a)
{
printf("\nSorry, you haven't entered three different integers\n");
goto end;
}
if(a<b)
{
if(b<c)
printf("\nThe smallest integer is: %d\n",a);
else
{
if(a<c)
printf("\nThe smallest integer is: %d\n",a);
else
printf("\nThe smallest integer is: %d\n",c);
}
}
else
{
if(b<c)
printf("\nThe smallest integer is: %d\n",b);
else
printf("\nThe smallest integer is: %d\n",c);
}
end:
getch();
return 0;
}
