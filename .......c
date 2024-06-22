#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct araba
{

    int durum;
    union
    {
        double fiyat;
        char marka[20];
    }ikinciEleman;



}araba_A;

int main()
{

    struct araba galeri;
    if(araba_A.durum==1)
    {
        araba_A.durum=1;
        araba_A.ikinciEleman.fiyat=20000;
    }
    if(araba_A.durum==0)
    {
        araba_A.durum=0;
        strcpy(araba_A.ikinciEleman.marka,"Anadol");
    }


}
