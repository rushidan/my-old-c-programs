#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char string[100];
    int i,line;
    printf("Enter a string:\t");
    gets(string);
    for(i=0;i<=strlen(string);i++)
        printf("%.*s\n",i,string);
    printf("---------------------------------------------------------------\n");
    for(i=strlen(string);i>=0;i--)
        printf("%.*s\n",i,string);
    /*for(line=0; line<strlen(string); line++)
    {
        for(i=0; i<=line; i++)
            printf("%c",string[i]);
        printf("\n");
    }
    printf("---------------------------------------------------------------\n");
    for(line=strlen(string)-1;line>=0;line--)
    {
        for(i=0;i<=line;i++)
            printf("%c",string[i]);
        printf("\n");
    }*/
    getch();
}
