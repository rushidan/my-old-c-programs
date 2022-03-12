#include <stdio.h> /*371 = 3^3 + 7^3 + 1^3 is an armstrong no., 1634 = 1^4 + 6^4 + 3^4 + 4^4 is an armstrong no.*/
#include <conio.h>
#include <math.h>
int arm(int n);
void main()
{
    int n;
    printf("Enter a number:\t");
    scanf("%d",&n);
    if(arm(n)==n)	printf("\nThe input number is an Armstrong number\n");
    else	printf("\nThe input number is not an Armstrong number\n");
    getch();
}
int arm(int n)
{
    int i,r[100],count=0,x=0;
    for(i=0; ; i++)
    {
        r[i]=n%10;
        n=n/10;
        count++;
        if(n==0)	break;
    }
    for(i=0; i<count; i++)	x = x + pow(r[i],count);
    return x;
}
