#include <stdio.h>
#include <stdlib.h>

struct Musteriler
{
    char isim[20];
    char soyIsim[20];
    int kahvalti;
    int aksamYemegi;
    int otelHizmeti;
    int odaArkadasiVarmi;




}musteri[5];

void totalHesap(struct Musteriler musteri)
{
    int toplamTutar=0;

    if(musteri.kahvalti==1)
    {
        if(musteri.odaArkadasiVarmi==1)
        {
            musteri.kahvalti=30;
            toplamTutar+=musteri.kahvalti;
        }
        else
        {
            musteri.kahvalti=15;
            toplamTutar+=musteri.kahvalti;
        }


    }
    if(musteri.aksamYemegi==1)
    {
        if(musteri.odaArkadasiVarmi==1)
        {
            musteri.aksamYemegi=70;
            toplamTutar+=musteri.aksamYemegi;
        }
        else
        {
            musteri.aksamYemegi=35;
            toplamTutar+=musteri.aksamYemegi;
        }


    }
    if(musteri.otelHizmeti==2)
    {
        musteri.otelHizmeti=75;
        toplamTutar+=musteri.otelHizmeti;
    }
    if(musteri.otelHizmeti==3)
    {
        musteri.otelHizmeti=100;
        toplamTutar+=musteri.otelHizmeti;
    }

    printf("%s %s kisisinin odeyecegi toplam tutar : %d\n\n",musteri.isim,musteri.soyIsim,toplamTutar);



}


void sayacKahvalti(struct Musteriler musteri)
{
    printf("Total siparis edilen kahvalti sayisi:%d\n",musteri.kahvalti);
}



void musteriRehberi(struct Musteriler musteri[],int boyut)
{

    int i;
    for(i=0;i<boyut;i++)
    {
        printf("Ad : %s\n",musteri[i].isim);
        printf("Soyad : %s\n",musteri[i].soyIsim);
        printf("Kahvalti  : %d\n",musteri[i].kahvalti);
        printf("Aksam yemegi : %d\n",musteri[i].aksamYemegi);
        printf("Otel hizmeti: %d\n",musteri[i].otelHizmeti);
        printf("Oda arkadasi var mi : %d\n",musteri[i].odaArkadasiVarmi);


        if(musteri[i].otelHizmeti==2)
        {
            if(musteri[i].odaArkadasiVarmi==1)
            {
                musteri[i].kahvalti=30;
                musteri[i].aksamYemegi=70;
            }
            IkiYildizliOtel(musteri[i]);
        }
        totalHesap(musteri[i]);


    }

}
void IkiYildizliOtel(struct Musteriler musteri)
{
    printf("Iki yildizli otelde kalan kisiler:\n");
    printf("Musterinin adi : %s \n",musteri.isim);
    printf("Musterinin soy ismi : %s\n\n",musteri.soyIsim);

}


int main()
{

    struct Musteriler musteri[3]={
    {"Emir","Kacar",1,1,0,1},
    {"Can","Boz",0,1,2,0},
    {"Kemal","Dur",1,1,3,1}};

    musteriRehberi(musteri,3);

    return 0;
}
