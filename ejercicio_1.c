/*
- Fecha de publicación: 
- Hora de publicación: 18:47
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
    Este programa calcula y muestra los numeros de la serie de fibonacci menores a 10000
- Salvedades:
  Para pruebas hechas en otros sistemas operativos y/o otras versiones del lenguaje, no se garantizan resultados
*/

#include <stdio.h>

void ShowFibonacciSeries(int number1, int number2){ //Se crea la funcion ShowFibonaciiSeries en la que se ira calculando e imprimiendo el siguiente numero de la serie de fibonacci
    if(number1 < 10000){
        if(number2 > 10000){ //Condicion extra para no imprimir la coma en el ultimo temrino
            printf("%i", number1);
            return;
        } else {
            printf("%i, ", number1);
            ShowFibonacciSeries(number2, number1+number2); //Hace el llamado recursivo
        }
        return;
    }
}

int main() {
    printf("Este programa presenta la serie de Fibonacci como la serie que comienza con los digitos 1 y 0 y va\nsumando progresivamente los dos ultimos elementos de la serie, asi: 0 1 1 2 3 5 8 13 21 34.......\nPara este programa, se presentara la serie de Fibonacci hasta llegar sin sobrepasar el numero 10,000.\n"); //Se explica lo que hara el programa
    ShowFibonacciSeries(0 , 1); //Se hace el llamado a la funcion que imprime la serie de fibonacci

    return 0;
}
