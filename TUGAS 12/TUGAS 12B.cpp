#include <stdio.h>

int main() {
    char A[11] = {'A', 'J', 'O', 'G', 'J', 'A', 'K', 'A', 'R', 'T', 'A'};
    int count[26] = {0}; // Array untuk menyimpan jumlah kemunculan setiap huruf
    int maxCount = 0;
    char maxChar;

    // Menghitung kemunculan setiap huruf dalam array A
    for (int i = 0; i < 11; i++) {
        if (A[i] >= 'A' && A[i] <= 'Z') {
            count[A[i] - 'A']++;
            if (count[A[i] - 'A'] > maxCount) {
                maxCount = count[A[i] - 'A'];
                maxChar = A[i];
            }
        }
    }

    // Mencetak huruf yang paling sering muncul beserta jumlah kemunculannya
    printf("Huruf yang paling banyak adalah '%c' dengan jumlah %d\n", maxChar, maxCount);

    return 0;
}
