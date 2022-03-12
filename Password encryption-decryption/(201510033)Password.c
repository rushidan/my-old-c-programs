#include <stdio.h>
#include <conio.h>
#include <string.h>
void encrypt_pass(char *);
void decrypt_pass(char *);
void main()
{
    char *password=(char*)malloc(26*sizeof(char));
    printf("Enter the password to be encrypted (max 25 characters):\n");
    gets(password);
    printf("\nPress any key to encrypt the password:\n");
    getch();
    encrypt_pass(password);
    printf("\nThe encrypted password has the form:\t%s",password);
    printf("\n\nPress any key again to decrypt the password\n");
    getch();
    decrypt_pass(password);
    printf("\nThe encrypted password has been decrypted and has returned to the original input form of:\t%s\n",password);
    getch();
}
void encrypt_pass(char *pass)
{
    int i;
    for(i=0;i<strlen(pass);i++)
        pass[i] = pass[i]^9;
}
void decrypt_pass(char *pass)
{
    int i;
    for(i=0;i<strlen(pass);i++)
    *(pass+i) = *(pass+i)^9;
}
