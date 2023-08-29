#include <stdio.h>
#include <string.h>

int main() {
    //deklarasi variable
    char kalimat1[100], kalimat2[100], kalimat3[100];
    //input kalimat pertama
    printf("Masukkan kalimat pertama: ");
    gets(kalimat1);
    //input kalimat kedua
    printf("Masukkan kalimat kedua: ");
    gets(kalimat2);
    //input kalimat ketiga
    printf("Masukkan kalimat ketiga: ");
    gets(kalimat3);
    //Penggabungan kalimat
   // printf("=============================================\n");
    printf("\nGabungan 3 buah kalimat = %s %s %s\n", kalimat1, kalimat2, kalimat3);
    printf("=============================================\n");
    //proses pembalikan
    strrev(kalimat1);
    strrev(kalimat2);
    strrev(kalimat3);
    //output hasil pembalikan
    printf("Hasil membalik kalimat gabungan = %s %s %s\n", kalimat1, kalimat2, kalimat3);
    printf("=============================================\n");
    //proses untuk menghitung huruf
    int jumlahHuruf1 = strlen(kalimat1);
    int jumlahHuruf2 = strlen(kalimat2);
    int jumlahHuruf3 = strlen(kalimat3);
    int totalJumlahHuruf = jumlahHuruf1 + jumlahHuruf2 + jumlahHuruf3;
    //output hasil menghitung huruf
    printf("Jumlah Huruf kalimat pertama = %d\n", jumlahHuruf1);
    printf("=============================================\n");
    printf("Jumlah Huruf kalimat kedua = %d\n", jumlahHuruf2);
    printf("=============================================\n");
    printf("Jumlah Huruf kalimat ketiga = %d\n", jumlahHuruf3);
    printf("=============================================\n");
    printf("Total Jumlah huruf = %d\n", totalJumlahHuruf);
    printf("=============================================\n");

    return 0;
}
