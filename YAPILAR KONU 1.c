#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Ogrenci
{
    char ad[20];
    char soyad[20];
    char bolum[20];
    int numara;
    int sinif;
    float ortalama;


}ogr,ogr2;

struct kitaplar
{
    char ad[50];
    char yazar[50];
    float fiyat;

}
ktp1={"Kayip Sicil","Soner Yalcin",17.99},
ktp2={"Kitap2","John",21.00};//Struct yapýsýna ulasabilmek için ktp ifadesi kullanilir.

int main()
{

    strcpy(ogr.ad,"Emir");
    strcpy(ogr.soyad,"Kacar");
    strcpy(ogr.bolum,"Endustri");
    ogr.numara=2154;
    ogr.sinif=1;
    ogr.ortalama=3.85;

    printf("\n");


    strcpy(ogr2.ad,"Mustafa");
    strcpy(ogr2.soyad,"Yildiz");
    strcpy(ogr2.bolum,"Kamu Yonetimi");
    ogr2.numara=2154;
    ogr2.sinif=1;
    ogr2.ortalama=3.00;

    printf("Adi : %s Soyad : %s bolum : %s numara : %d sinif : %d ortalama : %.2f\n\n",
           ogr2.ad,ogr2.soyad,ogr2.bolum,ogr2.numara,ogr2.sinif,ogr2.ortalama);

    printf("Kitap adi : %s Kitap yazari : %s Kitap fiyati %.2f",
           ktp1.ad,ktp1.yazar,ktp1.fiyat);

    return 0;
}
