// Problema 1. _ Dado un número, calcular la suma de sus dígitos.
#include <stdio.h>
int main() {
    int numero, suma = 0;
    printf("Ingrese un número: ");// Le pido al usuario que ingrese un valor
    scanf("%d", &numero);//Lemos el valor que ingreso el usuario 
    do {
        suma += numero % 10;// Obtener el último dígito del número y sumarlo a la variable suma
        numero /= 10; // Dividir el número entre 10 para eliminar el último dígito
    } while(numero != 0);
    printf("La suma de los dígitos es: %d\n", suma);// Imprimir el resultado
    return 0;
}