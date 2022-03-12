#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char s[100],p[30];
    int i,j=0,len;
    printf("Enter the sentence:\n");
    gets(s);
    len=strlen(s);
    printf("\nThe sentence with the orientation of the words reversed looks as follows:\n");
    for(;;)
    {
        for(i=0; ; j++,i++)
        {
            if(s[j]==' ')
            {
                j++;
                break;
            }
            else if(j==len)
                break;
            else
            {
                p[i]=s[j];
            }
        }
        p[i]='\0';
        printf("%s ",strrev(p));
        if(s[j]=='\0')
            break;
    }
}
