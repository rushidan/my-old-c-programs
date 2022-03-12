#include <stdio.h>
#include <conio.h>
int grt(int a[]); //Function for sorting out the greatest of a bunch of numbers
int n;
void main()
{
    int i,r[100]= {0},g,x,l,j,s,sum;
    printf("Mention the no. of numbers involved:\t");
    scanf("%d",&n);
    printf("\nEnter the numbers(positive integers only):\n");
    for(i=0; i<n; i++)
            scanf("%d",&r[i]);
    g = grt(r); //Sorting not essential though, would've worked starting the multiplication from any of the input numbers
    for(x=1; ; x++)
    {
        l = g*x;
        for(j=i-1,sum=0; j>=0; j--)
        {
            if(l%r[j]==0)	s=0;
            else	s=1;
            sum = sum + s;
        }
        if(sum==0)
        {
            printf("\nThe LCM is = %d\n",l);
            break;
        }
    }
    getch();
}
int grt(int a[])
{
    int i,X=a[0];
    for(i=n-1; i>=0; i--)
    {
        if(X>=a[i])	X = X;
        else	X = a[i];
    }
    return X;
}
