#include <stdio.h>
#include <stdlib.h>

struct Oyuncular
{
    char ad[20];
    char soyad[20];
    int yas;
    int seviye;

}oyuncu1,oyuncu2;

struct Ekipler
{
    char ekipAdi[30];
    struct Oyuncular oyuncu1;
    struct Oyuncular oyuncu2;


}ekip[5];

void oyuncuTanimla(struct Oyuncular *oyuncu)
{
    printf("Ismi giriniz: ");
    scanf("%s", oyuncu->ad);
    printf("Soy Ismi giriniz: ");
    scanf("%s", oyuncu->soyad);
    printf("Yasi giriniz: ");
    scanf("%d", &oyuncu->yas);
    printf("Seviyeyi giriniz: ");
    scanf("%d", &oyuncu->seviye);

}



void karakteristik(struct Ekipler ekip[],int boyut)
{
    int i;
    for(i=0;i<boyut;i++)
    {
        printf("Ekip %d :\n",i);
        printf("Ekibin adini giriniz: ");
        scanf(" %s",ekip[i].ekipAdi);
        printf("Oyuncu 1 bilgileri\n");
        oyuncuTanimla(&ekip[i].oyuncu1);
        printf("Oyuncu 2 bilgileri\n");
        oyuncuTanimla(&ekip[i].oyuncu2);

    }
}
void oyuncuBas(struct Oyuncular *oyuncu,int boyut)
{
    int i;
    for(i=0;i<boyut;i++)
    {
        printf("      Oyuncu %d:\n",i+1);
        printf("      Ismi: %s\n", oyuncu->ad);
        printf("      Soyismi: %s\n", oyuncu->soyad);
        printf("      Yas: %d\n", oyuncu->yas);
        printf("      Seviye: %d\n", oyuncu->seviye);


    }
}

void ekibiBas(struct Ekipler ekip[],int boyut)
{
    int i;
    for(i=0;i<boyut;i++)
    {
        printf("Ekip %d\n",i);
        printf("Isim : %s\n",ekip[i].ekipAdi);
        printf("Oyuncu 1 bilgileri\n");
        oyuncuBas(&ekip[i].oyuncu1,1);
        printf("Oyuncu 2 bilgileri:\n");
        oyuncuBas(&ekip[i].oyuncu2,1);


    }
}


int main()
{
    struct Oyuncular oyuncu1;
    struct Oyuncular oyuncu2;
    struct Ekipler ekip[2];

    karakteristik(ekip,2);
    ekibiBas(&ekip,2);


    return 0;
}
