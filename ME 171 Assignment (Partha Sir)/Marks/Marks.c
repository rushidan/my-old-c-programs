#include <stdio.h>
#include <conio.h>
void main()
{
    FILE *io;
    int marks[5],comparemarks[5],i,lowest;
    printf("Enter the five marks:\n");
    io=fopen("Marks.txt","w");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
        fprintf(io,"%d\t",marks[i]);
    }
    fclose(io);
    io=fopen("Marks.txt","r");
    for(i=0;i<5;i++)
    {
        fscanf(io,"%d\t",&comparemarks[i]);
    }
    fclose(io);
    lowest=comparemarks[0];
    for(i=0;i<5;i++)
    {
        if(lowest>=comparemarks[i])
        lowest=comparemarks[i];
    }
    printf("\nThe required output is:\n");
    for(i=0;i<5;i++)
    {
        if(comparemarks[i]==lowest)
            printf("%d\n",0);
        else
            printf("%d\n",comparemarks[i]);
    }
    getch();
}
