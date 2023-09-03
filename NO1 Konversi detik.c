#include <stdio.h>

int main(){
    int j=0,m=0,d=0;
    printf("Masukan Waktu dalam satuan detik: "); // form ouput
    scanf("%d", &d); // form input satuan detik
    // 1jam = 3600 detik.

    j = d / 3600; 
    d = d % 3600;

    // 1 menit = 60 detik.

    m = d / 60;
    d = d % 60;

    printf("======================================");
    printf("\nsama dengan %d jam  %d menit %d detik",j,m,d); // print output
    return 0;
}