#include <stdio.h>

int main() {
    // Deklarasi variabel
    char k1[200], k2[200], k3[200];
    
    printf("Silakan input Kalimat 1 = ");
    gets(k1);

    printf("Silakan input Kalimat 2 = ");
    gets(k2);

    printf("Silakan input Kalimat 3 = ");
    gets(k3);

    // new variabel Gabungkan kalimat
    char gabungan[600]; // Maksimal jumlah huruf yang bisa digabung
    int kalimat = 0;
    
    // Salin kalimat pertama ke variabel gabungan
    for (int i = 0; k1[i] != '\0'; i++) {
        gabungan[kalimat] = k1[i];
        kalimat++;
    }

    // fungsi menambah spasi antar kalimat
    gabungan[kalimat] = ' ';
    kalimat++;

    // Salin kalimat kedua ke variabel gabungan
    for (int i = 0; k2[i] != '\0'; i++) {
        gabungan[kalimat] = k2[i];
        kalimat++;
    }

    // fungsi menambah spasi antar kalimat
    gabungan[kalimat] = ' ';
    kalimat++;

    // Salin kalimat ketiga ke variabel gabungan
    for (int i = 0; k3[i] != '\0'; i++) {
        gabungan[kalimat] = k3[i];
        kalimat++;
    }

    gabungan[kalimat] = '\0';

    // Output kalimat 3 kalimat yang sudah digabung
    printf("\nGabungan 3 inputan kalimat = %s\n", gabungan);

    // fungsi membalikan 3 kalimat inputan yang sudah digabung
    printf("======================================\n");
    printf("Hasil membalik kalimat gabungan = ");
    for (int i = kalimat - 1; i >= 0; i--) {
        printf("%c", gabungan[i]);
    }
    printf("\n");
    

    // Menghitung huruf dalam masing-masing kalimat
    int jh1 = 0;
    int jh2 = 0;
    int jh3 = 0;
    
    // Menghitung panjang huruf kalimat pertama
    for (int i = 0; k1[i] != '\0'; i++) {
        jh1++;
    }
    
    // Menghitung panjang huruf kalimat kedua
    for (int i = 0; k2[i] != '\0'; i++) {
        jh2++;
    }
    
    // Menghitung panjang huruf kalimat ketiga
    for (int i = 0; k3[i] != '\0'; i++) {
        jh3++;
    }

    // Output jumlah huruf dalam setiap kalimat
    printf("======================================\n");
    printf("Jumlah Huruf kalimat pertama = %d\n", jh1);
    printf("======================================\n");
    printf("Jumlah Huruf kalimat kedua = %d\n", jh2);
    printf("======================================\n");
    printf("Jumlah Huruf kalimat ketiga = %d\n", jh3);
    printf("======================================\n");

    // Menghitung total jumlah huruf
    int totaljh = jh1 + jh2 + jh3;

    // Output total jumlah huruf
    printf("Total Jumlah huruf = %d\n", totaljh);
    printf("======================================\n");

    return 0;
}
