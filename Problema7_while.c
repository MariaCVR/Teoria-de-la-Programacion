//Problema 7. _ Calcular la suma de los primeros n términos de una serie aritmética.
#include <stdio.h>
int main() {
    int n, suma = 0;
    int i = 1;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    printf("La serie es: ");
    while (i <= n) {
        printf("%d", i);
        if (i != n) {
            printf(" + ");
        }
        suma += i;
        i++;
    }
    printf("\nLa suma de los primeros %d términos es: %d\n", n, suma);
    return 0;
    }