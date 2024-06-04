//Problema 2. _ Dado un número, obtener su inverso. 
#include <stdio.h>
int main() {
    int numero, inverso = 0;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    do {
        inverso = inverso * 10 + numero % 10;
        numero /= 10;
    } while(numero != 0);

    printf("El inverso del número es: %d\n", inverso);

    return 0;
}