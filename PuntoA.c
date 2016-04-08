/*Landa = 97537/(90000)*/
#include "PUNTOA.h"


float Elevar(float a, float b)
{
    int i;
    float res=1;
    if (b==0)
        res=1;
    if (b>0)
        for(i=1; i<=b; i++)
            {res=(res*a);}
    if (b<0)
        for(i=1; i<=b; i++)
            {res=(res*(1/a));}
    return res;
}

void AsignarValores (float *Landa, float *m1, float *m2, float *e, float *a, float *h2, float *k, float *m, float *g)
{
    *Landa = 1.083744444444444;
    *g = 6.673 * Elevar(10,-11);
    *m1 = (2.155676074444444 * Elevar(10,30)); /*kg*/
    *m2 = (3.577440411111111 * Elevar(10,23)); /*kg*/
    *m = *m1 + *m2;
    *e = 0.111894539517446;
    *a = (6.801541203 * Elevar(10,7)); /*kg*/
    *h2 = (*a) * (*g) * (*m) * (1 - Elevar((*e),2)); /*m^4/s^2*/
    *k = ( 2 * 3.14159265359 ) / N;
}
