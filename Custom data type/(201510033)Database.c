#include <stdio.h>
#include <conio.h>
typedef struct database
{
    char *name,*gr;
    int att:6,ct:7,tf:9;
} db;
void main()
{
    db tesla,edison;
    tesla.name = "N. Tesla";
    tesla.att = 30;
    tesla.ct = 57;
    tesla.tf = 200;
    tesla.gr = "A+";
    edison.name = "T. A. Edison";
    edison.att = 4;
    edison.ct = 25;
    edison.tf = 100;
    edison.gr = "D";
    printf("A database made with the provided information regarding Tesla and Edison is presented below:\n\n");
    printf("---------------------------------------------------------------------------\n");
    printf("|      Name      | Attendance(30) | CT(60) | Term final exam(210) | Grade |\n");
    printf("---------------------------------------------------------------------------\n");
    printf("%c %-14s %c %6c%-2d%6c %c %2c%-2d%2c %c %8c%-3d%9c %c %2c%-2s%c %c\n",'|',tesla.name,'|',' ',tesla.att,' ','|',' ',tesla.ct,' ','|',' ',tesla.tf,' ','|',' ',tesla.gr,' ','|');
    printf("---------------------------------------------------------------------------\n");
    printf("%c %-14s %c %6c%-2d%6c %c %2c%-2d%2c %c %8c%-3d%9c %c %2c%-2s%c %c\n",'|',edison.name,'|',' ',edison.att,' ','|',' ',edison.ct,' ','|',' ',edison.tf,' ','|',' ',edison.gr,' ','|');
    printf("---------------------------------------------------------------------------\n");
}
