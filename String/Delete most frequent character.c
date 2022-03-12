#include <stdio.h>
#include <conio.h>
#include <string.h>
int char_freq(char *,char);
void main()
{
    char str[100],most;
    int i,len,n;
    printf("Enter your string:\n");
    gets(str);
    len=strlen(str);
    n=char_freq(str,str[0]);
    most=str[0];
    for(i=0;i<len;i++)
    {
        if(n>=char_freq(str,str[i]))
            most=most;
        else
            most=str[i];
    }
    printf("\nThe most frequent character in the string is: %c\n",most);
    for(i=0;i<len;i++)
    {
        if(str[i]==most)
            str[i]='\0';
    }
    printf("\nAfter deleting the character appearing the highest no. of times, the string becomes:\n");
    for(i=0;i<len;i++)
        putchar(str[i]);
    printf("\n");
    getch();
}
int char_freq(char *s,char ch)
{
    int count=0,i;
    for(i=0;i<strlen(s);i++)
    {
        if(ch==s[i])
            count++;
    }
    return count;
}
