/*Landa = 97537/(900000)*/
#define N 360
#define M
#define G

float Elevar (int a, int b)
{
    float res;
    int i;
    res = 1;
    if (b=0)
        return 1;
    for (i=1; i<=b; i++)
    {
        res = res*a;
    }
    return (res);
}

void AsignarValores (float *Landa, float *m1, float *m2, float *e, float *a, float *h, float *k)
{
    float h2;

    *Landa = 0.1083744444444444;

    *m1 = (0,2155676074444444 * Elevar (10,30)); /*kg*/

    *m2 = (0,3577440411111111 * Elevar (10,30)); /*kg*/

    *e = 1.897126219;

    *a = (0.06801541203 * Elevar (10,7)); /*kg*/

    h2 = (*a) * G * M * (1 - ((*e) * (*e))); /*m^4/s^2*/

    *h = sqrt (h2);

    *k = ( 2 * 3.14159265359 ) / N;
}
