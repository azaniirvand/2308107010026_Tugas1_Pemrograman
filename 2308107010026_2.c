#include <stdio.h>

int tahun_kabisat(int tahun) {
    if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0))
        return 1;
    else
        return 0;
}

int main() {
    int tahun;
    printf("Masukkan tahun (format: YYYY): ");
    scanf("%d", &tahun);
    while (tahun < 1000 || tahun > 9999) {
        printf("Input tidak valid. Masukkan tahun yang terdiri dari 4 angka: ");
        scanf("%d", &tahun);
    }
    if (tahun_kabisat(tahun))
        printf("%d adalah tahun kabisat.\n", tahun);
    else
        printf("%d bukan tahun kabisat.\n", tahun);

    return 0;
}
