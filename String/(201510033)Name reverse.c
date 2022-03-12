#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char name[50];
    printf("My name is entered below:\n\n");
    gets(name);
    printf("\nIn reverse order, my name becomes: %s\n",strrev(name));
    getch();
}
