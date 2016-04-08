#include "PUNTOA.h"

#define RES_OK 0
#define RES_ERROR 1

int main (int argc, char* argv[])
{
    float Landa, m1, m2, e, a, h2, k, m, g, u[N], v[N];
    int n;

    AsignarValores(&Landa, &m1, &m2, &e, &a, &h2, &k, &m, &g);
    u[0] = 1 / ( a * ( 1 - e ) );
    v[0] = 0;
    for (n=0; n<N; n++)
    {
        u[n+1] = u[n] + (k * v[n]);
        v[n+1] = v[n] - (k * u[n]) + ((k * g * m) / h2);
    }
    n++;
    return RES_OK;
}

