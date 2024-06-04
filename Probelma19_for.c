// Problema 19. _ Calcular el n-ésimo número triangular.
#include <stdio.h>
int main (){
    int n;
    int numeroTriangular = 0;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        numeroTriangular += i;
    }
    printf("El %d-ésimo número triangular es %d\n", n, numeroTriangular);
    return 0;

}