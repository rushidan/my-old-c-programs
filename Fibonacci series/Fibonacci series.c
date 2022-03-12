#include <stdio.h>
#include <conio.h>
void main()
{
    int n,i,r[100]= {0},sum=1;
    r[1]=1;
    printf("Enter the desired no. of terms of the Fibonacci Series:\t");
    scanf("%d",&n);
    printf("\nThe desired Fibonacci series is: \n");
    for(i=2; i<=n+1; i++)
    {
        r[i]=r[i-1]+r[i-2];
        printf("%d\t",r[i-2]);
    }
    printf("\n");
    getch();
}

/*void main()
{
    int i,f=-1,s=1,sum,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
        {
            sum=f+s;	f=s;	s=sum;	printf("\t%d",sum);
        }
}*/
