#include <stdio.h>
#include <conio.h>
int digit_count(int);
int  * digits(int);
int digit_sum(int);
void main()
{
    int num,i,*digit;
    printf("Enter a positive integer number:\t");
    scanf("%d",&num);
    printf("\nPress any key to split the digits of the number");
    getch();
    digit = digits(num);
    printf("\n\nThe entered number consists of %d digits and they are\n",digit_count(num));
    for(i=0;i<digit_count(num);i++)
    {
        printf("%d\t",digit[i]/* or *(digit+i) */);
    }
    printf("\n\nPress any key to find the sum of the digits of the number\n");
    getch();
    printf("\nThe sum of the digits of the entered number is = %d\n",digit_sum(num));
    getch();
}
int digit_count(int n)
{
    int i,count=0,a[100];
    for(i=0; ; i++)
    {
        a[i] = n%10;
        count++;
        n = n/10;
        if(n==0)
            break;
    }
    return count;
}
int * digits(int n)
{
    int i,count=0,a[100];
    for(i=0; ; i++)
    {
        a[i] = n%10;
        count++;
        n = n/10;
        if(n==0)
            break;
    }
    return a;
}
int digit_sum(int n)
{
    int i,sum=0,*onko;
    onko = digits(n);
    for(i=0;i<digit_count(n);i++)
        sum = sum + *(onko+i);
    return sum;
}
