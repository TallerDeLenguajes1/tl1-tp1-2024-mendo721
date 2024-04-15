#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Hola mundo");
    int *punt, num = 9;
    punt = &num;
    printf("\nEl contenido del puntero: %d", *punt);
    printf("\nLa direccion que almacena el puntero: %p", punt);
    printf("\nLa direccion de la variable num: %p", &num);
    printf("\nLa direccion de memoria del puntero es: %p", &punt);
    printf("El tamanio de memoria utilizado por la variable es: %zu bytes\n", sizeof(num));


    return 0;
}
