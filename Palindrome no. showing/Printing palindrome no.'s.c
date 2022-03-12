#include <stdio.h>
#include <conio.h>
int palindrome_check(int n);
void main()
{
    int n;
    int i;
    printf("Enter the number up to which the palindrome numbers are desired:\t");
    scanf("%d",&n);
    printf("\nThe desired palindrome numbers are shown below:\n\n");
    for(i=1;i<=n;i++)
    {
        if(palindrome_check(i)==0)
            printf("%d\t",i);
    }
    printf("\n");
    getch();
}

int palindrome_check(int n)
{
    int i,r1[20000],r2[20000],j,count=0,s,sum;
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
