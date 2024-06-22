#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Point
{
    char n[20];
}dizi[5];


void ekranaBastirma(struct Point dizi[],int boyut)
{
    int i;
    for(i=0;i<boyut;i++)
    {
        printf("Noktalar : %s\n",dizi[i].n);
    }
}
int main()
{

    strcpy(dizi[0].n,"Nokta1");
    strcpy(dizi[1].n,"Nokta2");
    strcpy(dizi[2].n,"Nokta3");
    strcpy(dizi[3].n,"Nokta4");
    strcpy(dizi[4].n,"Nokta5");


    ekranaBastirma(dizi,5);







    return 0;
}
