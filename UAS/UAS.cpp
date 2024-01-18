#include <stdio.h>
#include <unistd.h>

// Fungsi untuk menggerakkan motor listrik dengan kecepatan tertentu
void gerakkanMotor(int rpm) {
    printf("Motor bergerak dengan kecepatan %d rpm.\n", rpm);
    // Simulasi pergerakan motor (bisa diganti dengan kontrol perangkat keras sesungguhnya)
    usleep(1000000); // Tunggu 1 detik
}

// Fungsi untuk membuka dan menutup klep air
void kontrolKlepAir(int waktu) {
    printf("Klep air terbuka selama %d menit.\n", waktu);
    // Simulasi pembukaan klep air (bisa diganti dengan kontrol perangkat keras sesungguhnya)
    usleep(waktu * 60000000); // Waktu dalam mikrodetik
}

// Fungsi untuk menjalankan proses pencucian berdasarkan level kekeruhan air
void jalankanProsesCuci(int kekeruhan) {
    int kecepatanMotor, waktuMencuci;

    switch (kekeruhan) {
        case 6:
            kecepatanMotor = 1000;
            waktuMencuci = 60;
            break;
        case 8:
            kecepatanMotor = 1000;
            waktuMencuci = 60;
            break;
        case 12:
            kecepatanMotor = 1000;
            waktuMencuci = 60;
            break;
        case 18:
            kecepatanMotor = 1000;
            waktuMencuci = 60;
            break;
        case 24:
            kecepatanMotor = 1000;
            waktuMencuci = 60;
            break;
        case 30:
            kecepatanMotor = 1000;
            waktuMencuci = 60;
            break;
        case 36:
            kecepatanMotor = 1000;
            waktuMencuci = 60;
            break;
        case 42:
            kecepatanMotor = 1000;
            waktuMencuci = 60;
            break;
        case 49:
            kecepatanMotor = 1000;
            waktuMencuci = 60;
            break;
        default:
            printf("Level kekeruhan air tidak valid.\n");
            return;
    }

    gerakkanMotor(kecepatanMotor);
    kontrolKlepAir(2); // Klep pengisian air terbuka selama 2 menit
    gerakkanMotor(0);  // Berhenti sejenak untuk pembuangan air kotor
    kontrolKlepAir(2); // Klep pembuangan air terbuka selama 2 menit
    gerakkanMotor(kecepatanMotor);
    kontrolKlepAir(3); // Klep pembuangan air terbuka selama 3 menit untuk pengeringan
    gerakkanMotor(0);  // Berhenti setelah selesai proses pencucian
}

int main() {
    int levelKekeruhan;

    // Simulasi tombol Start ditekan
    printf("Tombol Start ditekan.\n");

    // Contoh level kekeruhan air (bisa diganti sesuai kebutuhan)
    levelKekeruhan = 18;

    jalankanProsesCuci(levelKekeruhan);

    return 0;
}
