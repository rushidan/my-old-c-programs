#include <stdio.h>
#include <conio.h>
int mat_mult(int a[4][4],int b[4][4]);
void main()
{
    int r,c,mat1[4][4],mat2[4][4];
    char ch;
    printf("Enter the elements of the 1st matrix:\n");
    for(r=1; r<=3; r++)        for(c=1; c<=3; c++)            scanf("%d",&mat1[r][c]);
    printf("Enter the elements of the 2nd matrix:\n");
    for(r=1; r<=3; r++)        for(c=1; c<=3; c++)            scanf("%d",&mat2[r][c]);
    printf("\nPress any key to proceed on\n\n");
    getch();
    printf("%-7c%6c",'-','-');
    printf("         ");
    printf("%-7c%6c",'-','-');
    for(r=1; r<=3; r++)
    {
        printf("\n");
        printf("%-3c",'|');
        for(c=1; c<=3; c++)            printf("%-3d",mat1[r][c]);
        printf("%1c",'|');
        if(r==2)            printf("    *    ");
        else            printf("         ");
        printf("%-3c",'|');
        for(c=1; c<=3; c++)            printf("%-3d",mat2[r][c]);
        printf("%1c",'|');
    }
    printf("\n%-7c%6c",'-','-');
    printf("         ");
    printf("%-7c%6c",'-','-');
    printf("\nPress '=' for proceeding to multiplication\n");
    for( ; ; )
    {
        ch = getch();
        if(ch=='=')
        {
            printf("\nThe result matrix is:\n\n");
            mat_mult(mat1,mat2);
            break;
        }
        else            printf("\nPlease press '='\n");
    }
    getch();
}
int mat_mult(int a[4][4],int b[4][4])
{
    int r1=1,c1=1,r2=1,c2=1,mat3[4][4],sum,s;
    for(r1=1; r1<=3; r1++)
    {
        for(c2=1; c2<=3; c2++)
        {
            for(c1=1,r2=1,sum=0; c1<=3,r2<=3; c1++,r2++)
            {
                s = a[r1][c1] * b[r2][c2];
                sum = sum + s;
            }
            mat3[r1][c2] = sum;
        }
    }
    printf("%-8c%8c",'-','-');
    for(r1=1; r1<=3; r1++)
    {
        printf("\n");
        printf("%-3c",'|');
        for(c2=1; c2<=3; c2++)            printf("%-4d",mat3[r1][c2]);
        printf("%1c",'|');
    }
    printf("\n%-8c%8c",'-','-');
    return 0;
}
