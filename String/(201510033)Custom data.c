#include <stdio.h>
#include <conio.h>
typedef struct database
{
    char *name,*gr;
    int att,ct,tf;
} db;
void main()
{
    db tesla,edison;
    printf("Input the following information about Tesla:\n");
    printf("Name:\t");
    tesla.name = (char*)malloc(100*sizeof(char));
    gets(tesla.name);
    printf("\nAttendance marks(30):\t");
    scanf("%d",&tesla.att);
    printf("\nCT marks(60):\t");
    scanf("%d",&tesla.ct);
    printf("\nTerm final exam marks(210):\t");
    scanf("%d",&tesla.tf);
    printf("\nGrade:\t");
    tesla.gr=(char*)malloc(2*sizeof(char));
    scanf("%s",tesla.gr);
    printf("\n\nInput the following information about Edison:\n");
    printf("Name:\t");
    edison.name = (char*)malloc(100*sizeof(char));
    getchar();
    scanf("%[^\n]s",edison.name);
    printf("\nAttendance marks(30):\t");
    scanf("%d",&edison.att);
    printf("\nCT marks(60):\t");
    scanf("%d",&edison.ct);
    printf("\nTerm final exam marks(210):\t");
    scanf("%d",&edison.tf);
    printf("\nGrade:\t");
    edison.gr=(char*)malloc(2*sizeof(char));
    scanf("%s",edison.gr);
    printf("\n\nPress any key to obtain the organized database with these information:\n\n");
    getch();
    printf("---------------------------------------------------------------------------\n");
    printf("|      Name      | Attendance(30) | CT(60) | Term final exam(210) | Grade |\n");
    printf("---------------------------------------------------------------------------\n");
    printf("%c %-14s %c %6c%-2d%6c %c %2c%-2d%2c %c %8c%-3d%9c %c %2c%-2s%c %c\n",'|',tesla.name,'|',' ',tesla.att,' ','|',' ',tesla.ct,' ','|',' ',tesla.tf,' ','|',' ',tesla.gr,' ','|');
    printf("---------------------------------------------------------------------------\n");
    printf("%c %-14s %c %6c%-2d%6c %c %2c%-2d%2c %c %8c%-3d%9c %c %2c%-2s%c %c\n",'|',edison.name,'|',' ',edison.att,' ','|',' ',edison.ct,' ','|',' ',edison.tf,' ','|',' ',edison.gr,' ','|');
    printf("---------------------------------------------------------------------------\n");
    getch();
}
