#include <stdio.h>
#include <stdlib.h>

struct Futbolcu
{
    char ad[20];
    char takim[50];
    int yas;

}f;

struct Tarih
{
    char date[20];


}t={"20.02.2014"};

void listele (struct Futbolcu x,struct Tarih t)
{
    printf("Ad      :%s\n",x.ad);
    printf("Takim   :%s\n",x.takim);
    printf("Yas     :%d\n",x.yas);
    printf("Tarih   :%s\n",t.date);
}
int main()
{
    struct Futbolcu f={"Emir","Fb",26};


    listele(f,t);
    return 0;
}
