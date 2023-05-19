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

            int mulai = 0;
            while (mulai < 1 || mulai > 2)
            {
                printf("Apakah Anda ingin melanjutkan ke quiz?\n");
                printf("1 = yay\n");
                printf("2 = nay\n");
                printf("1/2: ");
                scanf("%d", &mulai);
            system("cls");
                if (mulai < 1 || mulai > 2)
                {
                    printf("Pilih Jawaban Yang Kamu Anggap Benar");
                }

                if (mulai == 1)
                {
                    int skor = 0;

                    soal1(&skor);
                    soal2(&skor);
                    soal3(&skor);
                    soal4(&skor);
                    soal5(&skor);

                    point(skor);
                }
            }
        }
        else
        {
            printf("\t\t\tAnda Gagal login !\n");
                printf("\t\t\t!!!PERINGATAN!!! \n");
                printf("Perhatikan Kembali Username dan Passsword Yang Anda Masukkan !!\n\n");
         }
 }
    return 0;
}

void soal1(int *skor)
{
    printf("Soal 1: Jika POST adalah 1234 dan FLIRT adalah 56784 maka FROST adalah?\n");
    printf("a. gatau\n");
    printf("b. 58234\n");
    printf("c. 58243\n");
    printf("d. 52384\n");
    printf("Jawaban Anda (a/b/c/d): ");

    char jawaban[10];
    scanf("%s", jawaban);

    if (strcmp(jawaban, "b") == 0)
    {
        printf("Jawaban Anda benar!\n");
        *skor += 1;
    }
    else
    {
        printf("Jawaban Anda salah!\n");
    }

    printf("\n");
}

void soal2(int *skor)
{
    printf("Soal 2: Apakah huruf keempat dalam abjad?\n");
    printf("a. b\n");
    printf("b. d\n");
    printf("c. a\n");
    printf("d. c\n");
    printf("Jawaban Anda (a/b/c/d): ");

    char jawaban[10];
    scanf("%s", jawaban);

    if (strcmp(jawaban, "c") == 0)
    {
        printf("Jawaban Anda benar!\n");
        *skor += 1;
    }
    else
    {
        printf("Jawaban Anda salah!\n");
    }

    printf("\n");
}

void soal3(int *skor)
{
    printf("Soal 3: Tentara apa yang ukurannya kecil-kecil??\n");
    printf("a. Tentara sekutu\n");
    printf("b. TNI\n");
    printf("c. Tentara RI\n");
    printf("d. Polri\n");
    printf("Jawaban Anda (a/b/c/d): ");

    char jawaban[10];
    scanf("%s", jawaban);

    if (strcmp(jawaban, "a") == 0)
    {
        printf("Jawaban Anda benar!\n");
        *skor += 1;
    }
    else
    {
        printf("Jawaban Anda salah!\n");
    }

    printf("\n");
}

void soal4(int *skor)
{
    printf("Soal 4: Siapakah anggota kelompok ini\n");
    printf("a. Semua cantik\n");
    printf("b. l,k,r,m\n");
    printf("c. z,v,t,u\n");
    printf("d. m,m,r,s\n");
    printf("Jawaban Anda (a/b/c/d): ");

    char jawaban[10];
    scanf("%s", jawaban);

    if (strcmp(jawaban, "a") == 0)
    {
        printf("Jawaban Anda benar!\n");
        *skor += 1;
    }
    else
    {
        printf("Jawaban Anda salah!\n");
    }

    printf("\n");
}

void soal5(int *skor)
{
    printf("Soal 5: Paus pembunuh adalah nama lain dari paus\n");
    printf("a. Orcchid\n");
    printf("b. Octo\n");
    printf("c. Orca\n");
    printf("d. Orphin\n");
    printf("Jawaban Anda (a/b/c/d): ");

    char jawaban[10];
    scanf("%s", jawaban);

    if (strcmp(jawaban, "c") == 0)
    {
        printf("Jawaban Anda benar!\n");
        *skor += 1;
    }
    else
    {
        printf("Jawaban Anda salah!\n");
    }

    printf("\n");
}