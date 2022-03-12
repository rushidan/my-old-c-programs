#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char word1[100],word2[100],temp;
    int i,n1,n2;
    printf("Enter the two words:\n\n");
    gets(word1);
    printf("\n");
    gets(word2);
    n1=strlen(word1);
    n2=strlen(word2);
    strlwr(word1);
    strlwr(word2);
    for( ; n1>=2; n1--)                     /*Sorting the letters of word1 in descending order*/
        for(i=0; i<n1; i++ )
        {
            if(word1[i]<=word1[i+1])
            {
                temp = word1[i+1];
                word1[i+1] = word1[i];
                word1[i] = temp;
            }
        }
    for( ; n2>=2; n2--)                     /*Sorting the letters of word2 in descending order*/
        for(i=0; i<n2; i++ )
        {
            if(word2[i]<=word2[i+1])
            {
                temp = word2[i+1];
                word2[i+1] = word2[i];
                word2[i] = temp;
            }
        }
    if(strcmp(word1,word2)==0)
        printf("\nThe two words are anagrams\n");
    else
        printf("\nThe two words are not anagrams\n");
    getch();
}
