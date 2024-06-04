// Problema 18. _ Contar cuántos números primos hay desde 1 hasta n.
#include <stdio.h>
int main (){
    int n;
    int contador = 0;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    for (int num = 2; num <= n; num++)
    {
        int esPrimo = 1;
        for (int divisor = 2; divisor < num; divisor++)
        {
            if (num % divisor == 0)
            {
                esPrimo = 0;
                break;
            }
        }
        if (esPrimo)
        {
            contador++;
        }
    }
    printf("Hay %d números primos desde 1 hasta %d\n", contador, n);
    return 0;
}
