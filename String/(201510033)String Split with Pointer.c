#include <stdio.h>
#include <conio.h>
void main()
{
    char *str=(char*)malloc(100*sizeof(char)),*p=(char*)malloc(100*sizeof(char)),*q=(char*)malloc(100*sizeof(char));
    int i,j;
    printf("Enter the string with a '/' at the point where it is to be split:\n");
    gets(str);
    printf("\nThe split portions of the string are as follows:\n\n");
    printf("First = ");
    for(i=0;*(str+i)!='/';i++)
    {
        *(p+i) = *(str+i);
        printf("%c",*(p+i));
    }
    printf("\t\tSecond = ");
    for(j=0;*(str+i+1)!='\0';j++,i++)
    {
        *(q+j) = *(str+i+1);
        printf("%c",*(q+j));
    }
    printf("\n");
    getch();
}

