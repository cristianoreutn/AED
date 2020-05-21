/*
* Ejemplo Tipos de Datos
* Crear un programa que contenga ejemplos de como se aplicam los tipos de datos"
* Orellana, Cristian 
* 20200518
*/

//Ejemplo con el tipo int (Números enteros): 
//Se declaran dos variables como int y realizamos operaciones básicas matemáticas.  
// Dominio: Números Enteros
#include <iostream>
#include <cassert> //libreria necesaria para utilizar la función assert
#include <string> // para mostrar ejemplos con cadenas de caracteres


int main() {
            int N1=10,N2=2; 
            std::cout << "Tipo de Dato Entero, ejemplo de operaciones matematicas basicas\n\t";
            
            std::cout << "Suma: "<<N1 + N2<<"\n\t";
            std::cout << "Resta: "<<N1 - N2<<"\n\t";
            std::cout << "Multiplicacion: "<<N1 * N2<<"\n\t";
            assert(N2!=0);  // Para evitar la división por 0, Se agrega una aserción. 
            std::cout << "Division: "<<N1 / N2<<"\n";


//Ejemplo con tipo bool (True-False)
            
            bool V1=true,V2=false; 
            assert(V1!=V2);  // Para evitar que las constantes tengan el mismo valor 
            std::cout << "Tipo de Dato Booleano\n\t";
            std::cout << "Verdadero= "<<V1 <<"\n\t";
            std::cout << "Falso= "<<V2 <<"\n";

//Ejemplo con tipo unsigned (Número Naturales Incluido el cero)
            
            unsigned U1=1,U2=-5; 
            unsigned Sum=U1+U2;
            assert(Sum>=0);  // Para evitar que el resultado sea negativo ya que el tipo de dato declarado es unsigned
            std::cout << "Tipo de Dato unsigned, Suma de Valores\n\t";
            std::cout << "SUMA: "<<Sum <<"\n";

//Ejemplo con tipo Double (Número Reales)
            
            double R1=1.5,R2=5.5; 
            std::cout << "Tipo de Dato Double, Suma de Valores\n\t";
            std::cout << "SUMA: "<<R1+R2 <<"\n";


//Ejemplo con tipo Char (Caracteres)
            
            char char1='A',char2='B'; 
            std::cout << "Tipo de Dato Char\n\t";
            std::cout << "Caracter1: "<<char1 <<"\n\t"; 
            std::cout << "Caracter2: "<<char2 <<"\n";       

//Ejemplo con tipo String (Cadena de Caracteres)
            
            std::string Nombre="Cristian",Apellido="Orellana"; 

            std::cout << "Tipo de Dato String, concatenación de cadenas\n\t";
            std::cout << Nombre <<Apellido <<"\n"; 
                     
}
