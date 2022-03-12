#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    float x,y;
    int i;
    for(y=11;y>=-11;y--)
    {
        printf("\n");
        x=(y*y)/(1);//y^2=4ax
        for(i=0;i<(int)x;i++)
            printf(" ");
        printf("o");
    }
}
