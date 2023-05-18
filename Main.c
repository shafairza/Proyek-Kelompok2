#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct registration
{
    char nama[20];
    char umur[20];
    char username[20];
    char password[20];
} regis;

void soal1(int *skor);
void soal2(int *skor);
void soal3(int *skor);
void soal4(int *skor);
void soal5(int *skor);
void point(int skor);

int main(int manyArgc, char *argc[])
{
    if (manyArgc == 1)
    {
        regis reg;
        printf("\n");
        printf("**\t\t Welcome to Our Mini Quiz Brain Busters \t\t**\n");
        printf("Please Register, Before Starting Mini Quiz Game \n");
        printf("Name\t\t: "); gets(reg.nama);
        printf("Age\t\t: "); gets(reg.umur);
        printf("\n");
        system("cls");
        printf("\tLet's Create Account guys <3\n");
        printf("Username\t: "); gets(reg.username);
        printf("Password\t: "); gets(reg.password);
        system("cls");
        printf("\nCreate Account Success!!\n");
        system("cls");
        printf("Let's Login and Enjoy Our Mini Quiz<3 !\n");
        printf("Silahkan Masukan ./main Username Password");

        FILE *fpw = fopen("database/login.bin", "wb");

        char insl[3] = "#";
        strcat(reg.username, insl);
        strcat(reg.username, reg.password);

        fwrite(reg.username, sizeof(char), sizeof(reg.username) / sizeof(char), fpw);

        fclose(fpw);
    }

    if (manyArgc == 2)
    {
        printf("\nFail to Login!!\n");
        printf("You Haven't Entered The Password !!\n");
        system("cls");
    }

    if (manyArgc == 3)
    {
        regis reg;

        char usernameInput[10], passwordInput[10];
        strcpy(usernameInput, argc[1]);
        strcpy(passwordInput, argc[2]);

        FILE *fpr = fopen("database/login.bin", "rb");

        fread(reg.username, sizeof(char), sizeof(reg.username) / sizeof(char), fpr);

        fclose(fpr);

        char *string[3];
        char username[20], password[20];
        int ctrl = 0;

        string[0] = strtok(reg.username, "#");
        while (string[ctrl++] != NULL)
        {
            string[ctrl] = strtok(NULL, "#");
        }

        strcpy(username, string[0]);
        strcpy(password, string[1]);

        if ((strcmp(usernameInput, username) == 0) && (strcmp(passwordInput, password) == 0))
        {
            printf("***********\n");
            printf("Successfully Login!\n");
            printf("***********\n");
            system("cls");
        }
    }
}