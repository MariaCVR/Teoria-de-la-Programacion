//Problema 20._ Calcular la suma de los factoriales de los primeros n números.
#include <stdio.h>
int main() {
    int n;
    int sumaFactoriales = 0;
    int factorial = 1;
    int i = 1;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    while (i <= n) {
        factorial *= i;
        sumaFactoriales += factorial;
        i++;
    }
    printf("La suma de los factoriales de los primeros %d números es %d\n", n, sumaFactoriales);
}