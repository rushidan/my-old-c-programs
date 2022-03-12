#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100],i,count=0,sum=0;
    char ch;
    printf("Enter numbers pressing space after each number and finally pressing enter to confirm input :\n");
    for(i=0;;i++)
    {
        scanf("%d",&a[i]);
        count++;
        ch=getchar();
        if(ch=='\n')
            break;
    }
    for(i=0;i<count;i++)
        /*sum=sum+a[i];
    printf("\nThe sum is: %d",sum);*/
    printf("%d\t",a[i]);
}
