#include <stdio.h>
#include <conio.h>
void main()
{
    int r;
    float a;
    printf("Enter the radius of the circle:\t");
    scanf("%d",&r);
    a=3.1416*r*r; //Area
    printf("\nThe area of the circle is: %.2f\n",a);
    getch();
}
