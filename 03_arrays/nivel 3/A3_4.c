#include <stdio.h>
#define N 15

int main()
{
    // Declaracion de variables
    int A[N], i, j, aux = 0;
    // Ingreso de valores del array
    printf("Ingrese 15 valores enteros positivos para el array: \n");
    for (i = 0; i < N; i++)
    {
        printf("Ingrese el valor %d:\n", i + 1);
        printf("> ");
        scanf("%d", &A[i]);
        if (A[i] < aux)
        {
            printf("ingrese un valor mayor al ingresado anteriormente\n");
            printf("el valor que ingreso es: %d\n", A[i]);
            printf("el valor anterior es: %d\n", aux);
            i--;
        }
        else if (A[i] > aux)
        {
            aux = A[i];
        }
        printf("Estado del array: \n");
        printf("{ ");
        for (j = 0; j <= i; j++)
        {
            printf("%d ", A[j]);
        }
        printf("}\n");
    }
    return 0;
}
