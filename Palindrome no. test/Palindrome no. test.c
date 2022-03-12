#include <stdio.h>
#include <conio.h>
int palindrome_check(int n);
void main()
{
    int n;
    printf("Enter a number:\t");
    scanf("%d",&n);
    if(palindrome_check(n)==0)	printf("\nThe input no. '%d' is a palindrome\n",n);
    else	printf("\nThe input no. '%d' is not a palindrome\n",n);
    getch();
}
int palindrome_check(int n)
{
    int i,r1[200],r2[200],j,count=0,s,sum;
    for(i=0,j=0; ; i++,j++)
    {
        r1[i]=n%10;
        r2[j]=r1[i];
        count++;
        n=n/10;
        if(n==0)    break;
    }
    for(i=0,j=count-1,sum=0; i<count,j>=0; i++,j--)
    {
        if(r2[j]==r1[i])    s=0;
        else     s=1;
        sum = sum + s;
    }
    return sum;
}
