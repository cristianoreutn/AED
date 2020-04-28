/*
* Adición
* "Solicitar dos números enteros por teclado, y como resultado, imprimir en pantalla la suma"  
* Orellana, Cristian 
* 20200420
*/


#include <iostream>

int main() {
    int a; int b;

    std::cout << "Ingresar un numero entero\n";
    std::cin >> a;
    std::cout << "Ingresar otro numero entero\n";
    std::cin >> b;
    std::cout << "La suma es ";
    std::cout <<a + b;
}