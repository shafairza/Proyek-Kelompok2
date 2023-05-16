#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct registration
{
    char nama[20];
    char umur[20];
    char username[20];
    char password[20];
} regis;

    void mainkan_quiz() {
    char pertanyaan[100] = "Siapakah Musliadi?";
    char jawaban[20] = "gatau";

    printf("\nPertanyaan:\n%s\n", pertanyaan);

    char jawabanInput[20];
    printf("Jawaban: ");
    scanf("%s", jawabanInput);

    if (strcmp(jawabanInput, jawaban) == 0) {
        printf("\nJawaban Anda benar!\n");
    } else {
        printf("\nJawaban Anda salah. Jawaban yang benar adalah %s\n", jawaban);
    }
}

int main(int manyArgc, char *argc[])
{
    if(manyArgc == 1){
        regis reg;
        printf("\n");
        printf("**\t\t Wellcome to Our Quiz Brain Busters \t\t**\n");
        printf("Silahkan Registrasi Terlebih Dahulu Sebelum Memulai Game Quiz \n");
        printf("Nama\t\t: "); gets(reg.nama);
        printf("Umur\t\t: "); gets(reg.umur);
        printf("\n");
        system("cls");
        printf("\tLets create your account <3\n");
        printf("Username\t: "); gets(reg.username);
        printf("Password\t: "); gets(reg.password);
        system("cls");
        printf("\nCreate Account Success !!\n");
        system("cls");
        printf("Let's login and enjoy the game <3 !\n");
        printf("Silahkan Masukan ./main Username Pasword");

        FILE *fpw = fopen("database/login.bin", "wb");

        char insl[3] = "#";
        strcat(reg.username, insl);
        strcat(reg.username, reg.password);

        fwrite(reg.username, sizeof(char), sizeof(reg.username)/sizeof(char), fpw);

        fclose(fpw);
    }

    if(manyArgc == 2){
        printf("\nFail to login!!\n");
        printf("Anda Belum Memasukkan Password !!\n");
        system("cls");
    }

    if(manyArgc == 3)
    {
        regis reg;

        char usernameInput[10], passwordInput[10];
        strcpy(usernameInput, argc[1]);
        strcpy(passwordInput, argc[2]);
        
        FILE *fpr = fopen("database/login.bin", "rb");

        fread(reg.username, sizeof(char), sizeof(reg.username)/sizeof(char), fpr);

        fclose(fpr);

        char *string[3];
        char username[20], password[20];
        int ctrl = 0;

        string[0] = strtok(reg.username, "#");
        while (string[ctrl++] != NULL){
            string[ctrl] = strtok(NULL, "#");
        }

        strcpy(username, string[0]);
        strcpy(password, string[1]);

        if( (strcmp(usernameInput, username) == 0 ) && (strcmp(passwordInput, password) == 0)) {
            printf("***********\n");
            printf("Selamat Anda Berhasil Login !\n");
            printf("***********\n");
            system("cls");

        char jawaban;
        printf("Apakah Anda ingin melanjutkan ke quiz? (y/n) ");
        scanf(" %c", &jawaban);
        if (jawaban == 'y') {
            system("cls");
            mainkan_quiz();
        } else {
            printf("Terima kasih telah menggunjungi  Brain Buster.\n");
        }
        }  else {
                printf("Anda Gagal login !\n");
                printf("\t\t\t!!!PERINGATAN!!! \n");
                printf("Perhatikan Kembali Username dan Passsword Yang Anda Masukkan !!\n\n");
                system("cls");
         }
 }
    return 0;
}