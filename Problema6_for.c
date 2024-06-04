// Problema 6. _ Calcular el factorial de un número.
#include <stdio.h>
int main() {
    int numero,  i;
    long long factorial = 1;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    for (i = 1; i <= numero; i++)
    {
        factorial *= i;
    }
    printf("El factorial de %d utilizando el bucle for es: %lld\n", numero, factorial);
}