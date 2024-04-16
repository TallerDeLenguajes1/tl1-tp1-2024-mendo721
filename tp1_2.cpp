#include <stdio.h>
#include <iostream>

int cuadrado(int num);

void cuadradoNum(int num);

void invertir(int *numA, int *numB);

void orden(int *numA, int *numB);

int main()
{
    int numero1, numero2;

    std::cout << "Ingrese el primer numero entero: ";
    std::cin >> numero1;

    std::cout << "Ingrese el segundo numero entero: ";
    std::cin >> numero2;

    std::cout << "\nNumeros ingresados antes de ordenar: " << std::endl;
    std::cout << "Numero 1: " << numero1 << std::endl;
    std::cout << "Numero 2: " << numero2 << std::endl;

    std::cout << "\nEl cuadrado del primer numero es: ";
    cuadradoNum(numero1);

    orden(&numero1, &numero2);

    std::cout << "\nNumeros ordenados: " << std::endl;
    std::cout << "Numero 1: " << numero1 << std::endl;
    std::cout << "Numero 2: " << numero2 << std::endl;

    invertir(&numero1, &numero2);

    std::cout << "\nNumeros invertidos: " << std::endl;
    std::cout << "Numero 1: " << numero1 << std::endl;
    std::cout << "Numero 2: " << numero2 << std::endl;
    return 0;
}

int cuadrado(int num)
{
    int cuadrado;
    cuadrado = num * num;
    return cuadrado;
}
void cuadradoNum(int num)
{
    int cuadrado;
    cuadrado = num * num;
    std::cout << "El cuadrado del numero ingresado es: " << cuadrado <<std::endl;
}
void invertir(int *numA, int *numB){
    int aux;
    aux = *numA;
    *numA = *numB;
    *numB = aux;
}
void orden(int *numA, int *numB){
    if (*numA>*numB)
    {
        int aux;
        aux = *numA;
        *numA = *numB;
        *numB = aux;
    }
    
    
}