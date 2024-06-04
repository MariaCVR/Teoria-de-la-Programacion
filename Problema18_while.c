//Problema 18. _ Contar cuántos números primos hay desde 1 hasta n.   
#include <stdio.h>
int main() {
    int n;
    int contador = 0;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    int num = 2;
    while (num <= n) {
        int esPrimo = 1;
        int divisor = 2;
        while (divisor < num) {
            if (num % divisor == 0) {
                esPrimo = 0;
                break;
            }
            divisor++;
        }
        if (esPrimo) {
            contador++;
        }
        num++;
    }
    printf("Hay %d números primos desde 1 hasta %d\n", contador, n);
}