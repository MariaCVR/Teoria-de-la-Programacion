//Problema 3. _ Calcular la potencia de un número utilizando sumas sucesivas.
#include <stdio.h>
int main() {
    int base, exponente;
    int resultado = 1;

    printf("Ingrese la base: ");
    scanf("%d", &base);

    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    int contador = 0;
    while (contador < exponente) {
        resultado *= base;
        contador++;
    }

    printf("El resultado de %d elevado a la %d es: %d\n", base, exponente, resultado);

    return 0;
}