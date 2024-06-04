//Problema 14. _ Calcular la suma de los cubos de los primeros n números naturales.
#include <stdio.h>
int main() {
    int n;
    int suma = 0;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    int i = 1;
    while (i <= n) {
        suma += i * i * i;
        i++;
    }
    printf("La suma de los cubos de los primeros %d números es %d\n", n, suma);
}