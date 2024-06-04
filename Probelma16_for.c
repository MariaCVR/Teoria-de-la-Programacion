 // Problema 16._ Calcular la suma de la serie 1 + 1/2 + 1/3 + … + 1/n.
   #include <stdio.h>
int main (){
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