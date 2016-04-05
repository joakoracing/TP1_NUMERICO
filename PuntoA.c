/*Landa = 97537/(900000)*/
#define N

void AsignarValores (float *Landa, *m1, *m2, *e, *a, *h)
{
    float h2;

    Landa := 0.1083744444444444;

    m1 := 0,2155676074444444 * Elevar (10,30); /*kg*/

    m2 := 0,3577440411111111 * Elevar (10,30); /*kg*/

    e := 1.897126219

    a := 0.06801541203 * Elevar (10,7); /*kg*/

    h2 := a * G * M * (1 - (e * e)); /*m^4/s^2*/

    h := sqrt (h2);

    k := ( 2 * 3.14159265359 ) / N;
}