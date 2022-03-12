#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char name[100],vowel[11] = "aAeEiIoOuU",r[11];
    int i,j=0,c=0;
    printf("My name is entered below:\n");
    gets(name);
    for(i=0; i<10; i+=2)
        for(j=0; j<strlen(name); j++)
        {
            if(name[j]==vowel[i] || name[j]==vowel[i+1])
            {
                r[c]=vowel[i];
                c++;
                break;
            }
        }
    printf("\nThe number of different vowels in my name is %d and the vowels are ",c);
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
