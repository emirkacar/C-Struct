#include <stdio.h>
#include <stdlib.h>

struct Eczane
{
    char ilacAdi[20];
    int adet;
    int fiyat;
}data[100];

int main()
{

    struct Eczane data[100];
    int i;
    for(i=0;i<100;i++)
    {
        printf("(Ilac adi,adet,fiyat) = ");
        scanf(" %s %d %d",data[i].ilacAdi,&data[i].adet,&data[i].fiyat);
    }

    printf("ILAC ADI\n");
    printf("==============\n");

    for(i=0;i<100;i++)
    {
        if(data[i].adet<=20)
        {
            printf("%s\n",data[i].ilacAdi);
        }
    }

    return 0;
}
