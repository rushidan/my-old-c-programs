//Lexicographic order/Dictionary order/Alphabetical order
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char *word[100],*lwrword[100],*temp,*lwrtemp;
    int i,j,n;
    printf("Mention the number of words to be sorted out:\t");
    scanf("%d",&n);
    printf("\nEnter the words to be sorted in lexicographic order:\n");
    for(i=0; i<n; i++)
    {
        word[i]=(char*)malloc(100);
        scanf("%s",word[i]);
        lwrword[i]=(char*)malloc(100);
        strcpy(lwrword[i],word[i]);
        strlwr(lwrword[i]);
    }
    for(i=n; i>1; i--)
        for(j=0; j<i-1; j++)
        {
            if(strcmp(lwrword[j],lwrword[j+1])>=0)
            {
                lwrtemp=lwrword[j+1];
                temp=word[j+1];
                lwrword[j+1]=lwrword[j];
                word[j+1]=word[j];
                lwrword[j]=lwrtemp;
                word[j]=temp;
            }
        }
    printf("\nThe words as sorted in lexicographic order are presented below:\n\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",word[i]);
    }
    getch();
}
