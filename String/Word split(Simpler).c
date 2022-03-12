#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char s[100];
    int i,c=0,l;
    printf("Enter the sentence:\n");
    gets(s);
    l=strlen(s);
    printf("\nThe words present in the string are:\n");
    /*for(i=0;i<l;i++)
    {
        if(s[i]!=' ')
            putchar(s[i]);
        else
            printf("\n");
    }*/
    for(i=0; i<l; i++)
        if(s[i]==' ')
            s[i]='\n';
    puts(s);
    getch();
}
