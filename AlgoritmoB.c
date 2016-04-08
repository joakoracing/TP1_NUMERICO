#include "PUNTOA.h"

#define RES_OK 0
#define RES_ERROR 1

int main (int argc, char* argv[])
{
    float Landa, m1, m2, e, a, h2, k, m, g, uo, vo;
    int n, u[N-1], v[N-1];

    AsignarValores(&Landa, &m1, &m2, &e, &a, &h2, &k, &m, &g);
    uo = 1 / ( a * ( 1 - e ) );
    u[0] = uo;
    vo = 0;
    v[0] = vo;
    for (n=0; n<N; n++)
    {
        u[n+1] = u[n] + (k * v[n]);
        v[n+1] = v[n] - (k * u[n]) + ((k * g * m) / h2);
    }
    n++;
    return RES_OK;
}

