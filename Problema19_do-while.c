//Problema 19. _ Calcular el n-ésimo número triangular.
#include <stdio.h>
int main() {
    int n;
    int numeroTriangular = 0;
    int i = 1;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    numeroTriangular = 0;
    i = 1;
    do {
        numeroTriangular += i;
        i++;
    } while (i <= n);

    printf("El %d-ésimo número triangular es %d\n", n, numeroTriangular);
    return 0;
}