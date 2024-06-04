//Problema 6. _ Calcular el factorial de un número.
#include <stdio.h>
int main() {
    int numero, i;
    long long factorial = 1;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
 i = 1;
    factorial = 1;
    do {
        factorial *= i;
        i++;
    } while (i <= numero);
    printf("El factorial de %d utilizando el bucle do while es: %lld\n", numero, factorial);
    return 0;
}