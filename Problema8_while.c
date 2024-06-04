//Problema 8. _ Calcular el producto de los primeros n términos de una serie geométrica.
#include <stdio.h>
int main() {
    int n;
    float producto = 1.0;
    int i = 0;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    printf("La serie es: ");
    while (i < n) {
        printf("%.0f", producto);
        if (i != n - 1) {
            printf(", ");
        }
        producto *= 2;
        i++;
    }
    printf("\nEl producto de los primeros %d términos es: %.0f\n", n, producto - 1);
return 0;
}