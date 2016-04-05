#include "PUNTOA.h"

#define RES_OK 0
#define RES_ERROR 1

int main (int argc, char* argv[])
{
    float Landa, m1, m2, e, a, h, k, uo, vo;
    int n;

    AsignarValores(&Landa, &m1, &m2, &e, &a, &h, &k);
    uo = 1 / ( a * ( 1 - e ) );
    vo = 0;
    for (n=0; n<N; n++)
    {

    }
    n++;
    return RES_OK;
}
