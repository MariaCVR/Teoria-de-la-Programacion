// Taller de Teoria de la progrmacion.
// Realiza los siguientes ejercicios con for, while y do while.
//  Problema 1. _ Dado un número, calcular la suma de sus dígitos.
 #include <stdio.h>

int main()
{
    int numero, suma = 0;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    for (; numero != 0; numero /= 10)
    {
        suma += numero % 10;
    }

    printf("La suma de los dígitos es: %d\n", suma);
    return 0;
}

