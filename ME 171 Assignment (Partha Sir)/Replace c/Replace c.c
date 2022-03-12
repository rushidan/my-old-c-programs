#include <stdio.h>
#include <conio.h>
void main()
{
    FILE *io;
    char string[100];
    int i;
    io=fopen("Matlab_Intro.txt","w");
    fputs("In our programming class, we save our files in .c format.",io);
    fclose(io);
    io=fopen("Matlab_Intro.txt","r");
    fgets(string,60,io);
    //fscanf(io,"%[^\n]s",string);
    fclose(io);
    for(i=0;;i++)
    {
        if(string[i]=='.' && string[i+1]=='c')
        {
            string[i+1]='m';
            break;
        }
    }
    puts(string);
}
