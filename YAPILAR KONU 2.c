#include <stdio.h>
#include <stdlib.h>
struct Ogrenciler
{
    char ad[20];
    char bolum[50];
    int sinif;
    float ort;

}ogr[3]={
{"Kemal","Kamu Yonetimi",3,2.00},
{"Mahmut","Iktisat",1,2.50},
{"Ayse","Isletme",4,1.80}


};



struct TelRehber
{
    char ad[20];
    char sehir[30];
    int tel;
}tel[5];

int main()
{


    int i;
    for(i=0;i<5;i++)
    {
        printf("%d.kisinin adi:",i+1);
        scanf("%s",&tel[i].ad);
        printf("%s'nin sehiri: ",tel[i].ad);
        scanf("%s",&tel[i].sehir);
        printf("%s'nin teli: ",tel[i].ad);
        scanf("%d",&tel[i].tel);
    }
    printf("\n");

    printf("REHBER BILGILERI\n");

    for(i=0;i<5;i++)
    {
        printf("%d.kisinin adi: :%s\n",i+1,tel[i].ad);
        printf("%s'nin sehiri: %s\n",tel[i].ad,tel[i].sehir);
        printf("%s'nin teli: %d\n",tel[i].ad,tel[i].tel);

    }
    printf("\n");

    struct Ogrenciler ogr[3]={
    {"Kemal","Kamu Yonetimi",3,2.00},
    {"Mahmut","Iktisat",1,2.50},
    {"Ayse","Isletme",4,1.80}


    };


    printf("Ad : %s\n",ogr[0].ad);
    printf("Bolum: %s\n",ogr[1].bolum);
    printf("Sinif : %d\n",ogr[2].sinif);
    printf("Ortalama : %.2f\n",ogr[0].ort);


    for(i=0;i<3;i++)
    {
        printf("Ad : %s Bolum : %s Sinif : %d Ortalama : %.2f\n",
               ogr[i].ad,ogr[i].bolum,ogr[i].sinif,ogr[i].ort);
    }




    return 0;
}
