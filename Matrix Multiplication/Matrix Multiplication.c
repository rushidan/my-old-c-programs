#include <stdio.h>
#include <conio.h>
int mat_mult(int a[50][50],int b[50][50]);
int R1,C1=1,R2=1,C2;
void main()
{
    int r,c,mat1[50][50]= {0},mat2[50][50]= {0};
    char ch;
    printf("NOTE: For matrix multiplication to be done, make sure C1=R2\n\n");
    for( ; ; )
    {
        printf("Enter the dimension(r*c) of the 1st matrix:\t");
        scanf("%d%d",&R1,&C1);
        printf("\nEnter the dimension(r*c) of the second matrix:\t");
        scanf("%d%d",&R2,&C2);
        if(C1!=R2)
            printf("\nInvalid input.....Please re-enter\n\n");
        else
            break;
    }
    printf("\nEnter the elememts of the 1st matrix:\n");
    for(r=1; r<=R1; r++)
        for(c=1; c<=C1; c++)
            scanf("%d",&mat1[r][c]);
    printf("\n%c%*c",'-',(3+3*C1),'-');
    for(r=1; r<=R1; r++)
    {
        printf("\n");
        printf("%-3c",'|');
        for(c=1; c<=C1; c++)
        {
            printf("%-3d",mat1[r][c]);
        }
        printf("%1c",'|');
    }
    printf("\n%c%*c",'-',(3+3*C1),'-');
    printf("\n\nEnter the elements of the 2nd matrix:\n");
    for(r=1; r<=R2; r++)
        for(c=1; c<=C2; c++)
            scanf("%d",&mat2[r][c]);
    printf("\n%c%*c",'-',(3+3*C2),'-');
    for(r=1; r<=R2; r++)
    {
        printf("\n");
        printf("%-3c",'|');
        for(c=1; c<=C2; c++)
        {
            printf("%-3d",mat2[r][c]);
        }
        printf("%1c",'|');
    }
    printf("\n%c%*c",'-',(3+3*C2),'-');
    printf("\n\nPress '*' for proceeding to multiplication\n");
    for( ; ; )
    {
        ch = getch();
        if(ch=='*')
        {
            printf("\nThe result matrix is:\n\n");
            mat_mult(mat1,mat2);
            break;
        }
        else
            printf("\nPlease press '*'\n");
    }
    getch();
}
int mat_mult(int a[50][50],int b[50][50])
{
    int r1=1,c1=1,r2=1,c2=1,mat3[50][50],sum,s;
    for(r1=1; r1<=R1; r1++)
    {
        for(c2=1; c2<=C2; c2++)
        {
            for(c1=1,r2=1,sum=0; c1<=C1,r2<=R2; c1++,r2++)
            {
                s = a[r1][c1] * b[r2][c2];
                sum = sum + s;
            }
            mat3[r1][c2] = sum;
        }
    }
    printf("%c%*c",'-',(3+4*C2),'-');
    for(r1=1; r1<=R1; r1++)
    {
        printf("\n");
        printf("%-3c",'|');
        for(c2=1; c2<=C2; c2++)
            printf("%-4d",mat3[r1][c2]);
        printf("%1c",'|');
    }
    printf("\n%c%*c",'-',(3+4*C2),'-');
    return 0;
}
