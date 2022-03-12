#include <stdio.h>
#include <conio.h>
int digitproduct(int);
int permutation(int);
int fact(int);
void main()
{
    int std_id=201510033,i,num,digit[3];
    double sum=0;
    printf("My Std_ID is %d",201510033);
    for(i=0; i<3; i++)
    {
        digit[i]=std_id%10;
        if(digit[i]==0)
            digit[i]=1;
        std_id=std_id/10;
    }
    for(i=0; i<3; i++)
        sum=sum+digit[i]*pow(10,i);
    num=sum;
    printf("\nTherefore, the number to be operated upon is: %d",num);
    printf("\nThe product of the digits of the number is = %d",digitproduct(num));
    printf("\nAnd the total number of different student id that can be formed by rearranging the digits is = %d",permutation(num));
}
int digitproduct(int n)
{
    int i,count=0,a[10],prod=1;
    for(i=0; ; i++)
    {
        a[i] = n%10;
        count++;
        n = n/10;
        if(n==0)
            break;
    }
    for(i=0; i<count; i++)
        prod=prod*a[i];
    return prod;
}
int permutation(int n)
{
    int i,j,count=0,a[10],repete,permut;
    for(i=0; ; i++)
    {
        a[i] = n%10;
        count++;
        n = n/10;
        if(n==0)
            break;
    }
    permut=fact(count);
    for(i=0; i<10; i++)
    {
        for(j=0,repete=0; j<count; j++)
        {
            if(i==a[j])
                repete++;
        }
        permut=permut/fact(repete);
    }
    return permut;
}
int fact(int n)
{
    int f,c;
    for(f=1,c=1; c<=n; c++)
    {
        f=f*c;
    }
    return f;
}
