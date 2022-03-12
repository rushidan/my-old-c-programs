#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    int i,x,y,line;
    for(x=-10,line=1;x<=10;x++,line++)
    {
        printf(".");
        for(i=0;i<2*(10-x);i++)
            printf(" ");
        printf(".\n");
        for(i=0;i<line;i++)
        printf(" ");
    }
    getch();
}
