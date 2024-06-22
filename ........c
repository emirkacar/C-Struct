#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Urunler
{
    int kod;
    int fiyat;

}urun[5];

struct Isciler
{
   char ad[20];
   char soyad[20];
   int yas;
}isci[3];

struct Magazalar
{

    char ad[20];
    char sokakIsmi[100];
    char mahalle[30];
    int telefonNo;
    int satisTutari;
    struct Isciler isci[3];
    struct Urunler urun[5];

}magaza[2];

void urunuTanimla(struct Urunler urun[])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d.urunun kodu:",i+1);
        scanf("%d",&urun[i].kod);
        printf("%d.urunun fiyati:",i+1);
        scanf("%d",&urun[i].fiyat);
    }
}

void isciyiTanimla(struct Isciler isci[])
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("%d.iscinin adi: ",i+1);
        scanf("%s",isci[i].ad);
        printf("%d.iscinin soyadi: ",i+1);
        scanf("%s",isci[i].soyad);
        printf("%d.iscinin yasi: ",i+1);
        scanf("%d",&isci[i].yas);

    }
}

void magazayiTanimla(struct Magazalar magaza[])
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("%d. magazanin adi:",i+1);
        scanf("%s",magaza[i].ad);
        printf("%d. magazanin sokak ismi:",i+1);
        scanf("%s",magaza[i].sokakIsmi);
        printf("%d. magazanin mahallesi:",i+1);
        scanf("%s",magaza[i].mahalle);
        printf("%d. magazanin telefon numarasi:",i+1);
        scanf("%d",&magaza[i].telefonNo);
        printf("%d. magazanin satis tutari:",i+1);
        scanf("%d",&magaza[i].satisTutari);
        isciyiTanimla(magaza[i].isci);
        urunuTanimla(magaza[i].urun);



    }
}
void enYasliIsciyiBastir(int yas,char ad[],char soyad[])
{
    printf("En yasli : %s %s'in yasi :%d\n",ad,soyad,yas);
}
void urunOrtalama(float ortalama,char ad[])
{

    printf("%s Magazali urunlerin ortalamasi : %f\n",ad,ortalama);

}

void mahalle(char mahalleIsmi[])
{
    printf("Mahalle : %s",mahalleIsmi);
}
void enFazlaSatisRakami(char isim[])
{
    printf("En yuksek satis rakamina sahip maza : %s",isim);
}
void magazayiBastir (struct Magazalar magaza[])
{

    int enYasliIscininYasi=0;
    char enYasliIscininAdi[20];
    char enYasliIscininSoyadi[20];
    int i, j,k;
    int toplam=0;
    char enYuksekSatisRakaminaSahipMagaza[50];
    for (i = 0; i < 2; i++)
    {
        printf("%d. magaza\n\n", i + 1);
        printf("Magaza adi: %s\n", magaza[i].ad);
        printf("Mahallesi: %s\n", magaza[i].mahalle);
        mahalle(magaza[i].mahalle);
        printf("Telefon no: %d\n", magaza[i].telefonNo);
        printf("Satis tutari: %d\n", magaza[i].satisTutari);
        for (j = 0; j < 3; j++)
        {
            printf("Iscinin adi: %s\n", magaza[i].isci[j].ad);
            printf("Iscinin soyadi: %s\n", magaza[i].isci[j].soyad);
            printf("Iscinin yasi: %d\n", magaza[i].isci[j].yas);
            if(enYasliIscininYasi<magaza[i].isci[j].yas)
            {
                enYasliIscininYasi=magaza[i].isci[j].yas;
                strcpy(enYasliIscininAdi,magaza[i].isci[j].ad);
                strcpy(enYasliIscininSoyadi,magaza[i].isci[j].soyad);

            }

        }
        for(j=0;k<5;k++)
        {
            printf("Urunun kodu: %d\n", magaza[i].urun[k].kod);
            printf("Urunun fiyati: %d\n", magaza[i].urun[k].fiyat);
            toplam+=magaza[i].urun[k].fiyat;

        }


        float ortalama=(float)toplam/5;
        urunOrtalama(magaza[i].urun[k].fiyat,magaza[i].ad);




    }
    enYasliIsciyiBastir(enYasliIscininYasi,enYasliIscininAdi,enYasliIscininSoyadi);
    if(magaza[i].satisTutari>magaza[i+1].satisTutari)
    {
        strcpy(enYuksekSatisRakaminaSahipMagaza,magaza[i].ad);
    }
    else
    {
        strcpy(enYuksekSatisRakaminaSahipMagaza,magaza[i+1].ad);
    }

    enFazlaSatisRakami(enYuksekSatisRakaminaSahipMagaza);
}
int main()
{
    struct Urunler urun[5];
    struct Isciler isci[3];
    struct Magazalar magaza[2];



    magazayiTanimla(magaza);
    magazayiBastir(magaza);


    return 0;
}
