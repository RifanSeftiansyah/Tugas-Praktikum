#include <stdio.h>

int main() {
    int jam_masuk, jam_keluar;
    int lama_parkir, biaya;

	printf(" Program Biaya Parkir \n");
	printf("----------------------\n");
    // Input jam masuk dan jam keluar
    printf(">Masukkan jam masuk (JAM): ");
    scanf("%d", &jam_masuk);
    printf(">Masukkan jam keluar (JAM): ");
    scanf("%d", &jam_keluar);

    // Hitung lama parkir
    lama_parkir = jam_keluar - jam_masuk;

    // Hitung biaya parkir
    if (lama_parkir <= 2) {
        biaya = 2000;
    } else {
        biaya = 2000 + (lama_parkir - 2) * 500;
    }

    // Tampilkan biaya parkir
    printf("Biaya parkir: %d Rupiah\n", biaya);

    return 0;
}
