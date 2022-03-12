#include <stdio.h>
#include <conio.h>
int count=3;
void input_bunch(int *);
int factor_count(int);
int * factors(int);
int commonfactor_count(int *);
int * commonfactor(int *);
void d_sort(int *);
void main()
{
    int num[5]= {12,36,6,54,24},*cf,*fac,i,temp,n;
    //input_bunch(num);

    printf("\n%d\n",factor_count(12));
    fac=factors(12);
    for(i=0; i<factor_count(45); i++)
        printf("%d\t",*(fac+i));
    printf("\n%d\n",commonfactor_count(num));
    cf=commonfactor(num);
    for(i=0; i<commonfactor_count(num); i++)
        printf("%d\t",cf[i]);
    d_sort(cf);
    printf("\n\n\n%d",cf[0]);
    /*for(n=commonfactor_count(num); n>1; n--)
        for(i=0; i<n-1; i++)
            if(*(cf+i)<=*(cf+i+1))
            {
                temp=*(cf+i+1);
                *(cf+i+1)=*(cf+i);
                *(cf+i)=temp;
            }
    //d_sort(cf);
    /*d_sort(num);
    for(i=0;i<4;i++)
    {
        printf("\n%d\t",num[i]);
    }*/
    /*printf("\nThe HCF of the input numbers is = %d",cf[5]);
    printf("\nThe HCF of the input numbers is = %d",cf[commonfactor_count(num)-1]);
    printf("\nThe HCF of the input numbers is = %d",cf[5]);
    printf("\nThe HCF of the input numbers is = %d",cf[1]);
    printf("\nThe HCF of the input numbers is = %d",cf[2]);*/
    getch();
}
void input_bunch(int arr0[])  //array works on the basis of 'function call by reference'....could also be done by *arr0 instead of arr0[]
{
    int i;
    char ch;
    printf("Enter the numbers (pressing space after each number and finally pressing enter to confirm input) to be operated upon:\n");
    for(i=0; ; i++)
    {
        scanf("%d",&arr0[i]);
        count++;
        ch=getchar();
        if(ch=='\n')
            break;
    }
}
int factor_count(int a)
{
    int i,c=0;
    for(i=1; i<=a; i++)
        if(a%i==0)
            c++;
    return c;
}
int * factors(int a)
{
    int i,f[100],c=0;
    for(i=1; i<=a; i++)
        if(a%i==0)
        {
            f[c]=i;
            c++;
        }
    return f;
}
int commonfactor_count(int arr[])
{
    int i,j,c=0,*f,cf[50],sum=0,s;
    f=factors(arr[0]);
    for(i=0; i<factor_count(arr[0]); i++)
    {
        for(j=0,sum=0; j<count; j++)
        {
            if(arr[j]%f[i]==0)
                s=0;
            else
                s=1;
            sum=sum+s;
        }
        if(sum==0)
        {
            cf[c]=f[i];
            c++;
        }
    }
    return c;
}
int * commonfactor(int arr[])
{
    int i,j,c=0,*f,cf[50],sum=0,s;
    f=factors(arr[0]);
    for(i=0; i<factor_count(arr[0]); i++)
    {
        for(j=0,sum=0; j<count; j++)
        {
            if(arr[j]%f[i]==0)
                s=0;
            else
                s=1;
            sum=sum+s;
        }
        if(sum==0)
        {
            cf[c]=f[i];
            c++;
        }
    }
    return cf;
}
void d_sort(int *arr5)
{
    int i,n,temp;
    for(n=commonfactor_count(arr5); n>1; n--)//working with 4 instead of commonfactor_count??why???
        for(i=0; i<n-1; i++)
            if(*(arr5+i)<=*(arr5+i+1))
            {
                temp=*(arr5+i+1);
                *(arr5+i+1)=*(arr5+i);
                *(arr5+i)=temp;
            }
}
