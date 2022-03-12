#include <stdio.h>
#include <conio.h>
#include <string.h>
int i[4][4],r,c;
int det();
void main()
{
    int j,k;
    char a[4];
    printf("Enter the entities of the matrix: \n");
    for(r=1; r<=3; r++)
    {
        for(c=1; c<=3; c++)
        {
            scanf("%d",&i[r][c]);
        }
    }
    printf("The entered matrix is: \n");
    printf("%-7c%6c",'-','-');
    for(r=1; r<=3; r++)
    {
        printf("\n");
        printf("%-3c",'|');
        for(c=1; c<=3; c++)
        {
            printf("%-3d",i[r][c]);
        }
        printf("%1c",'|');
    }
    printf("\n%-7c%6c",'-','-');
    printf("\nTo calculate the determinant value of the matrix, write 'det' \n");
    for( ; ; )
    {
        gets(a);
        int n = strcmp(a,"det");
        if(n==0)
        {
            printf("\nThe value of the determinant is = %d\n",det());
            break;
        }
        else
            printf("\nPlease write 'det'\n");
    }
    getch();
}
int det()
{
    int d;
    d = i[1][1]*(i[2][2]*i[3][3]-i[3][2]*i[2][3])-i[1][2]*(i[2][1]*i[3][3]-i[3][1]*i[2][3])+i[1][3]*(i[2][1]*i[3][2]-i[3][1]*i[2][2]);
    return d;
}
