/* La función "scanf" se la utiliza para leer datos de entrada desde el teclado, los datos pueden ser enteros, flotantes, caracteres y cadenas de caracteres*/
/* La función "printf" se la utiliza para mostrar los datos en la pantalla ingresados desde el teclado, ademas permite mostrar cualquier tipo de datos*/
#include <stdyo.h>

int main() {//Inicialización del programa.//
    /* Definimos las variables en dónde: 
    edad es de tipo entero
    altura de tipo decimal
    nombre de tipo caracter*/
    int edad;
    float altura;
    char inicial;
    printf("Bienvenido al programa.\n");// Con la función printf le damos la "bienvenida al programa" al ususario.//
    printf("Ingrese su edad: ");//Con la función printf le pedimos al ususario que ingrese su edad//
    scanf("%d", &edad);// Con la función scanf leemos el valor ingresado por el ususario//
    printf("Ingrese su altura en metros: ");//Con la función printf le pedimos al ususario que ingrese su altura//
    scanf("%f", &altura);// Con la función scanf leemos el valor ingresado por el ususario//
    printf("Ingrese su inicial: "); //Con la función printf le pedimos al ususario que ingrese su inicial//
    scanf("%s", inicial); // Con la función scanf leemos el valor ingresado por el ususario//
    printf("Los valores ingresados son:\n");//Con la función printf le mostramos al ususario el mensaje "Los valores ingresados son"//
    //Mostramos todos los valores ingresados por el usuario utilizando la función printf//
    printf("Edad: %d\n", edad);
    printf("Altura: %.2f metros\n", altura);
    printf("Nombre: %s\n", inicial);

    return 0;//El programa devuelve 0 estro indica que se ha ejecutado correctamente.//
}//Fin del programa//
