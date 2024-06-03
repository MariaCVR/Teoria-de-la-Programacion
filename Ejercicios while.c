// Problema 1. _ Dado un número, calcular la suma de sus dígitos.
// Realizacion en while 
#include <stdio.h>
int main() {
    int numero, suma = 0;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    
    while(numero != 0) {
        suma += numero % 10;
        numero /= 10;
    }
    
    printf("La suma de los dígitos es: %d\n", suma);
    return 0;
}
//Problema 2. _ Dado un número, obtener su inverso.
//Realizacion con while 
#include <stdio.h>
int main() { 
    int numero, inverso = 0;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    while(numero != 0) {
        inverso = inverso * 10 + numero % 10;
        numero /= 10;
    }

    printf("El inverso del número es: %d\n", inverso);

    return 0;
}
//Problema 3. _ Calcular la potencia de un número utilizando sumas sucesivas.
//Realizacion en while
#include <stdio.h>
int main() {
    int base, exponente;
    int resultado = 1;

    printf("Ingrese la base: ");
    scanf("%d", &base);

    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    int contador = 0;
    while (contador < exponente) {
        resultado *= base;
        contador++;
    }

    printf("El resultado de %d elevado a la %d es: %d\n", base, exponente, resultado);

    return 0;
}
//Problema 4. _ Calcular la raíz cúbica de un número utilizando restas sucesivas.
//Realizacion con while 
#include <stdio.h>
int main()  {
    int numero, raiz_cubica;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    
    raiz_cubica = 1;
    while (raiz_cubica * raiz_cubica * raiz_cubica <= numero) {
        raiz_cubica++;
    }
    raiz_cubica--;
    
    printf("La raíz cúbica de %d es: %d\n", numero, raiz_cubica);
    return 0;
}
//Problema 5. _ Presentar los n elementos de la serie de Fibonacci.
//Realizacion con while 
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
//Problema 6. _ Calcular el factorial de un número.
//Realizacion en while 
#include <stdio.h>

int main() {
    int numero, i;
    long long factorial = 1;

    printf("Ingrese un número: ");
    scanf("%d", &numero);
     i = 1;
    factorial = 1;
    while (i <= numero) {
        factorial *= i;
        i++;
    }
    printf("El factorial de %d utilizando el bucle while es: %lld\n", numero, factorial);
}
//Problema 7. _ Calcular la suma de los primeros n términos de una serie aritmética.
//Realizaccion while 
#include <stdio.h>
int main() {
    int n, suma = 0;
    int i = 1;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    printf("La serie es: ");
    while (i <= n) {
        printf("%d", i);
        if (i != n) {
            printf(" + ");
        }
        suma += i;
        i++;
    }
    printf("\nLa suma de los primeros %d términos es: %d\n", n, suma);
    return 0;
    }
    //Problema 8. _ Calcular el producto de los primeros n términos de una serie geométrica.
//Realizacion con while 
#include <stdio.h>
int main() {
    int n;
    float producto = 1.0;
    int i = 0;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    printf("La serie es: ");
    while (i < n) {
        printf("%.0f", producto);
        if (i != n - 1) {
            printf(", ");
        }
        producto *= 2;
        i++;
    }
    printf("\nEl producto de los primeros %d términos es: %.0f\n", n, producto - 1);
return 0;
}
//Problema 9._ Número de dígitos de un número.
//Realizacion con while 
#include <stdio.h>
int main() {
    int numero, contador = 0;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    int i = numero;
    while (i != 0) {
        contador++;
        i /= 10;
    }
    printf("El número %d tiene %d dígitos\n", numero, contador);
    return 0;
    }
    //Prtoblema 10. _ Determinar si un número es primo.
//Realizacion con while 
#include <stdio.h>
int main() {
    int numero;
    int esPrimo = 1; 
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    int i = 2;
    while (i <= numero / 2) {
        if (numero % i == 0) {
            esPrimo = 0;
            break;
        }
        i++;
    }
    if (esPrimo == 1) {
        printf("%d es primo\n", numero);
    } else {
        printf("%d no es primo\n", numero);
    }
    return 0;
    }
