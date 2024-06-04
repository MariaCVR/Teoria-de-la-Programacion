// Problema 2. _ Dado un número, obtener su inverso.
#include <stdio.h>
int main() {
    int numero, inverso = 0;
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    // Calcula el inverso del número utilizando un bucle for
    for (int i = numero; i != 0; i /= 10) {
        inverso = inverso * 10 + i % 10;
    }
    printf("El inverso del número es: %d\n", inverso);
    return 0;
}
