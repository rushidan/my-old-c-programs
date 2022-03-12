#include <stdio.h>
#include <conio.h>
#include <string.h>
int char_freq(char *,char);
void main()
{
    char str[100],most[10],cpystr[100];
    int i,j,len,nmost,c=0;
    printf("Enter your string:\n");
    gets(str);
    strcpy(cpystr,str);
    len=strlen(str);
    nmost=char_freq(str,str[0]);
    for(i=0; i<len; i++)
    {
        if(nmost>=char_freq(str,str[i]))
            nmost=nmost;
        else
            nmost=char_freq(str,str[i]);
    } //finding the highest frequency available
    for(i=0; i<len; i++)
        if(char_freq(cpystr,str[i])==nmost)
        {
            most[c]=str[i];
            c++; //counting the no. of characters with the highest frequency
            for(j=0;j<len;j++)
            {
                if(cpystr[j]==most[c-1])
                    cpystr[j]='\t'; //to avoid repetition of counting the same most frequent character multiple times,
                    //not '\0' because the string length of cpystr would have been shortened then and the function char_freq(cpystr,ch) would be erroneous
            }
        }
    printf("\nThe most frequent character(s) in the string are:\n");
    for(i=0;i<c;i++)
    {
        if(i<c-2)
            printf("%c, ",most[i]);
        else if(i<c-1)
            printf("%c & ",most[i]);
        else
            printf("%c; ",most[i]);
    }
    printf("each with a frequency of %d",nmost);
    for(j=0;j<c;j++)
    for(i=0; i<len; i++)
    {
        if(str[i]==most[j])
            str[i]='\0';
    }
    printf("\n\nAfter deleting the character(s) appearing the highest no. of times, the string becomes:\n");
    for(i=0; i<len; i++)
        putchar(str[i]);
    printf("\n");
    getch();
}
int char_freq(char *s,char ch)
{
    int count=0,i;
    for(i=0; i<strlen(s); i++)
    {
        if(ch==s[i])
            count++;
    }
    return count;
}

