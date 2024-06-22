#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Iletisim
{
    int tel1;
    int tel2;
    char sehir[20];



}IletisimBilgi;

struct Personel
{
    int id;
  char ad[20];
  char soyad[20];
  int maas;
  struct Iletisim IletisimBilgi;



}personel1,personel2;

int ortalama(struct Personel dizi[],int n)
{
    int i;
    int toplam = 0;
    for(i=0;i<n;i++)
    {
        toplam+=dizi[i].maas;
    }
    int ortalama=toplam/n;
    return ortalama;

}
int main()
{

    struct Personel personel1 = {101," "," ",20000,{53211,53222," "}};
    strcpy(personel1.ad,"Emir");
    strcpy(personel1.soyad,"Kacar");
    strcpy(personel1.IletisimBilgi.sehir,"Ankara");

    struct Personel personel2 = {102," "," ",20000,{53311,53228," "}};
    strcpy(personel2.ad,"Ahmet");
    strcpy(personel2.soyad,"Remzi");
    strcpy(personel2.IletisimBilgi.sehir,"Mugla");

    struct Personel personel3 = {102," "," ",60000,{53311,53228," "}};
    strcpy(personel3.ad,"Sila");
    strcpy(personel3.soyad,"Kaan");
    strcpy(personel3.IletisimBilgi.sehir,"Bursa");

    struct Personel dizi[]={personel1,personel2,personel3};

    int sonuc=ortalama(dizi,3);

    printf("Sonuc : %d",sonuc);






    return 0;
}
