#include <stdio.h>

int main() {
    int i, num = 1;

    // Mencetak deret angka
    for (i = 0; i < 11; i++) {
        printf("%d ", num);
        num *= 2; // Mengalikan angka sebelumnya dengan 2
    }

    return 0;
}
