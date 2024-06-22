#include <stdio.h>
#include <stdlib.h>

enum aylar
{
   Ocak=1,
   Subat,
   Mart,
   nisan,
   Mayis,
   Haziran,
   Temmuz,
   Agustos,
   Eylul,
   Ekim,
   Kasim,
   Aralik
}ay;

int dondurme(enum aylar ay)
{
    return ay;
}


int main()
{
    enum aylar ay;


    printf("Sonuc = %d.ay",dondurme(Aralik));


    return 0;
}
