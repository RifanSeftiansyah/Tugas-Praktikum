#include <stdio.h>

int main() {
    int jam_masuk, jam_pulang, lama_bekerja;

	printf(" Program Menghitung Jam Kerja \n");
	printf("------------------------------\n");
    // Input jam masuk dan jam pulang
    printf(">Masukkan jam masuk (1-12): ");
    scanf("%d", &jam_masuk);
    printf("Masukkan jam pulang (1-12): ");
    scanf("%d", &jam_pulang);

    // Validasi jam masuk dan jam pulang
    if (jam_masuk < 1 || jam_masuk > 12 || jam_pulang < 1 || jam_pulang > 12) {
        printf("Jam masuk atau jam pulang tidak valid.\n");
        return 1;  // Keluar dengan kode kesalahan
    }

    // Hitung lama bekerja
    lama_bekerja = jam_pulang - jam_masuk;

    // Tampilkan lama bekerja
    printf("Lama bekerja: %d jam\n", lama_bekerja);

    return 0;
}
