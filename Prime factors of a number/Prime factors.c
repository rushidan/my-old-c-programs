#include <stdio.h>
#include <conio.h>
void main()
{
    int n,i,j,k,l,r[10000];
    printf("Enter a number:\t");
    scanf("%d",&n);
    printf("\nThe entered number is resolved into its prime factors as below:\n\n");
    printf("%d = ",n);
    for(i=2,k=0; i<=10000; i++) //Finding all the prime numbers up to n of i<=n and storing them in array
    {
        for(j=2; j<i; j++)
        {
            if(i%j==0)	break;
        }
        if(i==j)
        {
            r[k]=i;
            k++;
        }
    }
    for(l=0; l<k; )
    {
        if(n%r[l]==0)
        {
            printf("%d",r[l]);
            n=n/r[l];
            if(n!=1)	printf(" * ");
        }
        else	l++;
        if(n==0)	break;
    }
    getch();
}
