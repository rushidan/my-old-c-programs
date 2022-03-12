#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    int n,i;
    char a[50],b[50];
    for(i=1; ;i++)
    {
        printf("\n\n%d. Enter your string:\t",i);
        gets(a);
        strcpy(b,a);
        printf("\nYour string is: %s\n",a);
        strrev(a);
        n = strcmp(b,a);
        (n==0)? printf("\nThe entered string is a palindrome\n") : printf("\nThe entered string is not a palindrome\n");
        getch();
    }
}
