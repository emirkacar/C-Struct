#include <stdio.h>
#include <stdlib.h>


struct Yarisma
{
    char ad[20];
    char soyad[20];
    int puan;

}sporcu;
float puanHesaplama(int hakemler[],int boyut)
{

    int i;
    for(i=0;i<10;i++)
    {
        printf("%d.Hakemin puani: ",i+1);
        scanf("%d",&hakemler[i]);
    }
    int max=hakemler[0];
    int min=hakemler[0];
    int toplam=0;

    for(i=1;i<10;i++)
    {
        if(max<hakemler[i])
        {
            max=hakemler[i];
        }
        if(min>hakemler[i])
        {
            min=hakemler[i];
        }
        toplam+=hakemler[i];
    }
    float ortalama=(float)(toplam-max-min)/8;
    return ortalama;


}

int main()
{
    struct Yarisma sporcu;

    printf("Sporcunun adi: ");
    scanf("%s",sporcu.ad);
    printf("Sporcunun soyadi: ");
    scanf("%s",sporcu.soyad);

    int hakemler[10];

    float sonuc=puanHesaplama(hakemler,10);

    printf("Sonuc = %.2f",sonuc);










    return 0;
}
