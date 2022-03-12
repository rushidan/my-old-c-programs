#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char strin[100],word[30],rword[30],split1[100],split2[100];
    int i,j,k,s,sum,start;
    printf("Input the string:\n");
    gets(strin);
    printf("Select(write) the word(as it appears in the string) that needs to be replaced:\t");
    again:
    gets(word);
    for(i=0;;i++)//finding the starting position of the selected word in the given string
    {
        for(j=0,k=i,sum=0;j<strlen(word);j++,k++)
        {
            if(word[j]==strin[k])
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
    if(strstr(strin,word)==NULL||strin[start-1]!=' '||strin[start+strlen(word)]!=' ')
    {
        printf("\nThat word is not present in the input string, please input a word that is present in the input string_\t");
        goto again;
    }
    printf("\nInput the desired word with which the selected word needs to be replaced_\t");
    gets(rword);
    printf("\nPress any key to commence the replacement\n");
    getch();
    //splitting the string in two parts excluding the selected word:

    for(i=0;i<start;i++)
    {
        split1[i]=strin[i];
    }
    split1[i]='\0';
    for(i=0,j=start+strlen(word);j<strlen(strin);i++,j++)//start+strlen(word)=one place after the ending position of the word in the string
    {
        split2[i]=strin[j];
    }
    split2[i]='\0';
    strcat(split1,rword);  //stitching the desired
    strcat(split1,split2); //output together
    printf("\nThe desired string with the word replaced is:\n%s\n",split1);
}
