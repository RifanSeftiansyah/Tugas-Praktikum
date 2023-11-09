#include <stdio.h>

int main() {
    int N;
	
	printf("Program Kondisi IF dan ELSE\n");
	printf("---------------------------\n");
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    if (N > 50) {
        N -= 25; // Menambahkan 25 ke N jika N > 50
        printf("Nilai N : %d\n", N);
    } else if (N <= 50) {
    	N += 10; //Menambahkan 10 ke N jika N <= 50
        printf("Nilai N : %d\n", N);
    }

    return 0;
}
