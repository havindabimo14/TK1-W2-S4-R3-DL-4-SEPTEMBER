#include <stdio.h>

int main() {
    int totalDetik, jam, menit, detikSisa;

    // Menerima input total detik dari pengguna
    printf("Masukkan total detik: ");
    scanf("%d", &totalDetik);

    // Menghitung jam, menit, dan detik
    jam = totalDetik / 3600;
    detikSisa = totalDetik % 3600;
    menit = detikSisa / 60;
    detikSisa = detikSisa % 60;

    // Menampilkan hasil konversi
    printf("Konversi waktu:\n");
    printf("Jam: %d\n", jam);
    printf("Menit: %d\n", menit);
    printf("Detik: %d\n", detikSisa);

    return 0;
}
