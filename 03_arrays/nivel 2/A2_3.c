/*
Dado un array A de 10 ints cagado aleatoriamente y con valores comprendidos entre 0 y 100,
determinar si se tienen más elementos pares que impares o bien misma cantidad.
Rehaga el ejercicio utilizando un único bucle for si empleo más de uno.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
    int A[N];
    int i, par = 0, impar = 0;
    srand (time(NULL));
    // Genero los numeros aleatorios del array, muestro y busco paridad
    for (i = 0; i < N; i++)
    {
        A[i] = rand() % 101;
        printf("%d ", A[i]);
        if (A[i] % 2 == 0)
        {
            par++;
        }
        else if (A[i] % 2 != 0)
        {
            impar++;
        }
    }
    // Imprimo resultado
    if (par > impar)
    {
        printf("\nHay mas pares que impares");
    }
    else if (par < impar)
    {
        printf("\nHay mas impares que pares");
    }
    else if (par == impar)
    {
        printf("\nHay la misma cantidad de pares y impares");
    }
    
    return 0;
}
