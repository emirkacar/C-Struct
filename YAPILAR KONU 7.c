#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct tarih
{
    int yil;
    int ay;
    int gun;
}dogumTarihi;

struct ogrenci
{
    char isim[10];
    char soyisim[10];
    int yas;
    struct tarih dogumTarihi;

}ogr;

int main()
{

    struct ogrenci ogr;   //struct ogrenci isim,soyisim,yas,dogumtarihini tutuyor.ogr ise bir degiskendir.
    strcpy(ogr.isim,"Emir");
    strcpy(ogr.soyisim,"Kacar");
    ogr.yas=22;
    ogr.dogumTarihi.yil=2001;
    ogr.dogumTarihi.ay=9;
    ogr.dogumTarihi.gun=20;

    printf("Isim:%s \t Soyisim:%s \t Yas:%d \t Dogum yili :%d \t dogum ayi: %d \t dogumgunu: %d \t",
           ogr.isim,ogr.soyisim,ogr.yas,ogr.dogumTarihi.yil,ogr.dogumTarihi.ay,ogr.dogumTarihi.gun);



    return 0;
}
