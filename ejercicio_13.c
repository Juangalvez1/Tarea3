/*
- Fecha de publicación: 
- Hora de publicación: 20:30
- Versión de su código: 1.0
- Autor. Ing(c) Juan José Gálvez López
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C11
- Versión del compilador utilizado: MinGW.org GCC-6.3.0-1
- Versión del S.O sobre el que compilo y probo su código: Windows 11 Home Single Language, 23H2
- Presentado a: Doctor Ricardo Moreno Laverde 
- Universidad Tecnológica de Pereira 
- Programa de Ingeniería de Sistemas y Computación 
- Asignatura IS284 Programación II 
- Un descriptivo de que hace el programa:
    Este programa recibe 75 numeros por teclado y muestra, cuantos fueron mayores a 150, cual fue el mas grande y el mas pequeño; cuantos negativos se ingresaron y el promedio de los numeros positivos ingresados
- Salvedades:
  Para pruebas hechas en otros sistemas operativos y/o otras versiones del lenguaje, no se garantizan resultados
  Para valores ingresados que no sean numeros enteros, no se garantizan resultados
*/

#include <stdio.h>

void CounterNums(int numbersGreater150, int mayor, int minor, int negatives, float positivesAverage, float positivesCounter, int index){ //Se crea la funcion CounterNums en la que se ira calculando los datos pedidos
    int number = 0;
    if(index <= 75){
        printf("Ingrese un numero(%i): ", index);
        scanf("%i", &number);
        if (number == 0){
            printf("Numero invalido, intente de nuevo.\n");
            CounterNums(numbersGreater150, mayor, minor, negatives, positivesAverage, positivesCounter, index);
        } else {
            if (number > 150){
                numbersGreater150++;
            }
            if (index == 1){
                mayor = number;
            } else if(number > mayor){
                mayor = number;
            }
            if (index == 1){
                minor = number;
            } else if(number < minor){
                minor = number;
            }
            if (number<0){
                negatives++;                                                  
            }   
            if (number>0){
                positivesAverage += number;
                positivesCounter += 1;
            }
            CounterNums(numbersGreater150, mayor, minor, negatives, positivesAverage, positivesCounter, index + 1);
        }
    } else {
        printf("\n1. Numeros mayores a 150: %i\n2. Mayor numero ingresado: %i\n3. Menor numero ingresado: %i\n4. Numeros negativos ingresados: %i\n5. Promedio de los numeros positivos ingresados: %.2f\n", numbersGreater150, mayor, minor, negatives, positivesAverage/positivesCounter);
    }
    return;
}

int main() {
    printf("Este programa lee 75 numeros por teclado (diferentes de 0) y muestra:\n1. Cantidad de numeros mayores a 150.\n2. Numero mayor y menor ingresados.\n3. Cantidad de numeros negativos ingresados.\n4. Promedio de los numeros positivos ingresados.\n"); //Se explica lo que hara el programa
    CounterNums(0, 0, 0, 0, 0, 0, 1); //Se hace el llamado a la funcion que realizara la tarea pedida

    return 0;
}
