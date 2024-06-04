//Problema 14. _ Calcular la suma de los cuadrados de los primeros n números naturales.
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
        suma += i * i;
        i++;
    } while (i <= n);

    printf("La suma de los cuadrados de los primeros %d números es %d\n", n, suma);

    return 0;
}