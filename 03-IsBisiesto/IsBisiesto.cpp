
/*
* IsBisiesto
* Dado un año, determinar si es bisiesto. Demostrando el uso de operadores Booleanos y expresiones complejas.
* Orellana, Cristian 
* 20200609
*/

#include <iostream>
#include <cassert> //libreria necesaria para utilizar la función assert

//Prototipo de la Función
bool IsBisiesto(int x);

int main() {
    int x=1584;
    
     assert(IsBisiesto(x)); //Prueba assert para comprobar que la función sea verdadera
    
     assert(IsBisiesto(1583)); //Prueba assert para comprobar que sea mayor o igual a 1584, primer año bisiesto
     assert(IsBisiesto(2019)); //Prueba assert para comprobar que sea divisible por 4
     assert(IsBisiesto(1900)); //Prueba assert para comprobar que es multiplo de 100 y no es divisible por 400
   

}

//Definición de la Función

bool IsBisiesto(int x){

        return ((x>=1584) and (x%4==0)) and ((x%100!=0) or (x%400==0));

}




