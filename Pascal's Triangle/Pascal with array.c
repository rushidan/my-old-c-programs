#include <stdio.h>
#include <conio.h>
int fact(int n);
void main()
{
    int i[100][100],a,b,r,c;
    printf("Enter the no. of lines of the Pascal's triangle:\t");
    scanf("%d",&a);
    printf("\nThe desired Pascal's triangle is:\n\n");
    for(r=0; r<a; r++)
    {
        b=3*(a-r);
        printf("%*c",b,' ');
        for(c=0; c<=r; c++)
        {
            i[r][c]=fact(r)/(fact(c)*fact(r-c));
            printf("%-7d",i[r][c]);
        }
        printf("\n\n");
    }
    getch();
}
int fact(int n)
{
    int f,c;
    for(f=1,c=1; c<=n; c++)
    {
        f=f*c;
    }
    return f;
}
