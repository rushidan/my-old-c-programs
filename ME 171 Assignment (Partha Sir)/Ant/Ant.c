#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
double convert(double,char *,char *);
void main()
{
    double x=0,y=0,dist,total=0;
    char unitbase[3],unit[3],dir[6];
    printf("The ant starts from the (0,0) position\n");
    printf("Enter the unit of measurement(km/m/cm/mm):\t");
    gets(unitbase);
    for(;;)
    {
        printf("\n\nEnter the movement in the format 'distance' 'unit' 'direction':\n");
        scanf("%lf %s %s",&dist,unit,dir);
        if(strcmp(dir,"north")==0)
        {
            y=y+convert(dist,unit,unitbase);
            total+=convert(dist,unit,unitbase);
            printf("Total distance traveled = %.8lf%s",total,unitbase);
            printf("\nCurrent distance from (0,0) = %.8lf%s",sqrt(x*x+y*y),unitbase);
            printf("\nCurrent position (x,y) = (%.8lf,%.8lf)",x,y);
        }
        else if(strcmp(dir,"east")==0)
        {
            x=x+convert(dist,unit,unitbase);
            total+=convert(dist,unit,unitbase);
            printf("Total distance traveled = %.8lf%s",total,unitbase);
            printf("\nCurrent distance from (0,0) = %.8lf%s",sqrt(x*x+y*y),unitbase);
            printf("\nCurrent position (x,y) = (%.8lf,%.8lf)",x,y);
        }
        else if(strcmp(dir,"west")==0)
        {
            x=x-convert(dist,unit,unitbase);
            total+=convert(dist,unit,unitbase);
            printf("Total distance traveled = %.8lf%s",total,unitbase);
            printf("\nCurrent distance from (0,0) = %.8lf%s",sqrt(x*x+y*y),unitbase);
            printf("\nCurrent position (x,y) = (%.8lf,%.8lf)",x,y);
        }
        else if(strcmp(dir,"south")==0)
        {
            y=y-convert(dist,unit,unitbase);
            total+=convert(dist,unit,unitbase);
            printf("Total distance traveled = %.8lf%s",total,unitbase);
            printf("\nCurrent distance from (0,0) = %.8lf%s",sqrt(x*x+y*y),unitbase);
            printf("\nCurrent position (x,y) = (%.8lf,%.8lf)",x,y);
        }
        else
        {
            printf("\nInvalid direction\n");
            return;
        }
    }
}
double convert(double value,char *from,char *to)
{
    if(strcmp(to,"km")==0)
    {
        if(strcmp(from,"km")==0)
            return value*pow(10,0);
        else if(strcmp(from,"m")==0)
            return value*pow(10,-3);
        else if(strcmp(from,"cm")==0)
            return value*pow(10,-5);
        else
            return value*pow(10,-6);
    }
    else if(strcmp(to,"m")==0)
    {
        if(strcmp(from,"km")==0)
            return value*pow(10,3);
        else if(strcmp(from,"m")==0)
            return value*pow(10,0);
        else if(strcmp(from,"cm")==0)
            return value*pow(10,-2);
        else
            return value*pow(10,-3);
    }
    else if(strcmp(to,"cm")==0)
    {
        if(strcmp(from,"km")==0)
            return value*pow(10,5);
        else if(strcmp(from,"m")==0)
            return value*pow(10,2);
        else if(strcmp(from,"cm")==0)
            return value*pow(10,0);
        else
            return value*pow(10,-1);
    }
    else
    {
        if(strcmp(from,"km")==0)
            return value*pow(10,6);
        else if(strcmp(from,"m")==0)
            return value*pow(10,3);
        else if(strcmp(from,"cm")==0)
            return value*pow(10,1);
        else
            return value*pow(10,0);
    }
}
