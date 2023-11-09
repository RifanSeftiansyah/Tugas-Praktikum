#include <stdio.h>

int main()
{
    double alas, tinggi, sisi1, sisi2, sisi3, luas, keliling;

    printf("Input Alas Segitiga(cm): ");
    scanf("%lf", &alas);
    printf("Input Tinggi Segitiga(cm): ");
    scanf("%lf", &tinggi);

    printf("Input Sisi 1 Segitiga(cm): ");
    scanf("%lf", &sisi1);
    printf("Input Sisi 2 Segitiga(cm): ");
    scanf("%lf", &sisi2);
    printf("Input Sisi 3 Segitiga(cm): ");
    scanf("%lf", &sisi3);

    luas = 0.5 * alas * tinggi;
    keliling = sisi1 + sisi2 + sisi3;

    printf("Luas dan Keliling Segitiga");
    printf("\nLUAS = %.3f", luas);
    printf("\nKELILING = %.2f", keliling);

    return 0;
}
