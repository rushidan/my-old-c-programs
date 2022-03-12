#include <stdio.h>
#include <conio.h>
void main()
{
unsigned long long int f=1;
int n,c=1;
printf("Enter any whole number:\t");
scanf("%d",&n);
if(n>=0)
{
do{
    f=f*c;
    c++;
}while(c<=n);
printf("\nThe factorial value of the entered number is = %llu \n",f);
}
else
printf("\nSorry, you haven't entered a whole number\n");
getch();
}