//Problema 11. _ Calcular el MCD de dos números.
//Realizacion con while 
#include <stdio.h>
int main() {
    int numero1, numero2;
    int mcd;
    printf("Ingrese el primer número: ");
    scanf("%d", &numero1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &numero2);
    int i = 1;
    while (i <= numero1 && i <= numero2) {
        if (numero1 % i == 0 && numero2 % i == 0) {
            mcd = i;
        }
        i++;
    }
    printf("El MCD de %d y %d es %d\n", numero1, numero2, mcd);
    }
//Problema 12. _Calcular la suma de todos los números impares desde 1 hasta n.
//Realizacion con while 
#include <stdio.h>
int main() {
    int n;
    int suma = 0;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    int i = 1;
    while (i <= n) {
        suma += i;
        i += 2;
    }
    printf("La suma de los números impares hasta %d es %d\n", n, suma);
}
//Problema 13. _ Calcular la suma de todos los números pares desde 1 hasta n.
//Realizacion con while 
#include <stdio.h>
int main() {
    int n;
    int suma = 0;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    int i = 2;
    while (i <= n) {
        suma += i;
        i += 2;
    }
    printf("La suma de los números pares hasta %d es %d\n", n, suma);
}
//Problema 14. _ Calcular la suma de los cuadrados de los primeros n números naturales.
//Realizacion con while 
#include <stdio.h>
int main() {
    int n;
    int suma = 0;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    int i = 1;
    while (i <= n) {
        suma += i * i;
        i++;
    }
    printf("La suma de los cuadrados de los primeros %d números es %d\n", n, suma);
}
//Problema 15. _ Calcular la suma de los cubos de los primeros n números naturales.
//Realizacion con while 
#include <stdio.h>
int main() {
    int n;
    int suma = 0;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    int i = 1;
    while (i <= n) {
        suma += i * i * i;
        i++;
    }
    printf("La suma de los cubos de los primeros %d números es %d\n", n, suma);
}
//Problema 16._ Calcular la suma de la serie 1 + 1/2 + 1/3 + … + 1/n.
//Realizacion con while 
#include <stdio.h>
int main() {
    int n;
    float suma = 0;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    printf("La serie es: ");
    int i = 1;
    while (i <= n) {
        if (i > 1) {
            printf(" + ");
        }
        printf("1/%d", i);
        suma += 1.0 / i;
        i++;
    }
    printf("\nLa suma de la serie hasta %d es %f\n", n, suma);
}
//Problema 17. _ Calcular el producto de la serie 1 * 1/2 * 1/3 * … * 1/n
// Realizacion en while 
#include <stdio.h>
int main() {
    int n;
    float producto = 1;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    int i = 1;
    while (i <= n) {
        producto *= 1.0 / i;
        i++;
    }
    printf("El producto de la serie hasta %d es %f\n", n, producto);
 }
 //Problema 18. _ Contar cuántos números primos hay desde 1 hasta n.   
//Realizacion con while 
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
//Problema 19. _ Calcular el n-ésimo número triangular.
//Realizacion con  while 
#include <stdio.h>
int main() {
    int n;
    int numeroTriangular = 0;
    int i = 1;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    while (i <= n) {
        numeroTriangular += i;
        i++;
    }
    printf("El %d-ésimo número triangular es %d\n", n, numeroTriangular);
}
//Problema 20._ Calcular la suma de los factoriales de los primeros n números.
//Realizacion con while 
#include <stdio.h>
int main() {
    int n;
    int sumaFactoriales = 0;
    int factorial = 1;
    int i = 1;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    while (i <= n) {
        factorial *= i;
        sumaFactoriales += factorial;
        i++;
    }
    printf("La suma de los factoriales de los primeros %d números es %d\n", n, sumaFactoriales);
}



