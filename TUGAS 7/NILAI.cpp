#include <stdio.h>

int main() {
    int nilai[10];
    int i;

    printf("Masukkan 10 nilai mahasiswa:\n");

    // Mengisi array dengan 10 nilai yang diinputkan
    for (i = 0; i < 10; i++) {
        printf("Nilai ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
    }

    printf("Daftar nilai mahasiswa yang lulus (nilai >= 60):\n");

    // Mencetak nilai yang lulus (>= 60)
    for (i = 0; i < 10; i++) {
        if (nilai[i] >= 60) {
            printf("Nilai ke-%d: %d\n", i + 1, nilai[i]);
        }
    }

    return 0;
}