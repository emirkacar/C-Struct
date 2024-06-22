#include <stdio.h>
#include <stdlib.h>

struct OgrenciTip
{
  int no;
  char cevap[10];
}ogrenci[30];

struct SonucTip
{
    int no;
    int not;

}sonuc[30];

int main()
{
    struct OgrenciTip ogrenci[30];
    struct SonucTip sonuc[30];


    char cevapAnahtari[10];
    char satir;
    int i,j;
    int dogru;
    int yanlis;
    printf("Cevap anahtarini giriniz \n");
    for(i=0;i<10;i++)
    {
        scanf(" %c",&cevapAnahtari[i]);
    }
    scanf(" %c",&satir);

    for(i=0;i<30;i++)
    {
        printf("Ogrenci nosunu giriniz:");
        scanf("%d",ogrenci[i].no);
        printf("Ogrencinin cevabini giriniz.");

        dogru=yanlis=0;

        for(j=0;j<10;j++)
        {
            scanf(" %c",ogrenci[i].cevap[j]);
            if(cevapAnahtari[j]==ogrenci[i].cevap[j])
            {
                dogru++;
            }
            else if(ogrenci[i].cevap[j] != ' ')
            {
                yanlis++;
            }

        }
        printf("Dogru :%d yanlis :%d",dogru,yanlis);
        sonuc[i].not=dogru-(yanlis/4);

    }

    for(i=0;i<30;i++)
    {
        printf("No : %d not : %d",ogrenci[i].no,sonuc[i].not);
    }






    return 0;
}
