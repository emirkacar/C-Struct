#include <stdio.h>
#include <stdlib.h>

struct YarismaciTip
{
    char ad[20];
    char soyad[20];
    float puan[10];
    float performans;
}patenci;

float puanHesap(struct YarismaciTip pat)
{
    int i;
    float sonuc=0;
    float max=0.0;
    float min=6.0;
    for(i=0;i<10;i++)
    {
        if(pat.puan[i]>max)
        {
            max=pat.puan[i];
        }
        if(pat.puan[i]<min)
        {
            min=pat.puan[i];
        }
        sonuc+=pat.puan[i];
    }
    sonuc=(sonuc-max-min)/8;
    return sonuc;
}

int main()
{
    struct YarismaciTip patenci;

    int i;
    printf("Yarismacinin adi: ");
    scanf("%s",patenci.ad);
    printf("Yarismacinin soyadi: ");
    scanf("%s",patenci.soyad);
    printf("Hakem puani\n");
    for(i=0;i<10;i++)
    {
        scanf("%f",&patenci.puan[i]);
    }

    patenci.performans=puanHesap(patenci);
    printf("Performans puani = %.2f",patenci.performans);
    return 0;
}
