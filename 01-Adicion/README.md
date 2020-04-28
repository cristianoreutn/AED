[cristianoreutn](https://github.com/cristianoreutn)  (_Usuario Github_)
* Legajo 1188665
* Orellana, Cristian
---
### 00-Adición
#### Mostrar la suma de dos números enteros que ingresa el usuario.
Escribimos un programa en el lenguaje C++ que al ejecutar de como resultado la suma de dos numeros enteros.

Definimos el dominio de la funcion para los dos tipos de datos de entrada: **a, b ϵ Z**

* Leer un entero y almacenarlo en **a**
* Leer un entero y almacenarlo en **b**
* Mostrar en pantalla **a+b**

---

### Modelo IPO

![IPO](https://github.com/cristianoreutn/AED/blob/master/01-Adicion/PNG/IPO.jpg)

---

### Algoritmo Textual C++:

    /*
    * Adición
    * "Solicitar dos números enteros por teclado, y como resultado, imprimir en pantalla la suma"  
    * Orellana, Cristian 
    * 20200420
    */

    #include <iostream>

    int main() {
        int a; int b;int suma
        std::cout << "Ingresar un numero entero\n";
        std::cin >> a;
        std::cout << "Ingresar otro numero entero\n";
        std::cin >> b;
        suma=a+b;
        std::cout << "La suma es ";
        std::cout <<suma;
        }
        
  ### Algoritmo Visual Diagrama de Flujo Estandard ISO 5807
  
  ![Diagrama](https://github.com/cristianoreutn/AED/blob/master/01-Adicion/PNG/Diagrama.jpg)
  
---
    
 **Preparación del Entorno de Desarrollo**

Plataforma: Windows 10 64 Bit 
Compilador: MinGw (Requiere configuración de los Path "C:\MingGW\bin" y "C:\MinGW\msys\1.0\bin")
IDE: Visual Studio Code

**Compilación C++** 

Por Terminal CMD 

    C:\UTN\Codigo>make adicion
    g++ -std=c++17    adicion.cpp   -o adicion

**Ejecución del Programa**

Por Terminal CMD

    C:\UTN\Codigo>adicion.exe
