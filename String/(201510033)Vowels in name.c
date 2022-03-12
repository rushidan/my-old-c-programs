#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char name[100],vowel[11] = "aAeEiIoOuU",r[100];
    int i,j=0,c=0;
    printf("My name is entered below:\n");
    gets(name);
    for(i=0; i<strlen(name); i++)
        for(j=0; j<10; j++)
        {
            if(name[i]==vowel[j])
            {
                r[c]=vowel[j];
                c++;
            }
        }
    printf("\nThe number of vowels in my name is %d and the vowels, in their respective order of appearance, are ",c);
    for(i=0; i<c; i++)
    {
        if(i<c-2)
            printf("%c, ",r[i]);
        else if(i<c-1)
            printf("%c & ",r[i]);
        else
            printf("%c",r[i]);
    }
    printf("\n");
    getch();
}
