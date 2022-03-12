#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char word1[100],word2[100];
    int i,j,s,sum=0,n1,n2;
    printf("Enter the two words:\n\n");
    gets(word1);
    printf("\n");
    gets(word2);
    n1=strlen(word1);
    n2=strlen(word2);
    strlwr(word1);
    strlwr(word2);
    if(n1!=n2)
        printf("\nThe two words are not anagrams\n");
    else
    {
        for(i=0; i<n1; i++)
        {
            for(j=0; j<n2; j++)
            {
                if(word1[i]==word2[j])
                {
                    s=0;
                    word2[j]='\0';
                    break;
                }
            }
            if(j==n2)
                s=1;
            sum = sum + s;
        }
        if(sum==0)
            printf("\nThe two words are anagrams\n");
        else
            printf("\nThe two words are not anagrams\n");
    }
    getch();
}
