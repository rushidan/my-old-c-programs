#include <stdio.h>
#include <conio.h>
void main()
{
    int n,i,j,k,l;
    printf("Enter the serial no. of the line with the maximum no. of entities: ");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i++)     //1st series line controlling loop
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);     //entity controlling loop
        }
        printf("\n");
    }
    for(k=(n-1);k>=1;k--)     //2nd series line controlling loop
    {
        for(l=1;l<=k;l++)
        {
            printf("%d ",l);     //entity controlling loop
        }
        printf("\n");
    }
    getch();
}
