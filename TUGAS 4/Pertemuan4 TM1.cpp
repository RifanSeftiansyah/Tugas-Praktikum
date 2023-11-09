#include <stdio.h>

int main() {
    int bilangan;
	
	printf("Program Kondisi Ganjil dan Genap\n");
	printf("--------------------------------\n");
    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &bilangan);

    if (bilangan <= 0) {
        printf("Bilangan yang Anda masukkan bukan bilangan bulat positif.\n");
    } else {
        if (bilangan % 2 == 0) {
            printf("Bilangan ini adalah GENAP.\n");
        } else {
            printf("Bilangan ini adalah GANJIL.\n");
        }
    }

    return 0;
}
