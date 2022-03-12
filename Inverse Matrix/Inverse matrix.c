#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int cofactor(int matrix[100][100],int,int,int);
int eliminate_rowcolumn(int M[100][100],int d,int r,int c,int Mod[100][100]);
void transpose(int matrix[100][100],int DIM);
void adjoint(int matrix[100][100],int,int adj[100][100]);
int determinant(int matrix[100][100],int);
void multiply_const(float,int matrix[100][100],int,float MATRIX[100][100]);
int hcf_of_two(int,int);

void main()
{
    int dim,r,c,mat[100][100],adj_mat[100][100],i,det;
    float inverse_mat[100][100],temp;
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
    printf("\nPress any key to find the inverse matrix of the input matrix:");//N.B.: If the input data is totally in an A.P. series with common difference =1, the value of the determinant becomes zero, therefore program will give error for 1/det
    getch();
    printf("\nThe required inverse matrix is:\n\n");
    adjoint(mat,dim,adj_mat);
    det=determinant(mat,dim);
    if(det==0)
    {
        printf("\nERROR\n");
        return;
    }
    for(r=0; r<dim; r++)
    {
        for(c=0; c<dim; c++)
        {
            if(adj_mat[r][c]==0)
                printf(" %d \t",adj_mat[r][c]);
            else if(adj_mat[r][c]<0 && det<0 && hcf_of_two(adj_mat[r][c],det)==1)
                printf("%d/%d\t",abs(adj_mat[r][c]),abs(det));
            else
            {
                if(hcf_of_two(adj_mat[r][c],det)==1)
                    printf("%d/%d\t",adj_mat[r][c],det);
                else if(hcf_of_two(adj_mat[r][c],det)==abs(det))
                    printf(" %d \t",(adj_mat[r][c]/hcf_of_two(adj_mat[r][c],det))/(det/hcf_of_two(adj_mat[r][c],det)));
                else
                    printf("%d/%d\t",(adj_mat[r][c]/hcf_of_two(adj_mat[r][c],det)),(det/hcf_of_two(adj_mat[r][c],det)));
            }
        }
        printf("\n\n");
    }
    printf("OR\n\n");
    temp=1/(float)det;
    multiply_const(temp,adj_mat,dim,inverse_mat);
    for(r=0; r<dim; r++)
    {
        for(c=0; c<dim; c++)
            printf("%.2f\t",inverse_mat[r][c]);
        printf("\n\n");
    }
    getch();
}

void adjoint(int MAT[100][100],int Dim,int adj[100][100])
{
    int r,c;
    for(r=0; r<Dim; r++)
    {
        for(c=0; c<Dim; c++)
            adj[r][c]=cofactor(MAT,Dim,r,c);
    }
    transpose(adj,Dim);
}

void transpose(int Mat[100][100],int dimension)
{
    int r,c,tmat[100][100];
    for(r=0; r<dimension; r++)
        for(c=0; c<dimension; c++)
            tmat[r][c]=Mat[c][r];
    for(r=0; r<dimension; r++)
        for(c=0; c<dimension; c++)
            Mat[r][c]=tmat[r][c];
}

int determinant(int Dmat[100][100],int dimension)
{
    int i,det_val=0;
    for(i=0; i<dimension; i++)
        det_val = det_val + Dmat[0][i]*cofactor(Dmat,dimension,0,i);
    return det_val;
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

void multiply_const(float constant,int MAT[100][100],int DIM,float mult_mat[100][100])
{
    int r,c,temp_mat[100][100];
    for(r=0; r<DIM; r++)
        for(c=0; c<DIM; c++)
            temp_mat[r][c]=MAT[r][c];
    for(r=0; r<DIM; r++)
        for(c=0; c<DIM; c++)
            mult_mat[r][c]=constant*temp_mat[r][c];
}

int hcf_of_two(int a,int b)
{
    int factor[30],i,c1=0,c2=0,common[30],hcf;
    a=abs(a);
    b=abs(b);
    for(i=1; i<=a; i++)
    {
        if(a%i==0)
        {
            factor[c1]=i;
            c1++;
        }
    }
    for(i=0; i<c1; i++)
    {
        if(b%factor[i]==0)
        {
            common[c2]=factor[i];
            c2++;
        }
    }
    return common[c2-1];//already sorted as the largest factor
}

