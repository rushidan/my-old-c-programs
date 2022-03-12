#include <stdio.h>
#include <conio.h>
int sum_digit(int n);
void main()
{
    int n,i;
    printf("Enter the number:\t");
    scanf("%d",&n);
    printf("\nPress any key to get the sum of the digits of the input number_\n");
    getch();
    printf("\nThe sum of the digits of the input no. is = %d\n",sum_digit(n));
    getch();
}
int sum_digit(int n)
{
    int i,j,r[100],s=0;
    for(i=0; ; i++)
    {
        r[i]=n%10;
        n=n/10;
        if(n==0)	break;
    }
    for(j=0; j<=i; j++)	s = s + r[j];
    return s;
}
