#include <stdio.h>
#include <stdlib.h>

struct Yarisma
{
    char ad[20];
    float puan;
    float performans;
}patenciler[10];

void hesap(struct Yarisma patenciler[])
{


    float max=patenciler[0].puan;
    int maxIndex=0;
    int i;

    for(i=1;i<10;i++)
    {
        if(max<patenciler[i].puan)
        {
            max=patenciler[i].puan;
            maxIndex=i;
        }
    }

    printf("1.Gelen yarismaci %.2f puani almistir.O yarismaci :%s'dir.",max,patenciler[maxIndex].ad);
}

int main()
{

    int i;
    printf("Ad giriniz.\n");
    for(i=0;i<10;i++)
    {
        scanf("%s",&patenciler[i].ad);
    }
    printf("0 ile 6.00 arasinda puan giriniz.\n");

    for(i=0;i<10;i++)
    {

        scanf("%f",&patenciler[i].puan);
    }


    hesap(patenciler);

    return 0;
}
