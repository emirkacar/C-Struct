#include <stdio.h>
#include <stdlib.h>

struct yapi {
    float gercel;
    float sanal;
    float sonuc;
}sayi1,sayi2,sonuc;

int main() {
    struct yapi sayi1,sayi2;
    char secim;

    printf("Operator(+/-): ");
    scanf(" %c", &secim);

    printf("Birinci karmasik sayi: ");
    scanf("%f%f", &sayi1.gercel, &sayi1.sanal);

    printf("Ikinci karmasik sayi: ");
    scanf("%f%f", &sayi2.gercel, &sayi2.sanal);

    switch(secim) {
        case '+':
            sonuc.gercel=sayi1.gercel+sayi2.gercel;
            sonuc.sanal=sayi1.sanal+sayi2.sanal;
            break;
        case '-':
            sonuc.gercel=sayi1.gercel-sayi2.gercel;
            sonuc.sanal=sayi1.sanal-sayi2.sanal;

            break;
        default:
            printf("Gecersiz operator!");
            return 1;
    }
    printf("%.2f",sonuc.gercel);

    if(sonuc.sanal >= 0)
    {
        printf("+%.2fi",sonuc.sanal);

    }
    else
    {
        printf("%.2fi",sonuc.sanal);
    }



    return 0;
}
