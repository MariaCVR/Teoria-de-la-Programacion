//Problema 3. _ Calcular la potencia de un número utilizando sumas sucesivas.
#include <stdio.h>
int main() {
    int base, exponente, resultado = 1;
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    printf("El resultado es: %d\n", resultado);
    return 0;
}