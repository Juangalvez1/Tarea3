/*
- Fecha de publicación: 
- Hora de publicación: 19:01
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
    Este programa calcula y muestra los numeros de la serie de fibonacci menores a 100, ademas muetra el valor de su suma
- Salvedades:
  Para pruebas hechas en otros sistemas operativos y/o otras versiones del lenguaje, no se garantizan resultados
*/

#include <stdio.h>

void ShowFibonacciSum(int number1, int number2, int suma){ //Se crea la funcion ShowFibonacciSum en la que se ira calculando e imprimiendo el siguiente numero de la serie de fibonacci
    if(number1 < 100){
        if(number2 > 100){ //Condicion extra para no imprimir la coma en el ultimo temrino
            printf("%i y su suma es: %i", number1, suma+number1);
            return;
        } else {
            printf("%i, ", number1);
            ShowFibonacciSum(number2, number1+number2, (suma + number1)); //Hace el llamado recursivo
        }
        return;
    }
}

int main() {
    printf("Este programa presenta la suma de los elementos de la serie de Fibonacci entre 0 y 100.\nLos numeros a sumar son:\n"); //Se explica lo que hara el programa
    ShowFibonacciSum(0 , 1, 0); //Se hace el llamado a la funcion que imprime la serie de fibonacci

    return 0;
}
