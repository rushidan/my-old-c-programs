#include <stdio.h>
#include <conio.h>
#include <string.h>
char * string_split(char *,int,int);
void main()
{
    char *word[100],string[500];
    int i,j,count=0;
    printf("Enter the string:\n");
    gets(string);
    getch();
    for(i=0; ; i++)
    {
        if(string[i]==' '||string[i]=='\0')
        {
            if(count==0)
            {
                word[count]=string_split(string,0,i-1);
                count++;
                j=i+1;
            }
            else
            {
                word[count]=string_split(string,j,i-1);
                count++;
                j=i+1;
            }
            if(string[i]=='\0')
                break;
        }
    }
    printf("\nThe number of words in the string is %d and the words are:\n",count);
    for(i=0; i<count; i++)
        printf("%s\n",word[i]);
    getch();
}
char * string_split(char *string,int j,int i)
{
    int c;
    char *word =(char*)malloc(100*sizeof(char));
    for(c=0; j<=i; j++,c++)
    {
        if(*(string+j)=='.'||*(string+j)==','||*(string+j)==';'||*(string+j)==':')
        {
            *(word+c)=='\0';
            break;
        }
        else
           *(word+c)=*(string+j);
    }
    *(word+c)='\0';
    return word;
}
