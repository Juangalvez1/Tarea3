/*
- Fecha de publicación: 
- Hora de publicación: 20:38
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
    Este programa mustra las tablas de multiplicar del 1 al 10
- Salvedades:
  Para pruebas hechas en otros sistemas operativos y/o otras versiones del lenguaje, no se garantizan resultados
*/

#include <stdio.h>

void ShowMultiplicationsTables(int counter1, int counter2){ //Se crea la funcion CalculateMultiplicationTable Para que vaya mostrando la tabla demultiplicar que se le pida
    if(counter2 <= 10){
        if (counter1 <= 10){
            printf("\n%i x %i = %i", counter2, counter1, counter1 * counter2);
            ShowMultiplicationsTables(counter1 + 1, counter2);
        } else {
            printf("\n");
            ShowMultiplicationsTables(1, counter2 + 1);
        }
    }
    return;
} 

int main() {

    printf("Este programa presenta las tablas de multiplicar del 1 al 10.\n\n "); //Se explica lo que hara el programa
    ShowMultiplicationsTables(1, 1); //Se hace el llamado a la funcion que imprime la serie de narayana

    return 0;
}
