#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char *string=(char*)malloc(100),ch;
    int i,count=0;
    printf("Enter the string:\t");
    gets(string);
    printf("\nEnter the character whose frequency in the given string is to be found out:\t");
    ch=getchar();
    for(i=0;*(string+i)!='\0';i++)
        {
            if(*(string+i)==ch)
                count++;
        }
    //free(string);
    printf("\nThe frequency of the input character in the entered string is = %d\n",count);
}
