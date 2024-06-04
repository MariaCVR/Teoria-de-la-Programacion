// Problema 5. _ Presentar los n elementos de la serie de Fibonacci.
#include <stdio.h>
int main() {
    int n, num1 = 0, num2 = 1, siguiente;
    printf("Ingrese la cantidad de elementos de la serie de Fibonacci: ");
    scanf("%d", &n);
    printf("Serie de Fibonacci: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", num1);
        siguiente = num1 + num2;
        num1 = num2;
        num2 = siguiente;
    }
    printf("\n");
    return 0;
}