// Taller de Teoria de la progrmacion.
// Realiza los siguientes ejercicios con for, while y do while.
//  Problema 1. _ Dado un número, calcular la suma de sus dígitos.
// Realizacion en while
#include <stdio.h>
int main()
{
    int numero, suma = 0;

    printf("Ingrese un número: "); // Le pido al usuario que ingrese un valor
    scanf("%d", &numero);          // Leemos el valor que el usuario ingreso

    while (numero != 0)
    {                        // Realizamos la pregunta
        suma += numero % 10; // Obtener el último dígito del número y sumarlo a la variable suma
        numero /= 10;        // Dividir el número entre 10 para eliminar el último dígito
    }

    printf("La suma de los dígitos es: %d\n", suma); // Imprimir el resultado
    return 0;
} 