#include <stdio.h>
#include <conio.h>
void sort(int a[]);
int n;
void main()
{
    int r[100],i,ch;
    printf("Enter the no. of numbers to be sorted:\t");
    scanf("%d",&n);
    printf("\nEnter the numbers:\n");
    for(i=0; i<n; i++)	scanf("%d",&r[i]);
    printf("\nPress 'A' to sort in ascending order or 'D' to sort in descending order_\n");
    for( ; ; )
    {
        ch=getch();
        if(ch=='a'|| ch=='A')
        {
            sort(r);
            for(i=0; i<n; i++)	printf("%d\t",r[i]);
            break;
        }
        else if(ch=='d' || ch=='D')
        {
            sort(r);
            for(i=n-1; i>=0; i--)printf("%d\t",r[i]);
            break;
        }
        else	printf("\nPlease press 'A'or 'D'_\n");
    }
    getch();
}
void sort(int a[])
{
    int i,temp,m;
    for(m=n; m>1; m--)
        for(i=0; i<m-1; i++)
        {
            if(a[i]>=a[i+1])
            {
                temp = a[i+1];
                a[i+1] = a[i];
                a[i] = temp;
            }
        }
}
