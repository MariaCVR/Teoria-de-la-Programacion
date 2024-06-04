//Problema 16._ Calcular la suma de la serie 1 + 1/2 + 1/3 + … + 1/n.
#include <stdio.h>
int main() {
    int n;
    float suma = 0;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    printf("La serie es: ");
    int i = 1;
    suma = 0;
    i = 1;
    printf("La serie es: ");
    do {
        if (i > 1) {
            printf(" + ");
        }
        printf("1/%d", i);
        suma += 1.0 / i;
        i++;
    } while (i <= n);
    printf("\nLa suma de la serie hasta %d es %f\n", n, suma);
    return 0;
}