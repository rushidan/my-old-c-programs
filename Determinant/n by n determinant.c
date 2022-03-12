#include <stdio.h>
#include <conio.h>
#include <math.h>
int cofactor(int matrix[100][100],int,int,int);
int eliminate_rowcolumn(int M[100][100],int d,int r,int c,int Mod[100][100]);
void main()
{
    int dim,r,c,mat[100][100],i,value=0;
    printf("Enter the dimension(n*n) of the matrix: ");
    scanf("%d",&dim);
    printf("\nInput the elements of the matrix:\n");
    for(r=0; r<dim; r++)
    {
        for(c=0; c<dim; c++)
            scanf("%d",&mat[r][c]);
    }
    printf("\nThe input matrix is presented below:\n\n");
    for(r=0; r<dim; r++)
    {
        for(c=0; c<dim; c++)
            printf("%d\t",mat[r][c]);
        printf("\n\n");
    }
    printf("\nPress any key to calculate the determinant value of the input matrix\n");//N.B.: If the input data is totally in an A.P. series, the value of the determinant becomes zero
    getch();
    for(i=0; i<dim; i++)
        value = value + mat[0][i]*cofactor(mat,dim,0,i);
    printf("\nThe determinant value of the input matrix is = %d\n",value);
    getch();
}


int cofactor(int MAT[100][100],int D,int R,int C)//MAT=input matrix,D=dimension of input matrix,R=row element,C=column element;
{
    int mod_mat[100][100],sum,i,mod_dim;
    mod_dim=eliminate_rowcolumn(MAT,D,R,C,mod_mat);
    if(mod_dim>1)
    {
        for(sum=0,i=0; i<mod_dim; i++)
            sum += mod_mat[0][i]*cofactor(mod_mat,mod_dim,0,i);
        return (int)pow(-1,R+C)*sum;
    }
    else
        return (int)pow(-1,R+C)*mod_mat[0][0];
}


int eliminate_rowcolumn(int M[100][100],int d,int r,int c,int Mod[100][100])//M=input matrix,d=Dimension of input matrix,r=elimination row serial,c=elimination column serial,Mod=modified matrix after elimination;
{
    //gives strange results if Mod[99][99] given instead of Mod[100][100]???????
    int i,j,p,q;
    for(i=0,p=0; i<d-1; i++,p++)
    {
        p+=(p==r);//same as if(p==r) p+=1;
        for(j=0,q=0; j<d-1; j++,q++)
        {
            q+=(q==c);
            Mod[i][j]=M[p][q];
        }
    }
    return d-1;//returns the dimension of the modified matrix
}
