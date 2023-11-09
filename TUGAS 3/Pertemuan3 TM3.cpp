#include <stdio.h>
#include <math.h>

int main() {
    double sisi_alas, sisi_tinggi, hipotenusa;

    // Input sisi alas dan sisi tinggi
    printf("Masukkan panjang sisi alas segitiga (cm): ");
    scanf("%lf", &sisi_alas);

    printf("Masukkan panjang sisi tinggi segitiga (cm): ");
    scanf("%lf", &sisi_tinggi);

    // Menghitung panjang sisi miring (hipotenusa) menggunakan rumus Pythagoras
    hipotenusa = sqrt(pow(sisi_alas, 2) + pow(sisi_tinggi, 2));

    // Menampilkan panjang sisi miring (hipotenusa)
    printf("Panjang sisi miring (hipotenusa) segitiga adalah: %.2lf cm\n", hipotenusa);

    return 0;
}