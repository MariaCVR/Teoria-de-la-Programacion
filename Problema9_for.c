// Problema 9._ Número de dígitos de un número.
#include <stdio.h>
int main() {
    // Problema 9._ Número de dígitos de un número.
    int numero, contador = 0;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    for (int i = numero; i != 0; i /= 10)
    {
        contador++;
    }
    printf("El número %d tiene %d dígitos\n", numero, contador);
    return 0;
   
}