// Prtoblema 10. _ Determinar si un número es primo.
#include <stdio.h>
int main () {
    int numero;
    int esPrimo = 1; // 1 significa que es primo, 0 significa que no es primo
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    for (int i = 2; i <= numero / 2; i++)
    {
        if (numero % i == 0)
        {
            esPrimo = 0;
            break;
        }
    }
    if (esPrimo == 1)
    {
        printf("%d es primo\n", numero);
    }
    else
    {
        printf("%d no es primo\n", numero);
    }
    return 0;
}