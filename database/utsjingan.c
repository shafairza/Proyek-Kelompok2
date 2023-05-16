#include <stdio.h> //declaradi header
#include <stdlib.h>

int main()
{ // fungsi utama

    int menu, input, ulang, beli, jumlah, uang = 0, uangkembali, uangkembalilagi; // deklarasi variabel
    int *ptrUangKembali = &uangkembali;                                           // deklarasi pointer
    int *ptrUangKembaliLagi = &uangkembalilagi;

    printf("SELAMAT DATANG DI TOKO AL-ITSNAINI!\n");
    printf("Menjual Berbagai Kebutuhan Muslim\n");
    printf("Ada yang dapat kami bantu?\n");
menu:                 // flow Contreol goto
    printf("MENU\n"); // menampilkan menu kepada pembeli
    printf("1. Tampilkan barang\n");
    printf("2. B1eli barang\n");
    printf("3. Lakukan Pembayaran\n");
    printf("4. Keluar\n");
    printf("Masukkan input : ");
    scanf("%d", &input);
    system("cls"); // membersihkan layar

    if (input == 1)
    { // menampilkan tampilan jika memlih input = 1
      //  menampilkan floc control if
        printf("x~~~~~~~~x~~~x\n");
        printf("| Barang                |  Harga |\n");
        printf("x~~~~~~~~x~~~x\n");
        printf("| 1. Spotify 1 bulan    |  Rp20.000   |\n");
        printf("| 2. Spotify 2 bulan    |  Rp40.000   |\n");
        printf("| 3. Spotify 3 bulan    |  Rp60.000   |\n");
        printf("| 4. Spotify 4 bulan    |  Rp80.000   |\n");
        printf("| 5. Spotify 5 bulan    |  Rp100.000  |\n");
        printf("x~~~~~~~~x~~~x\n");
    input:
        printf("Input 0 untuk kembali ke menu : ");
        scanf("%d", &menu);
        system("cls");
        if (menu == 0)
        {
            goto menu; // flow control
        }
        else
        {
            printf("Input anda salah ketika 1 untuk mengulangi :");
            scanf("%d", &ulang);
            if (ulang == 1)
                goto input;
        }
    }
    if (input == 2)
    { // menyuruh user mimilih pilihan belanja
        printf("x~~~~~~~~x~~~x\n");
        printf("| Barang                |  Harga |\n");
        printf("x~~~~~~~~x~~~x\n");
        printf("| 1. Spotify 1 bulan    |  Rp20.000   |\n");
        printf("| 2. Spotify 2 bulan    |  Rp40.000   |\n");
        printf("| 3. Spotify 3 bulan    |  Rp60.000   |\n");
        printf("| 4. Spotify 4 bulan    |  Rp80.000   |\n");
        printf("| 5. Spotify 5 bulan    |  Rp100.000  |\n");
        printf("x~~~~~~~~x~~~x\n");
        printf("Masukkan barang yang ingin di beli : ");
        scanf("%d", &beli);
        printf("Masukkan Jumlah barang yang ingin di beli : ");
        scanf("%d", &jumlah);
        system("cls");
        printf("Pilih Lakukan Pembayaran\n");
        goto menu;
    }
    if (input == 3)
    {
        int siwak = 10000, tasbih = 8000, parfum = 30000;
        int buku = 35000, peci = 50000; // deklarasi belanja
        if (beli == 1)
        {
            int bayar = jumlah * siwak;
            printf("Total Belanja Anda : Rp.%d\n", bayar); // menampilkan total belanjaan
            printf("Masukkan Uang Anda : Rp.");            // memerintahkan user untuk memasukan uang
            scanf("%d", &uang);
            if (uang > bayar)
            {
                printf("Kembalian Anda : Rp.%d\n", uang - bayar);
            }
            if (uang == bayar)
            {
                printf("Uang Anda PAS\n");
            }
            else if (uang < bayar)
            {
                printf("Uang anda kurang Rp.%d\n", bayar - uang);
                printf("Masukkan uang anda kembali : ");
                scanf("%d", &uangkembali);
                if (uang + *ptrUangKembali < bayar)
                {
                    printf("TOTAL YANG ANDA MASUKKAN ADALAH : %d\n", uang + *ptrUangKembali);
                    printf("Uang Anda Masih Kurang\n");
                    printf("Silahakan datang lain kali\n");
                    system("exit 0");
                }
                if (uang + *ptrUangKembali > bayar)
                {
                    printf("Kembalian Anda : %d\n", (uang + *ptrUangKembali) - bayar);
                }
            }
        }
        if (beli == 2)
        {
            int bayar = jumlah * tasbih;
            printf("Total Belanja Anda : Rp.%d\n", bayar);
            printf("Masukkan Uang Anda : Rp.");
            scanf("%d", &uang);
            if (uang > bayar)
            {
                printf("Kembalian Anda : Rp.%d\n", uang - bayar);
            }
            if (uang == bayar)
            {
                printf("Uang Anda PAS\n");
            }
            else if (uang < bayar)
            {
                printf("Uang anda kurang Rp.%d\n", bayar - uang);
                printf("Masukkan uang anda kembali : ");
                scanf("%d", &uangkembali);
                if (uang + *ptrUangKembali < bayar)
                {
                    printf("TOTAL YANG ANDA MASUKKAN ADALAH : %d\n", uang + *ptrUangKembali);
                    printf("Uang Anda Masih Kurang\n");
                    printf("Silahakan datang lain kali\n");
                    system("exit 0");
                }
                if (uang + *ptrUangKembali > bayar)
                {
                    printf("Kembalian Anda : %d\n", (uang + *ptrUangKembali) - bayar);
                }
            }
        }
        if (beli == 3) // ketika user memilih input 3
        {
            int bayar = jumlah * parfum;
            printf("Total Belanja Anda : Rp.%d\n", bayar);
            printf("Masukkan Uang Anda : Rp.");
            scanf("%d", &uang);
            if (uang > bayar)
            {
                printf("Kembalian Anda : Rp.%d\n", uang - bayar);
            }
            if (uang == bayar)
            {
                printf("Uang Anda PAS\n");
            }
            else if (uang < bayar)
            {
                printf("Uang anda kurang Rp.%d\n", bayar - uang);
                printf("Masukkan uang anda kembali : ");
                scanf("%d", &uangkembali);
                if (uang + *ptrUangKembali < bayar)
                {
                    printf("TOTAL YANG ANDA MASUKKAN ADALAH : %d\n", uang + *ptrUangKembali);
                    printf("Uang Anda Masih Kurang\n");
                    printf("Silahakan datang lain kali\n");
                    system("exit 0");
                }
                if (uang + *ptrUangKembali > bayar)
                {
                    printf("Kembalian Anda : %d\n", (uang + *ptrUangKembali) - bayar);
                }
            }
        }
        if (beli == 4) // ketika user memilih belanja 4
        {
            int bayar = jumlah * buku;
            printf("Total Belanja Anda : Rp.%d\n", bayar);
            printf("Masukkan Uang Anda : Rp.");
            scanf("%d", &uang);
            if (uang > bayar)
            {
                printf("Kembalian Anda : Rp.%d\n", uang - bayar);
            }
            if (uang == bayar)
            {
                printf("Uang Anda PAS\n");
            }
            else if (uang < bayar)
            {
                printf("Uang anda kurang Rp.%d\n", bayar - uang);
                printf("Masukkan uang anda kembali : ");
                scanf("%d", &uangkembali);
                if (uang + *ptrUangKembali < bayar)
                {
                    printf("TOTAL YANG ANDA MASUKKAN ADALAH : %d\n", uang + *ptrUangKembali);
                    printf("Uang Anda Masih Kurang\n");
                    printf("Silahakan datang lain kali\n");
                    system("exit 0");
                }
                if (uang + *ptrUangKembali > bayar)
                {
                    printf("Kembalian Anda : %d\n", (uang + *ptrUangKembali) - bayar);
                }
            }
        }
        if (beli == 5) // ketika user memilih belanja 5
        {
            int bayar = jumlah * peci;
            printf("Total Belanja Anda : Rp.%d\n", bayar);
            printf("Masukkan Uang Anda : Rp.");
            scanf("%d", &uang);
            if (uang > bayar)
            {
                printf("Kembalian Anda : Rp.%d\n", uang - bayar);
            }
            if (uang == bayar)
            {
                printf("Uang Anda PAS\n");
            }
            else if (uang < bayar)
            {
                printf("Uang anda kurang Rp.%d\n", bayar - uang);
                printf("Masukkan uang anda kembali : ");
                scanf("%d", &uangkembali);
                if (uang + *ptrUangKembali < bayar)
                {
                    printf("TOTAL YANG ANDA MASUKKAN ADALAH : %d\n", uang + *ptrUangKembali);
                    printf("Uang Anda Masih Kurang\n");
                    ;
                    printf("Silahakan datang lain kali\n");
                    system("exit 0");
                }
                if (uang + *ptrUangKembali > bayar)
                {
                    printf("Kembalian Anda : %d\n", (uang + *ptrUangKembali) - bayar);
                }
            }
        }
    }
    printf("Terimakasih Telah Berbelanja Di TOKO AL-ITSNAINI Kami!");
    if (input > 3) // sistem akan berhentik atau keluar jika memilih angka di atas 4
    {
        system("exit 0");
    }

    return 0;
}