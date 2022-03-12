#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
float mod(float a)
{
    if(a<0)
        return -1*a;
    else
        return a;
}
void main()
{
    float x1[11]={0},x2[11]={0},x3[11]={0};
    float e1[11]={100},e2[11]={100},e3[11]={100};
    int i;
    for(i=1;i<=10;i++)
    {
        x1[i] = (14-x2[i-1]-3*x3[i-1])/5;
        x2[i] = (7-x1[i]-9*x3[i-1])/10;
        x3[i] = (2*x1[i]-7*x2[i]+17)/10;
        e1[i] = ((x1[i]-x1[i-1])/x1[i])*100;
        e2[i] = ((x2[i]-x2[i-1])/x2[i])*100;
        e3[i] = ((x3[i]-x3[i-1])/x3[i])*100;
    }
    printf("Assignment No. 1:\n");
    printf("Iterations x1\t\tx2\tx3\t   e1\t\t  e2\t\t  e3\n");
    for(i=1;i<=10;i++)
    {
        printf("%d.\t  %.4f\t%.4f\t%.4f\t  %.4f\t  %.4f\t  %.4f\n\n",i,x1[i],x2[i],x3[i],e1[i],e2[i],e3[i]);
    }
    for(i=1;;i++)
    {
        x1[i] = (11+2*x2[i-1]-x3[i-1])/6;
        x2[i] = (5-2*x3[i-1]+2*x1[i-1])/7;
        x3[i] = (x1[i-1]+2*x2[i-1]+1)/5;
        e1[i] = ((x1[i]-x1[i-1])/x1[i]);
        e2[i] = ((x2[i]-x2[i-1])/x2[i]);
        e3[i] = ((x3[i]-x3[i-1])/x3[i]);
        if(mod(e1[i])<=0.1 && mod(e2[i])<=0.1 && mod(e3[i])<=0.1)
            break;
        /*if(e1[i]<0)
            e1[i]=-e1[i];
        if(e2[i]<0)
            e2[i]=-e2[i];
            if(e3[i]<0)
            e3[i]=-e3[i];*/
    }
    printf("Assignment No. 2:\n");
    for(i=1;mod(e1[i])>=0.1||mod(e2[i])>=0.1||mod(e3[i])>=0.1;i++)
    {
        printf("%d.\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\n\n",i,x1[i-1],x2[i-1],x3[i-1],x1[i],x2[i],x3[i],e1[i],e2[i],e3[i]);
    }
}
