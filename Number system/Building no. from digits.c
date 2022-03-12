#include <stdio.h>
#include <conio.h>
#include <math.h>
int count=0;
void input_bunch(int *);
void main()
{
    int dig[100],i,j;
    double num=0;
    printf("Serially enter the digits of a number:\n");
    input_bunch(dig);
    for(i=count-1,j=0;i>=0;i--,j++)
    {
        num = num + dig[i]*pow(10,j);
    }
    printf("\n\nThe required number is = %llu",(unsigned long long int)num);
    //printf("\n\n%lf",num);
}
void input_bunch(int arr0[])  //array works on the basis of 'function call by reference'....could also be done by *arr0 instead of arr0[]
{
    int i;
    char ch;
    printf("Enter the digits (pressing space after each digit and finally pressing enter to confirm input) to be operated upon:\n");
    for(i=0; ; i++)
    {
        scanf("%d",&arr0[i]);
        count++;
        ch=getchar();
        if(ch=='\n')
            break;
    }
}
