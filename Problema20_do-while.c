//Problema 20._ Calcular la suma de los factoriales de los primeros n números. 
#include <stdio.h>
int main() {
    int n;
    int sumaFactoriales = 0;
    int factorial = 1;
    int i = 1;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    sumaFactoriales = 0;
    factorial = 1;
    i = 1;
    do {
        factorial *= i;
        sumaFactoriales += factorial;
        i++;
    } while (i <= n);

    printf("La suma de los factoriales de los primeros %d números es %d\n", n, sumaFactoriales);
    return 0;
}