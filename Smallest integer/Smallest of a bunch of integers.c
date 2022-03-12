#include <stdio.h>
#include <conio.h>
int sml(int a[]);
int n;
void main()
{
    int r[100]= {0},i;
    printf("Mention the no. of numbers you will input:\t");
    scanf("%d",&n);
    printf("\nEnter the numbers:\n");
    for(i=0; i<n; i++)
        scanf("%d",&r[i]);
    printf("\nPress any key to find the smallest number of the bunch_\n");
    getch();
    printf("\nThe smallest number of the bunch is: %d\n",sml(r));
    getch();
}

int sml(int a[])
{
    int i,X=a[0];
    for(i=n-1; i>=0; i--)
    {
        if(X<=a[i])
            X = X;
        else
            X = a[i];
    }
    return X;
}
