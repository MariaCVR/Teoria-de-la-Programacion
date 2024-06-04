//Problema 19. _ Calcular el n-ésimo número triangular.
#include <stdio.h>
int main() {
    int n;
    int numeroTriangular = 0;
    int i = 1;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    while (i <= n) {
        numeroTriangular += i;
        i++;
    }
    printf("El %d-ésimo número triangular es %d\n", n, numeroTriangular);
}