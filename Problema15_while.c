//Problema 15. _ Calcular la suma de los cuadrados de los primeros n números naturales.
#include <stdio.h>
int main() {
    int n;
    int suma = 0;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    int i = 1;
    while (i <= n) {
        suma += i * i;
        i++;
    }
    printf("La suma de los cuadrados de los primeros %d números es %d\n", n, suma);
}