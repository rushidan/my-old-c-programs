#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    char ch;
    double x;
    printf("Enter a radian value of x:\t");
    scanf("%lf",&x);
    printf("\nPress s to calculate sin(x) or c to calculate cos(x) or t to calculate tan(x):\n");
    for( ; ; )
    {
        ch=getch();
        getch();
        printf("\n");
        if(ch=='s')
        {
            printf("\ns\n\n"),	printf("%.3f",sin(x));
        }
        else if(ch=='c')
        {
            printf("\nc\n\n");
            printf("%.3f",cos(x));
        }
        else if(ch=='t')
        {
            printf("\nt\n\n");
            printf("%.3f",tan(x));
        }
        else	printf("Invalid input");
    }
}
