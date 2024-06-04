//Problema 12. _Calcular la suma de todos los números impares desde 1 hasta n.
#include <stdio.h>
int main() {
    int n;
    int suma = 0;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    int i = 1;
    suma = 0;
    i = 1;
    do {
        suma += i;
        i += 2;
    } while (i <= n);
    printf("La suma de los números impares hasta %d es %d\n", n, suma);
    return 0;
}