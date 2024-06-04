//Prtoblema 10. _ Determinar si un número es primo. 
#include <stdio.h>
int main() {
    int numero;
    int esPrimo = 1;
    int i; 
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    esPrimo = 1;
    i = 2;
    do {
        if (numero % i == 0) {
            esPrimo = 0;
            break;
        }
        i++;
    } while (i <= numero / 2);
    if (esPrimo == 1) {
        printf("%d es primo\n", numero);
    } else {
        printf("%d no es primo\n", numero);
    }
    return 0;
}