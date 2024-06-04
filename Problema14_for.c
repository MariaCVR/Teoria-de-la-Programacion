// Problema 14. _ Calcular la suma de los cuadrados de los primeros n números naturales.
#include <stdio.h>
int main () { 
    int n;
    int suma = 0;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        suma += i * i;
    }
    printf("La suma de los cuadrados de los primeros %d números es %d\n", n, suma);
    return 0;
}