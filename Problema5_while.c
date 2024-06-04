//Problema 5. _ Presentar los n elementos de la serie de Fibonacci.
#include <stdio.h>

int main () {
    int n;
    int num1 = 0, num2 = 1, siguiente;

    printf("Ingrese la cantidad de números de la serie de Fibonacci que desea obtener: ");
    scanf("%d", &n);

    printf("Los primeros %d números de la serie de Fibonacci son: ", n);

    int i = 0;
    while (i < n) {
        printf("%d ", num1);
        siguiente = num1 + num2;
        num1 = num2;
        num2 = siguiente;
        i++;
    }

    printf("\n");

    return 0;
}