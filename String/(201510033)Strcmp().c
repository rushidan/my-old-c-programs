#include <stdio.h>
#include <conio.h>
char str_cmp(char *p,char *q);
void main()
{
    char ch,*s1 = (char*)malloc(100*sizeof(char)),*s2 = (char*)malloc(100*sizeof(char));
    printf("Enter the two strings:\n");
    gets(s1);
    gets(s2);
    printf("\nPress any key to compare the two strings_\n");
    getch();
    ch = str_cmp(s1,s2);
    if(ch=='y')
        printf("\nThe two strings are identical\n");
    else if(ch=='n')
        printf("\nThe two strings are not identical\n");
    getch();
}
char str_cmp(char *p,char *q)
{
    int i;
    for(i=0; ; i++)
    {
        if(*(p+i)=='\0' || *(q+i)=='\0')
        {
            if(*(p+i)!=*(q+i))
                return 'n';
            else
                break;
        }
        else if(*(p+i)!=*(q+i))
            return 'n';
    }
    return 'y';
}

