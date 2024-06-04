// Problema 11. _ Calcular el MCD de dos números.
#include <stdio.h>
int main() {
    int numero1, numero2;
    int mcd;
    printf("Ingrese el primer número: ");
    scanf("%d", &numero1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &numero2);
    for (int i = 1; i <= numero1 && i <= numero2; i++)
    {
        if (numero1 % i == 0 && numero2 % i == 0)
        {
            mcd = i;
        }
    }
    printf("El MCD de %d y %d es %d\n", numero1, numero2, mcd);
}