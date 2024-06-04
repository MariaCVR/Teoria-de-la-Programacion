//Problema 9._ Número de dígitos de un número.
#include <stdio.h>
int main() {
    int numero, contador = 0;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    int i = numero;
    contador = 0;
    i = numero;
    do {
        contador++;
        i /= 10;
    } while (i != 0);
    printf("El número %d tiene %d dígitos\n", numero, contador);
    return 0;
}