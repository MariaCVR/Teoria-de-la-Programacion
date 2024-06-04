// Problema 7. _ Calcular la suma de los primeros n términos de una serie aritmética.
#include <stdio.h>
int main () {
    int n, suma = 0;

    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    printf("La serie es: ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
        if (i != n)
        {
            printf(" + ");
        }
        suma += i;
    }
    printf("\nLa suma de los primeros %d términos es: %d\n", n, suma);
    return 0;
}