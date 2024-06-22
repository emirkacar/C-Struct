#include <stdio.h>
#include <stdlib.h>
#include <math.h>



struct Koordinat
{
    float x,y;
}top;
int main()
{
    struct Koordinat top;
    float deger;
    top.x=0;
    top.y=0;
    printf("X \t \t Y\n");
    printf("==============\t=====================================\n");

    for(deger=0.0;deger<10;deger+=0.1)
    {
        top.x += 20 - 6*(cos(deger));
        top.y += 15 + 2*(sin(deger));
        printf("%f\t%f\n",top.x,top.y);
    }

    return 0;
}
