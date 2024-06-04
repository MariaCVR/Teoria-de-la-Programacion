//Problema 18. _ Contar cuántos números primos hay desde 1 hasta n.   
#include <stdio.h>
int main() {
    int n;
    int contador = 0;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    int num = 2;
    contador = 0;
    num = 1;
    do {
        int esPrimo = 1;
        int divisor = 2;
        do {
            if (num % divisor == 0) {
                esPrimo = 0;
                break;
            }
            divisor++;
        } while (divisor < num);
        if (esPrimo) {
            contador++;
        }
        num++;
    } while (num <= n);

    printf("Hay %d números primos desde 1 hasta %d\n", contador, n);
    return 0;
}