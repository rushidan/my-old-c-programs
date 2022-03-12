#include <stdio.h>
#include <conio.h>
int count=0;
void input_bunch(double *);
void output_bunch(double arr1[]);
double largest_of(double arr2[]);
double smallest_of(double arr3[]);
void swap(double *,double *);
void a_sort(double arr4[]);
void d_sort(double arr5[]);
void main()
{
    int i,j;
    double num[1000],l,s;
    char ch;
    input_bunch(num);
    output_bunch(num);
    printf("\n\nPress l to find the largest number of the bunch\n");
    printf("\nPress s to find the smallest number of the bunch\n");
    printf("\nPress a to sort the bunch of numbers in ascending order\n");
    printf("\nPress d to sort the bunch of numbers in descending order\n");
    for(j=0; j<4; )
    {
        ch=getch();
        if(ch=='l')
        {
            l=largest_of(num);
            printf("\n\nThe largest of the bunch is %lf\n",l);
            j++;
        }
        else if(ch=='s')
        {
            s=smallest_of(num);
            printf("\n\nThe smallest of the bunch is %lf\n",s);
            j++;
        }
        else if(ch=='a')
        {
            a_sort(num);
            printf("\n\nThe sorted bunch in ascending order is:\n");
            /*for(i=0; i<count; i++)
                printf("%lf\t",num[i]);*/
            output_bunch(num);
            printf("\n");
            j++;
        }
        else if(ch=='d')
        {
            d_sort(num);
            printf("\n\nThe sorted bunch in descending order is:\n");
            /*for(i=0; i<count; i++)
                printf("%lf\t",num[i]);*/
            output_bunch(num);
            printf("\n");
            j++;
        }
        else
            printf("\n\nPlease press l or s or a or d\n\n");
    }
}
void input_bunch(double arr0[])  //array works on the basis of 'function call by reference'....could also be done by *arr0 instead of arr0[]
{
    int i;
    char ch;
    printf("Enter the numbers (pressing space after each number and finally pressing enter to confirm input) to be operated upon:\n");
    for(i=0; ; i++)
    {
        scanf("%lf",&arr0[i]);
        count++;
        ch=getchar();
        if(ch=='\n')
            break;
    }
}
void output_bunch(double arr1[])
{
    int i;
    printf("\nThe input numbers are:\t");
    for(i=0; i<count; i++)
        printf("%lf\t",arr1[i]);
}
double largest_of(double arr2[])
{
    int i;
    double X;
    X=arr2[0];
    for(i=0; i<count; i++)
    {
        if(X<=arr2[i])
            X=arr2[i];
    }
    return X;
}
double smallest_of(double arr3[])
{
    int i;
    double x;
    x=arr3[0];
    for(i=0; i<count; i++)
    {
        if(x>=arr3[i])
            x=arr3[i];
    }
    return x;
}
void swap(double *x,double *y)
{
    double temp;
    temp=*y;
    *y=*x;
    *x=temp;
}
void a_sort(double arr4[])
{
    int i,n;
    double temp;
    for(n=count; n>1; n--)
        for(i=0; i<n-1; i++)
            if(arr4[i]>=arr4[i+1])
                swap(&arr4[i],&arr4[i+1]);
}
void d_sort(double arr5[])
{
    int i,n;
    double temp;
    for(n=count; n>1; n--)
        for(i=0; i<n-1; i++)
            if(arr5[i]<=arr5[i+1])
                swap(&arr5[i],&arr5[i+1]);
}
/*void a_sort(double arr4[])
{
    int i,n;
    double temp;
    for(n=count; n>1; n--)
        for(i=0; i<n-1; i++)
            if(arr4[i]>=arr4[i+1])
            {
                temp=arr4[i+1];
                arr4[i+1]=arr4[i];
                arr4[i]=temp;
            }
}
void d_sort(double arr5[])
{
    int i,n;
    double temp;
    for(n=count; n>1; n--)
        for(i=0; i<n-1; i++)
            if(arr5[i]<=arr5[i+1])
            {
                temp=arr5[i+1];
                arr5[i+1]=arr5[i];
                arr5[i]=temp;
            }
}*/



