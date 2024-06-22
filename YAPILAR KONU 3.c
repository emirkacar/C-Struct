#include <stdio.h>
#include <stdlib.h>


struct Futbolcu
{
    char ad[20];
    char takim[50];
    int yas;

}f;

struct Sehirler
{
    char ad[30];
    int nufus;

}s;
int main()
{
    struct Futbolcu f;
    strcpy(f.ad,"Emir");
    strcpy(f.takim,"Fb");
    f.yas=30;

    printf("Ad: %s\n",f.ad);
    printf("Takim: %s\n",f.takim);
    printf("Yas: %d\n",f.yas);
    printf("\n\n\n");


    struct Futbolcu *fPtr=&f;

    printf("Ad: %s\n",(*fPtr).ad);
    printf("Takim: %s\n",(*fPtr).takim);
    printf("Yas: %d\n",(*fPtr).yas);
    printf("\n\n\n");

    printf("Ad: %s\n",fPtr->ad);    //Pointerlarin kullanimi boyle de olabilir.
    printf("Takim: %s\n",fPtr->takim);
    printf("Yas: %d\n",fPtr->yas);




    struct Sehirler s[5]={
    {"Ankara",250000},
    {"Bursa",260000},
    {"Yalova",16000},
    {"Mugla",17000},
    {"Antalya",18561}
    };

    int i;

    for(i=0;i<5;i++)
    {
        printf("Sehir : %s\t - Nufus: %d\n",s[i].ad,s[i].nufus);
    }
    printf("\n\n\n\n");

    struct Sehirler *p=s;  //&s de yazabilirdim.s de olur.s yazarsam s'in ilk elemaninin adresi demektir.
    printf("Pointer sonrasi\n\n");

    for(i=0;i<5;i++)
    {
        printf("Sehir : %s\t - Nufus: %d\n",((*(p+i)).ad),((*(p+i)).nufus));
    }








    return 0;
}
