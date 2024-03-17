#include <stdio.h>

int main() {
    int pilihan;
    long desimal, biner, octal, inputan_octal;
    
    
    printf("Program komputer pengkonversi bilangan, silahkan pilih:\n");
    printf("1. Bilangan Desimal ke Biner\n");
    printf("2. Bilangan Biner ke Desimal\n");
    printf("3. Bilangan Desimal ke Oktal\n");
    printf("4. Bilangan Oktal ke Desimal\n");
    printf("Masukkan pilihan anda!\n");
    scanf("%d", &pilihan);

    switch(pilihan) {
        case 1:
            printf("Masukkan bilangan desimal: ");
            scanf("%ld", &desimal);

            printf("Biner: ");
            while(desimal > 0) {
                printf("%ld", desimal % 2);
                desimal /= 2;
            }
            break;
        
        case 2:
            printf("Masukkan bilangan biner: ");
            scanf("%ld", &biner);

            desimal = 0;
            long pangkat = 1;
            while(biner > 0) {
                desimal += (biner % 10) * pangkat;
                biner /= 10;
                pangkat *= 2;
            }
            printf("Desimal: %ld", desimal);
            break;
        
        case 3:
            printf("Masukkan bilangan desimal: ");
            scanf("%d", &desimal);
            printf("Octal: %o\n", desimal); // Menggunakan specifier %o untuk mencetak bilangan octal
            break;
        case 4:
            printf("Masukkan bilangan octal: ");
            scanf("%o", &octal);
            printf("Desimal: %d\n", octal); // Menggunakan specifier %d untuk mencetak bilangan desimal
            break;
    }
    return 0;
}