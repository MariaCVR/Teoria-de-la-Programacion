// Problema 4. _ Calcular la raíz cúbica de un número utilizando restas sucesivas.
#include <stdio.h>
int main () {
    int numero, raiz_cubica;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    for (raiz_cubica = 1; raiz_cubica * raiz_cubica * raiz_cubica <= numero; raiz_cubica++)
        ;

    raiz_cubica--;
    printf("La raíz cúbica de %d es: %d\n", numero, raiz_cubica);
    return 0;
 }