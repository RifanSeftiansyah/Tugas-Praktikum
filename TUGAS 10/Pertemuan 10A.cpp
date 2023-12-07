#include <stdio.h>

int main() {
    int A[] = {12, 8, 17, 5, 15}; // contoh Array A
    int B[12] = {5, 11, 7, 25, 9, 12, 14}; // Array B dengan 12 elemen
    int C[12]; // Array C dengan 12 elemen

    int countC = 0; // variabel untuk menghitung jumlah elemen di Array C

    // Menyalin nilai yang lebih besar dari 10 dari Array A ke Array C
    for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++) {
        if (A[i] > 10) {
            C[countC] = A[i];
            countC++;
        }
    }

    // Menyalin nilai yang lebih besar dari 10 dari Array B ke Array C
    for (int i = 0; i < sizeof(B) / sizeof(B[0]); i++) {
        if (B[i] > 10) {
            C[countC] = B[i];
            countC++;
        }
    }

    // Menampilkan isi Array C yang sudah terisi
    printf("Isi Array C yang lebih besar dari 10:\n");
    for (int i = 0; i < countC; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
