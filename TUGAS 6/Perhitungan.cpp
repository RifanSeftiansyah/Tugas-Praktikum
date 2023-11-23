#include <stdio.h>

int main() {
    double saldo_awal = 1000000; // Saldo awal Rp. 1.000.000
    double bunga = 0.02; // Bunga 2% per bulan
    int bulan;
    
    // Perhitungan saldo setelah 10 bulan
    for (bulan = 1; bulan <= 10; bulan++) {
        double bunga_bulanan = saldo_awal * bunga; // Hitung bunga bulanan
        saldo_awal += bunga_bulanan; // Tambahkan bunga ke saldo
    }

    printf("Jumlah uang setelah %d bulan adalah: Rp. %.2f\n", bulan - 1, saldo_awal);

    return 0;
}
