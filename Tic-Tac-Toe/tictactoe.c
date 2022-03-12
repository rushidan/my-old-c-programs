#include <stdio.h>
#include <conio.h>
#include <time.h>
char symbol;
int matrix[3][3];
int userX,userY;
void choooseSymbol(void);
void get_userMove(void);
void show_userMove(void);
void machineMove(void);
void printBox();
void putMove();
int main()
{
    chooseSymbol();
    get_userMove();
    show_userMove();
    //machineMove();
    return 0;
}
void chooseSymbol(void)
{
    printf("Please select the symbol you want to use (O/X)\n");
    symbol=getchar();
}
void get_userMove(void)
{
    printf("Select the location of your move (row,column)\n");
    scanf("%d %d",&userX,&userY);
}
void show_userMove(void)
{
    int i=1,j=1;
    printf("Your move is:\n\n");
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            if(i!=userX || j!=userY){
                printBox();
            }else{
            putMove();
            }

        }
    }
}
void printBox()
{
    printf("\t---\n");
    printf("\t| |\n");
    printf("\t---");
}
void putMove()
{
    printf("")
}

