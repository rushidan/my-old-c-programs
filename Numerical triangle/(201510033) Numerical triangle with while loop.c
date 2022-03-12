#include <stdio.h>
#include <conio.h>
void main()
{
    int n,i,j,k,l;
    printf("Enter the serial no. of the line with the maximum no. of entities: ");
    scanf("%d",&n);
    printf("\n");
    i=1;
    while(i<=n)     //1st series line controlling loop
    {
        j=1;
        while(j<=i)     //entity controlling loop
        {
            printf("%d ",j);
            j++;
        }
        printf("\n");
        i++;
    }
    k=n-1;
    while(k>=1)     //2nd series line controlling loop
    {
        l=1;
        while(l<=k)     //entity controlling loop
        {
            printf("%d ",l);
            l++;
        }
        printf("\n");
        k--;
    }
    getch();
}
