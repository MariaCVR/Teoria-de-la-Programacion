//Problema 6. _ Calcular el factorial de un número.
#include <stdio.h>

int main() {
    int numero, i;
    long long factorial = 1;

    printf("Ingrese un número: ");
    scanf("%d", &numero);
     i = 1;
    factorial = 1;
    while (i <= numero) {
        factorial *= i;
        i++;
    }
    printf("El factorial de %d utilizando el bucle while es: %lld\n", numero, factorial);
}