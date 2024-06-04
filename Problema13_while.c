//Problema 13. _ Calcular la suma de todos los números pares desde 1 hasta n.
#include <stdio.h>
int main() {
    int n;
    int suma = 0;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    int i = 2;
    while (i <= n) {
        suma += i;
        i += 2;
    }
    printf("La suma de los números pares hasta %d es %d\n", n, suma);
}