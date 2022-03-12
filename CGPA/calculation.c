#include <stdio.h>
#include <conio.h>
void main()
{
    double a,b,c,A,B,C,CGPA1,CGPA2,CGPA3;
    a=(3*3+1.5*4+3*3.25+.75*3.5+4*3.5+3*3.75+1.5*3.75+3*3.25+.75*4);
    A=20.5;
    b=(3*3.5+3*3.5+4*3+3*4+1.5*4+1.5*3.75+3*3.5+.75*4);
    B=19.75;
    c=(4*3.25+1.5*3.25+3*3.5+4*2.5+3*3+.75*3.25+3*3.75);
    C=19.25;
    CGPA1=(a+b)/(A+B);
    CGPA2=(a+b+c)/(A+B+C);
    CGPA3=(a+b+c+3.8*20.50)/(A+B+C+20.50);
    printf("cgpa1= %.2lf\n\n",CGPA1);
    printf("cgpa2= %.2lf\n\n",CGPA2);
    printf("cgpa2= %.2lf\n\n",CGPA3);
    getch();
}
