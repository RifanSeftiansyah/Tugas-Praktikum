#include <stdio.h>

int main() {
  // Deklarasikan array A, B, dan C
  int A[5] = {12, 8, 17, 5, 15};
  int B[7] = {5, 11, 7, 25, 9, 12, 14};
  int C[12];

  // Inisialisasi array C dengan 0
  for (int i = 0; i < 10; i++) {
    C[i] = 0;
  }

  // Salin nilai yang lebih besar dari 10 dari array A dan B ke array C
  int idx = 0;
  for (int i = 0; i < 5; i++) {
    if (A[i] > 10) {
      C[idx++] = A[i];
    }
  }

  for (int i = 0; i < 7; i++) {
    if (B[i] > 10) {
      C[idx++] = B[i];
    }
  }

  // Cetak isi array C
  printf("Isi array C:\n");
  for (int i = 0; i < 10; i++) {
    if (C[i] != 0) {
      printf("%d ", C[i]);
    } else {
      printf("X ");
    }
  }
  printf("\n");

  // Cetak index kosong
  printf("Index kosong: ");
  for (int i = 0; i < 10; i++) {
    if (C[i] == 0) {
      printf("%d ", i);
    }
  }
  printf("\n");

  return 0;
}
