#include <stdio.h>

int main() {
    char jenis;
    float harga, diskon, harga_diskon;
	
	printf(" Program Menghitung Diskon \n");
	printf("----------------------------\n");
    // Input kode, jenis, dan harga
    printf("Masukkan kode (A, B, atau C): ");
    scanf(" %c", &jenis);  // Menggunakan " %c" untuk menghindari masalah newline
    printf("Masukkan harga: ");
    scanf("%f", &harga);

    // Hitung diskon sesuai jenis
    switch (jenis) {
        case 'A':
            diskon = 0.10;
            break;
        case 'B':
            diskon = 0.15;
            break;
        case 'C':
            diskon = 0.20;
            break;
        default:
            printf("Jenis tidak valid.\n");
            return 1;  // Keluar dengan kode kesalahan
    }

    // Hitung harga setelah diskon
    harga_diskon = harga - (harga * diskon);

    // Tampilkan harga setelah diskon
    printf("Harga setelah diskon: %.2f\n", harga_diskon);

    return 0;
}
