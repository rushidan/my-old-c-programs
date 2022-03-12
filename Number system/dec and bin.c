#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int buildnum(int *,int,int);
int digit_count(int);
int  * digits(int);
void main()
{
    int i,j,dint,bint,len,c,num,bfrac[200],binfrac,decfrac,s,sum=0,*digitbin,n;
    char ch,dec[200],bin[800],d_int[100],d_frac[100],b_int[600],b_frac[200];
    double temp,dfrac;
    printf("Press 'd' to convert a decimal no. into binary or press 'b' to convert a binary no. into decimal:\n");
    printf("d/b_");
    start:
    ch=getch();
    switch(ch)
    {
    case 'd':
    {
        printf("\n\nEnter your decimal no._  ");
        reenter1:
        gets(dec);
        len=strlen(dec);
        for(i=0;i<len;i++)//loop for checking whether the input is truly decimal or not
            {
                if(isdigit(dec[i])!=1 && dec[i]!='.')//checks to see if the input string only consists of characters 0-9 but excludes '.'
                {
                    printf("\nInvalid input, the input is not a decimal no., please re-enter\n");
                    goto reenter1;
                }
            }
        for(i=0; i<len; i++) //checking if there is any decimal point in the input, if there is sum=1, otherwise sum=0
        {
            if(dec[i]=='.')
                s=1;
            else
                s=0;
            sum=sum+s;
        }
        if(sum==0)
        {
            dint=atoi(dec);
            itoa(dint,b_int,2);
            printf("\nThe binary equivalent of the input decimal number is = %s",b_int);
        }
        else
        {
            //WORKING ON INTEGER PORTION:
            for(i=0,j=0; dec[i]!='.'; i++,j++)
                d_int[j]=dec[i];
            d_int[j]='\0';//making d_int an actual string
            dint=atoi(d_int);//converting the input integer characters of decimal equivalent into actual decimal
            itoa(dint,b_int,2);//converting the integer part of the input decimal into binary string
            strcat(b_int,".");//appending the decimal point
            //WORKING ON FRACTION PORTION:
            for(i=i+1,j=0; dec[i]!='\0'; i++,j++)
                d_frac[j]=dec[i];//entering the fractional part of the input into d_frac as characters
            for(i=j-1; i>=0; i--)
            {
                if(d_frac[i]=='0')
                    d_frac[i]='\0';//converting the valueless zeros to the right of the fraction part into '\0' characters to get the required string length, by default adds '\0' in the right position to make the required string
                else if(d_frac[i]!='0')
                {
                    d_frac[i+1]='\0';//to make it an actual string
                    break;
                }
            }
            for(c=0; d_frac[c]!='\0'; c++); //c is the no. of digits after fraction point
            dfrac=atof(d_frac);//converting fractional part string into actual double value
            dfrac=dfrac/pow(10,c);//conversion of say 123 of 546.123 to 0.123
            temp=dfrac;
            for(i=0; i<8; i++) //finding fraction values up to 8 places after point
            {
                temp=temp*2;
                if((int)temp==0)
                    bfrac[i]=(int)temp;
                else
                {
                    bfrac[i]=(int)temp;
                    temp=temp-1;
                }
            }
            num=buildnum(bfrac,8,10);//sending fractional digits array where index[0] contains the one's place value
            itoa(num,b_frac,10);//converting the fraction binary lookalike (composed of 1's and 0's but is a decimal) into a string
            strrev(b_frac);//for .375,bfrac=0 1 1 ,after buildnum(bfrac,n), num=110,so b_frac=110\0,so reversing makes required b_frac=011
            strcat(b_int,b_frac);
            if(temp!=0)
                strcat(b_int,"...");
            printf("\nThe binary equivalent of the input decimal number is = %s",b_int);
        }
        break;
    }
    case 'b':
    {
        printf("\n\nEnter your binary no._  ");
        reenter2:
        gets(bin);
        len=strlen(bin);
        for(i=0;i<len;i++)//loop for checking whether the input is truly decimal or not8
            {
                if(bin[i]!='1'&&bin[i]!='0'&&bin[i]!='.')//checks to see if the input string only consists of characters 0,1 or '.'
                {
                    printf("\nInvalid input, the input is not a binary no., please re-enter\n");
                    goto reenter2;
                }
            }
        for(i=0; i<len; i++) //checking if there is any fraction point in the input, if there is sum=1, otherwise sum=0
        {
            if(bin[i]=='.')
                s=1;
            else
                s=0;
            sum=sum+s;
        }
        if(sum==0)
        {
            bint=atoi(bin);
            n=digit_count(bint);//no. of digits of the input binary number
            digitbin=digits(bint);//splitting the digits of the input binary number
            dint=buildnum(digitbin,n,2);//building the equivalent decimal number from the split binary digits
            printf("\nThe decimal equivalent of the input binary number is = %d",dint);
        }
        else
        {
            //WORKING ON INTEGER PORTION:
            bint=atoi(bin);
            n=digit_count(bint);//no. of digits of the input binary number
            digitbin=digits(bint);//splitting the digits of the input binary number
            dint=buildnum(digitbin,n,2);//building the equivalent decimal number from the split binary digits
            //WORKING ON FRACTION PORTION:
            for(i=0;bin[i]!='.';i++);//value of i gives the location of the fraction point
            for(i=i+1,j=0; bin[i]!='\0'; i++,j++)
                b_frac[j]=bin[i];//entering the fractional part of the input into b_frac as characters
            for(i=j-1; i>=0; i--)
            {
                if(b_frac[i]=='0')
                    b_frac[i]='\0';//converting the valueless zeros to the right of the fraction part into '\0' characters to get the required string length, by default adds '\0' in the right position to make the required string
                else if(d_frac[i]!='0')
                {
                    b_frac[i+1]='\0';//to make it an actual string
                    break;
                }
            }
            for(c=0; b_frac[c]!='\0'; c++); //c is the no. of digits after fraction point
            binfrac=atoi(b_frac);//converting the fraction part string into actual integer value
            n=digit_count(binfrac);
            digitbin=digits(binfrac);
            dfrac=0;
            for(i=n-1,j=-1;i>=0;i--,j--)
            {
                dfrac = dfrac + digitbin[i]*pow(2,j);
            }
            printf("\nThe decimal equivalent of the input binary number is = %.8lf",dint+dfrac);
        }
        break;
    }
    default:
        {
            printf("\nPlease press either 'd' or 'b'_  ");
            goto start;
        }
    }
    printf("\n");
    getch();
}
int buildnum(int bfrac[],int c,int base)//building no. from one's place to above where one's place = index[0]
{
    int i;
    double num=0;
    for(i=0; i<c; i++)
    {
        num = num + bfrac[i]*pow(base,i);
    }
    return (int)num;
}
int digit_count(int n)
{
    int i,count=0,a[100];
    for(i=0; ; i++)
    {
        a[i] = n%10;
        count++;
        n = n/10;
        if(n==0)
            break;
    }
    return count;
}
int * digits(int n)
{
    int i,count=0,a[100];
    for(i=0; ; i++)
    {
        a[i] = n%10;
        count++;
        n = n/10;
        if(n==0)
            break;
    }
    return a;
}
