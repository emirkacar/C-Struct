#include <stdio.h>
#include <stdlib.h>
struct Zaman
{
    int saniye;
    int dakika;
    int saat;

}t1,t2,*farki;

void fark(struct Zaman t1,struct Zaman t2,struct Zaman *farki )
{
    (*farki).saniye=abs(t2.saniye-t1.saniye);
    (*farki).dakika=abs(t2.dakika-t1.dakika);
    (*farki).saat=abs(t2.saat-t1.saat);
}

int main()
{
    struct Zaman t1;
    struct Zaman t2;
    struct Zaman farki;




    printf("Baslangic Saniye: ");
    scanf("%d",&t1.saniye);
    printf("Baslanic Dakika: ");
    scanf("%d",&t1.dakika);
    printf("Baslangic Saat: ");
    scanf("%d",&t1.saat);
    printf("\n\n\n");

    printf("Bitis Saniye: ");
    scanf("%d",&t2.saniye);
    printf("Bitis Dakika: ");
    scanf("%d",&t2.dakika);
    printf("Bitis Saat: ");
    scanf("%d",&t2.saat);



    fark(t1,t2,&farki);

    printf("İki zaman arasindaki fark = %d saat %d dakika %d saniye",farki.saat,farki.dakika,farki .saniye);





    return 0;
}
