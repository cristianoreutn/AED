[cristianoreutn](https://github.com/cristianoreutn)  (_Usuario Github_)
* Legajo 1188665
* Orellana, Cristian
---

## 03-IsBisiesto

Dado un año, determinar si es bisiesto, demostrando el uso de operadores Booleanos y expresiones complejas.

### Hipotesis y Refinamiento del problema:
El año a determinar tiene que ser mayor o igual al numero 1584, que representa el primer año bisiesto por ser divisible entre cuatro y no ser divisible por 100. 

Se toma ese valor y se analiza si cumple los siguientes criterios:

* Es bisiesto si es divisible entre 4.
* Pero no es bisiesto si es divisible entre 100.
* Pero sí es bisiesto si es divisible entre 400. (2000 y 2400 sí son bisiestos son divisibles entre 100 pero también entre 400. 1900, 2100, 2200 y 2300 no lo son porque solo son divisibles entre 100).

#### Desde un enfoque algorítmico, se consideran las proposiciones o enunciados lógicos siguientes:

* p: Es divisible entre 4
* q: Es divisible entre 100
* r: Es divisible entre 400

#### Entonces se utiliza la fórmula lógica 

    p ^(-q v r)

En resumen, para establecer si un año dado es bisiesto: 
Tiene que ser mayor o igual a 1584, divisible entre cuatro y (no es divisible entre 100 o es divisible entre 400).

### Diseño de la Solución:

### Léxico:

