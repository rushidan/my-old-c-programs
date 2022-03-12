#include <stdio.h>
#include <conio.h>
void main()
{
    int n1,n2,i,j;
    printf("Enter the two numbers between which the list of prime numbers is desired:\t");
    scanf("%d%d",&n1,&n2);
    printf("\nThe prime number(s) between %d & %d are:\n",n1,n2);
    for(i=n1; i<=n2; i++)
    {
        for(j=2; j<i; j++)
        {
            if(i%j==0)	break;
        }
        if(i==j)
            printf("%d\t",i);
    }
    getch();
}
