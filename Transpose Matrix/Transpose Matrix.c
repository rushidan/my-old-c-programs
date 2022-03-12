#include <stdio.h>
#include <conio.h>
int R,C;
void transpose(int mat[100][100]);
void main()
{
    int mat[100][100]= {0},r,c;
    char ch;
    printf("Mention the dimension(r*c) of the input matrix:\t");
    scanf("%d%d",&R,&C);
    printf("\nInput the elements of the matrix:\n");
    for(r=1; r<=R; r++)	for(c=1; c<=C; c++)	scanf("%d",&mat[r][c]);
    printf("\nThe input matrix is:\n\n");
    printf("%3c%*c",'-',(3+3*C),'-');
    for(r=1; r<=R; r++)
    {
        printf("\n");
        printf("%3c",'|');
        for(c=1; c<=C; c++)	printf("%3d",mat[r][c]);
        printf("%3c",'|');
    }
    printf("\n%3c%*c",'-',(3+3*C),'-');
    printf("\nTo get the transpose of the input matrix please press 't'\n");
    for( ; ; )
    {
        ch=getch();
        if(ch=='t' || ch=='T')
            break;
        else
            printf("\nPlease press 't'\n");
    }
    transpose(mat);
    getch();
}
void transpose(int mat[100][100])
{
    int r,c,trans_mat[100][100];
    for(c=1; c<=C; c++)
        for(r=1; r<=R; r++)
            trans_mat[c][r] = mat[r][c];
    printf("\n%3c%*c",'-',(3+3*R),'-');
    for(c=1; c<=C; c++)
    {
        printf("\n");
        printf("%3c",'|');
        for(r=1; r<=R; r++)
            printf("%3d",trans_mat[c][r]);
        printf("%3c",'|');
    }
    printf("\n%3c%*c",'-',(3+3*R),'-');
}
