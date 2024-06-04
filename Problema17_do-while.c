//Problema 17. _ Calcular el producto de la serie 1 * 1/2 * 1/3 * … * 1/n
 #include <stdio.h>
int main() {
    int n;
    float producto = 1;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    int i = 1;
    producto = 1;
    i = 1;
    do {
        producto *= 1.0 / i;
        i++;
    } while (i <= n);
    printf("El producto de la serie hasta %d es %f\n", n, producto);
    return 0;
}