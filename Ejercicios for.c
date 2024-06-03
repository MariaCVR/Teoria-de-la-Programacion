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
// Problema 2. _ Dado un número, obtener su inverso.
// Realizacion en for
#include <stdio.h>
int main()
{
    int base, exponente;
    int resultado = 1;
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);
    for (int i = 0; i < exponente; i++)
    {
        resultado *= base;
    }
    printf("El resultado de %d elevado a la %d es: %d\n", base, exponente, resultado);
    return 0;
}
// Problema 3. _ Calcular la potencia de un número utilizando sumas sucesivas.
// Realizacion en for
#include <stdio.h>
int main(){
    int numero, raiz_cubica;

    printf("Ingrese un número: ");

        scanf("%d", &numero);

    for (raiz_cubica = 1; raiz_cubica * raiz_cubica * raiz_cubica <= numero; raiz_cubica++)
        ;

    raiz_cubica--;

    printf("La raíz cúbica de %d es: %d\n", numero, raiz_cubica);

    return 0;
}
// Problema 4. _ Calcular la raíz cúbica de un número utilizando restas sucesivas.
// Realizacion con for
#include <stdio.h>
int main()
{
    int numero, raiz_cubica;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    for (raiz_cubica = 1; raiz_cubica * raiz_cubica * raiz_cubica <= numero; raiz_cubica++)
        ;

    raiz_cubica--;

    printf("La raíz cúbica de %d es: %d\n", numero, raiz_cubica);

    return 0;
}
// Problema 5. _ Presentar los n elementos de la serie de Fibonacci.
// Realizacion en for
#include <stdio.h>
int main()
{
    int n;
    int num1 = 0, num2 = 1, siguiente;

    printf("Ingrese la cantidad de números de la serie de Fibonacci que desea obtener: ");
    scanf("%d", &n);

    printf("Los primeros %d números de la serie de Fibonacci son: ", n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", num1);
        siguiente = num1 + num2;
        num1 = num2;
        num2 = siguiente;
    }

    printf("\n");

    return 0;
}
// Problema 6. _ Calcular el factorial de un número.
// Realizacion en for
#include <stdio.h>
int main()
{
    int numero, i;
    long long factorial = 1;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    for (i = 1; i <= numero; i++)
    {
        factorial *= i;
    }
    printf("El factorial de %d utilizando el bucle for es: %lld\n", numero, factorial);
}
// Problema 7. _ Calcular la suma de los primeros n términos de una serie aritmética.
// Realización en for
#include <stdio.h>
int main()
{
    int n, suma = 0;

    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    printf("La serie es: ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
        if (i != n)
        {
            printf(" + ");
        }
        suma += i;
    }
    printf("\nLa suma de los primeros %d términos es: %d\n", n, suma);

    return 0;
}
// Problema 8. _ Calcular el producto de los primeros n términos de una serie geométrica.
// Resolucion con for
#include <stdio.h>
int main()
{
    int n;
    float producto = 1.0;
    int i = 0;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    printf("La serie es: ");
    while (i < n)
    {
        printf("%.0f", producto);
        if (i != n - 1)
        {
            printf(", ");
        }
        producto *= 2;
        i++;
    }
    printf("\nEl producto de los primeros %d términos es: %.0f\n", n, producto - 1);
    return 0;
}
// Problema 9._ Número de dígitos de un número.
// Realización con for
#include <stdio.h>
int main()
{
    int numero, contador = 0;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    for (int i = numero; i != 0; i /= 10)
    {
        contador++;
    }
    printf("El número %d tiene %d dígitos\n", numero, contador);
    return 0;
}
// Prtoblema 10. _ Determinar si un número es primo.
// Realizacion con for
#include <stdio.h>
int main()
{
    int numero;
    int esPrimo = 1; // 1 significa que es primo, 0 significa que no es primo
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    for (int i = 2; i <= numero / 2; i++)
    {
        if (numero % i == 0)
        {
            esPrimo = 0;
            break;
        }
    }
    if (esPrimo == 1)
    {
        printf("%d es primo\n", numero);
    }
    else
    {
        printf("%d no es primo\n", numero);
    }
    return 0;
}
// Problema 11. _ Calcular el MCD de dos números.
// Realizacion con for
#include <stdio.h>
int main()
{
    int numero1, numero2;
    int mcd;
    printf("Ingrese el primer número: ");
    scanf("%d", &numero1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &numero2);
    for (int i = 1; i <= numero1 && i <= numero2; i++)
    {
        if (numero1 % i == 0 && numero2 % i == 0)
        {
            mcd = i;
        }
    }
    printf("El MCD de %d y %d es %d\n", numero1, numero2, mcd);
    return 0;
}
// Problema 12. _Calcular la suma de todos los números impares desde 1 hasta n.
// Realizacion con for
#include <stdio.h>
int main()
{
    int n;
    int suma = 0;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i += 2)
    {
        suma += i;
    }
    printf("La suma de los números impares hasta %d es %d\n", n, suma);
    return 0;
}
// Problema 13. _ Calcular la suma de todos los números pares desde 1 hasta n.
// Realizacion con for
#include <stdio.h>
int main()
{
    int n;
    int suma = 0;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2)
    {
        suma += i;
    }
    printf("La suma de los números pares hasta %d es %d\n", n, suma);
    return 0;
}
// Problema 14. _ Calcular la suma de los cuadrados de los primeros n números naturales.
// Realización con for
#include <stdio.h>
int main()
{
    int n;
    int suma = 0;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        suma += i * i;
    }
    printf("La suma de los cuadrados de los primeros %d números es %d\n", n, suma);
    return 0;
}
// Problema 15. _ Calcular la suma de los cubos de los primeros n números naturales.
// Realizacion con for
#include <stdio.h>
int main()
{
    int n;
    int suma = 0;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        suma += i * i * i;
    }
    printf("La suma de los cubos de los primeros %d números es %d\n", n, suma);
    return 0;
}
// Problema 16._ Calcular la suma de la serie 1 + 1/2 + 1/3 + … + 1/n.
// Realizacion con for
#include <stdio.h>
int main()
{
    int n;
    float suma = 0;
    printf("Ingrese un número: ");
    scanf("%d", &n);

    printf("La serie es: ");
    for (int i = 1; i <= n; i++)
    {
        if (i > 1)
        {
            printf(" + ");
        }
        printf("1/%d", i);
        suma += 1.0 / i;
    }
    printf("\nLa suma de la serie hasta %d es %f\n", n, suma);
    return 0;
}
// Problema 17. _ Calcular el producto de la serie 1 * 1/2 * 1/3 * … * 1/n.
// Realizacion en for
#include <stdio.h>

int main()
{
    int n;
    float producto = 1;

    printf("Ingrese un número: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        producto *= 1.0 / i;
    }

    printf("El producto de la serie hasta %d es %f\n", n, producto);

    return 0;
}
// Problema 18. _ Contar cuántos números primos hay desde 1 hasta n.
// Realizacion con for
#include <stdio.h>
int main()
{
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
// Problema 19. _ Calcular el n-ésimo número triangular.
// Realizacion con el ciclo for
#include <stdio.h>
int main()
{
    int n;
    int numeroTriangular = 0;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        numeroTriangular += i;
    }
    printf("El %d-ésimo número triangular es %d\n", n, numeroTriangular);
    return 0;
}
// Problema 20._ Calcular la suma de los factoriales de los primeros n números.
// Realizacion con for
#include <stdio.h>
int main()
{
    int n;
    int sumaFactoriales = 0;
    int factorial = 1;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
        sumaFactoriales += factorial;
    }
    printf("La suma de los factoriales de los primeros %d números es %d\n", n, sumaFactoriales);
    return 0;
}