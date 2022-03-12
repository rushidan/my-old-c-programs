#include <stdio.h>
#include <conio.h>
#include <string.h>
int wordfind_count(char *string,char *word);//how many times a word has occurred in a string
int wordfind(char *string,char *word);//returns the starting index of the first instance of the word in the string
char * wordreplace(char *string,char *word,char *replaceword);
void main()
{
    char strin[500],word[30],rword[30],*string;
    int i,j,k,s,sum,start;
    printf("Input the string:\n");
    gets(strin);
    printf("Select(write) the word(as it appears in the string) that needs to be replaced:\t");
again:
    gets(word);
    if(wordfind(strin,word)==NULL)
    {
        printf("\nThat word is not present in the input string, please input a word that is present in the input string_\t");
        goto again;
    }
    printf("\nInput the desired word with which the selected word needs to be replaced_\t");
    gets(rword);
    printf("\nPress any key to commence the replacement\n");
    getch();
    string=wordreplace(strin,word,rword);
    printf("\nThe desired string with the word replaced is:\n%s\n",string);
}
int wordfind(char *string,char *word)
{
    int i,j,k,s,sum,start=-1;
    for(i=0; i<strlen(string); i++) //finding the starting position of the selected word in the given string
    {
        if(word[0]==string[i])//first checks if first character of word coincides or not
        {
            for(j=0,k=i,sum=0; j<strlen(word); j++,k++)
            {
                if(word[j]==string[k])
                    s=0;
                else
                    s=1;
                sum=sum+s;
            }
            if(sum==0)
            {
                start=i;
                break;
            }
        }
    }
    if(start==-1)
        return NULL;
    else if(strstr(string,word)==NULL||string[start-1]!=' '||string[start+strlen(word)]!=' ')
        return NULL;
    else
        return start;
}
char *wordreplace(char *string,char *word,char *rword)
{
    int i,j;
    char split1[600],split2[500];
    for(i=0; ; i++)
    {
        for(i=0; i<wordfind(string,word); i++)
        {
            split1[i]=string[i];
        }
        split1[i]='\0';
        for(i=0,j=wordfind(string,word)+strlen(word); j<strlen(string); i++,j++) //start+strlen(word)=one place after the ending position of the word in the string
        {
            split2[i]=string[j];
        }
        split2[i]='\0';
        strcat(split1,rword);  //stitching the desired
        strcat(split1,split2); //output together
        strcpy(string,split1);
        if(wordfind(string,word)==NULL)
            break;
    }
    return string;
}

