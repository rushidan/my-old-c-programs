#include <stdio.h>
#include <conio.h>
void main()
{
    int x,y;
    printf("Enter the point (x,y):\n");
    printf("x-coordinate_ ");
    scanf("%d",&x);
    printf("y-coordinate_ ");
    scanf("%d",&y);
    printf("\nThe entered point is (%d,%d) and it is ",x,y);
    if(sqrt(x*x+y*y)<5)
        printf("inside of the given circle ");
    else if(sqrt(x*x+y*y)==5)
        printf("right on the circumference of the given circle ");
    else
        printf("outside of the given circle ");
    printf("and ");
    if(x==2||x==12&&y==17||y==27)
        printf("right on the perimeter of the given rectangle\n");
    else if(x>2&&x<12&&y>17&&y<27)
        printf("inside of the given rectangle\n");
    else
        printf("outside of the given rectangle\n");
}
