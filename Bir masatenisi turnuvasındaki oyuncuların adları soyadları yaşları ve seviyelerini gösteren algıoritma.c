#include <stdio.h>
#include <stdlib.h>
struct Kimlik
{
    char ad[20];
    char soyad[20];
    int yas;
    int seviye;


}oyuncu1,oyuncu2;
struct Turnuva
{
    struct Kimlik oyuncu1;
    struct Kimlik oyuncu2;
    char ekipIsmi[30];


}ekip[];






int main()
{

    int n;
    printf("N' giriniz: ");
    scanf("%d",&n);
    struct Turnuva ekip[n];

    int i;
    for(i=0;i<n;i++)
    {
        printf("Ekip %d:\n",i);

        printf("Ekibin adini giriniz : ");
        scanf("%s",ekip[i].ekipIsmi);
        printf("Oyuncu 1 : \n");
        printf("Ismi giriniz: ");
        scanf("%s",ekip[i].oyuncu1.ad);
        printf("Soy ismi giriniz: ");
        scanf("%s",ekip[i].oyuncu1.soyad);
        printf("Yasi giriniz: ");
        scanf("%d",&ekip[i].oyuncu1.yas);
        printf("Seviyeyi giriniz: ");
        scanf("%d",&ekip[i].oyuncu1.seviye);

        printf("Oyuncu 2 : \n");
        printf("Ismi giriniz: ");
        scanf("%s",ekip[i].oyuncu2.ad);
        printf("Soy ismi giriniz: ");
        scanf("%s",ekip[i].oyuncu2.soyad);
        printf("Yasi giriniz: ");
        scanf("%d",&ekip[i].oyuncu2.yas);
        printf("Seviyeyi giriniz: ");
        scanf("%d",&ekip[i].oyuncu2.seviye);

    }

    for(i=0;i<n;i++)
    {
        printf("Ekip %d : \n",i);
        printf("isim : %s\n",ekip[i].ekipIsmi);
        printf("Oyuncu 1 :\n");
        printf("      isim: %s\n",ekip[i].oyuncu1.ad);
        printf("      Soyisim: %s\n",ekip[i].oyuncu1.soyad);
        printf("      Yas: %d\n",ekip[i].oyuncu1.yas);
        printf("      Seviye: %d\n",ekip[i].oyuncu1.seviye);

        printf("Oyuncu 2 :\n");
        printf("      isim: %s\n",ekip[i].oyuncu2.ad);
        printf("      Soyisim: %s\n",ekip[i].oyuncu2.soyad);
        printf("      Yas: %d\n",ekip[i].oyuncu2.yas);
        printf("      Seviye: %d\n",ekip[i].oyuncu2.seviye);





    }







    return 0;
}
