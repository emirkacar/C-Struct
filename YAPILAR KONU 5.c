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



}personel1,personel2,personel3,personel4;

int main()
{

    struct Personel personel1 = {101," "," ",18000,{53211,53222," "}};
    strcpy(personel1.ad,"Emir");
    strcpy(personel1.soyad,"Kacar");
    strcpy(personel1.IletisimBilgi.sehir,"Bursa");

     printf("Id:%d Ad:%s Soyad:%s Maas:%d Tel1:%d Tel2:%d Sehir:%s\n", personel1.id, personel1.ad,
           personel1.soyad, personel1.maas, personel1.IletisimBilgi.tel1, personel1.IletisimBilgi.tel2,
           personel1.IletisimBilgi.sehir);


    struct Personel personel2 = {102," "," ",18005,{53311,53228," "}};
    strcpy(personel2.ad,"Ahmet");
    strcpy(personel2.soyad,"Remzi");
    strcpy(personel2.IletisimBilgi.sehir,"Mugla");

    struct Personel dizi[4];
    dizi[0]=personel1;
    dizi[1]=personel2;
    struct Personel personel3={105,"Buse","Remzi",17000,{53311,53228,"Antalya"}};
    dizi[2]=personel3;
    struct Personel personel4={119,"Hamza","Jeji",10000,{53311,53228,"Kayseri"}};
    dizi[3]=personel4;


    int i;
    printf("Dongu seklinde yazdirma algoritmasi\n");
    for(i=0;i<4;i++)
    {
        if(dizi[i].maas>=18000)
        {
             printf("Id:%d Ad:%s Soyad:%s Maas:%d Tel1:%d Tel2:%d Sehir:%s\n", dizi[i].id, dizi[i].ad,
           dizi[i].soyad, dizi[i].maas, dizi[i].IletisimBilgi.tel1, dizi[i].IletisimBilgi.tel2,
           dizi[i].IletisimBilgi.sehir);
        }
    }




    return 0;
}
