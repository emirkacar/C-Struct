#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Meyveler
{
    char isim[20];
    int agirlik;
    char form[20];
    int tane;
    float birimFiyati;
}meyve;

struct Sepet
{
    struct Meyveler meyve;

}s[2];

void meyvelerinOzellikleri(struct Sepet s[],int boyut)
{
    int i;

    int toplamAgirlik=0;
    for(i=0;i<boyut;i++)
    {
        printf("Meyve %d:\n",i+1);
        printf("Isim: ");
        scanf("%s",&s[i].meyve.isim);
        printf("Agirlik: ");
        scanf("%d",&s[i].meyve.agirlik);
        printf("Form: ");
        scanf("%s",&s[i].meyve.form);
        printf("Tane: ");
        scanf("%d",&s[i].meyve.tane);
        printf("Birim fiyati: ");
        scanf("%f",&s[i].meyve.birimFiyati);
        toplamAgirlik+=s[i].meyve.agirlik*s[i].meyve.tane;
    }
    printf("Toplam agirlik:%d\n",toplamAgirlik);

}

float toplamFiyat(struct Sepet s[],int boyut)
{
    int i;
    float total=0.0;

    for(i=0;i<boyut;i++)
    {
        float fiyat=s[i].meyve.birimFiyati*s[i].meyve.tane;
        if(strcmp(s[i].meyve.form,"Yuvarlak" )== 0)
        {
            fiyat*=2;
        }
        if(s[i].meyve.agirlik>200)
        {
            fiyat+=3;
        }
        total+=fiyat;

    }

    return total;
}


int main()
{

    struct Meyveler meyve;
    struct Sepet s[2];

    meyvelerinOzellikleri(s,2);
    float sonuc=toplamFiyat(s,2);

    printf("Toplam fiyat:%.2f",sonuc);




    return 0;
}
