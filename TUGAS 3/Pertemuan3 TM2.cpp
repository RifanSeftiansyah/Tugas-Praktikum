#include <stdio.h>

int main() {
    double celcius, fahrenheit, reamur;

    // Input suhu dalam Celcius
    printf("Masukkan suhu dalam Celcius: ");
    scanf("%lf", &celcius);

    // Menghitung suhu dalam Fahrenheit dan Reamur
    fahrenheit = (celcius * 9/5) + 32;
    reamur = celcius * 4/5;

    // Menampilkan hasil konversi
    printf("Suhu dalam Fahrenheit: %.2lf\n", fahrenheit);
    printf("Suhu dalam Reamur: %.2lf\n", reamur);

    return 0;
}
