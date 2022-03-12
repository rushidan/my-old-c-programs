#include <stdio.h>
#include <conio.h>
void main()
{
    int std_id=201510033,i,j,m,n,digit[2],taka,r[6]= {1,2,5,10,20,50};
    double sum=0;
    printf("My Std_ID is %d",201510033);
    for(i=0; i<2; i++)
    {
        digit[i]=std_id%10;
        std_id=std_id/10;
    }
    for(i=0; i<2; i++)
        sum=sum+digit[i]*pow(10,i);
    taka=sum;
    printf("\nTo make %d taka, it requires minimum\n",taka);
    for(i=5; i>=0; i--)
    {
        if(taka>=r[i])
        {
            for(m=taka,j=i; j>=0; j--)
            {
                n=m/r[j];
                if(n!=0)
                {
                    switch(r[j])
                    {
                        case 50: printf("%d fifty taka note(s)\t",n);
                        break;
                        case 20: printf("%d twenty taka note(s)\t",n);
                        break;
                        case 10: printf("%d ten taka note(s)\t",n);
                        break;
                        case 5: printf("%d five taka note(s)\t",n);
                        break;
                        case 2: printf("%d two taka note(s)\t",n);
                        break;
                        case 1: printf("%d one taka note(s)\t",n);
                        break;
                    }
                }
                m=m%r[j];
            }
            if(i!=0)
            printf("\nor\n");
        }
    }
}
