/*
- Fecha de publicación: 
- Hora de publicación: 20:20
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
    Este programa recibe un numero entero y lo imprime al reves
- Salvedades:
  Para pruebas hechas en otros sistemas operativos y/o otras versiones del lenguaje, no se garantizan resultados
  Para valores ingresados que no sean numeros enteros, no se garantizan resultados
*/

#include <stdio.h>

void FlipNumber(int number, int bool, int index){ //Se crea la funcion FlipNumber que imprime le numero al reves
    if (number == 0 && index == 0){
        printf("%i", number);
    } else if(number == 0 && index != 0){
        return;
    } else if (number < 0){
        printf("-");
        FlipNumber(number * -1, 0, index + 1);
    } else if (number > 0){
        if (bool == 0){
            if (number % 10 == 0){
                FlipNumber(number / 10, 0, index + 1);
            } else {
                printf("%i", number % 10);
                FlipNumber(number / 10, 1, index + 1);
            }
        } else {
            printf("%i", number % 10);
            FlipNumber(number / 10, 1, index + 1);
        }
    }
}


int main() {
    int number = 0; //Inicializamos la variable number, donde guardaremos el valor ingresado por el usuario

    printf("Este  programa  lee  desde  el  teclado  un  numero entero y lo imprime al reves.\nEntre el numero: "); //Se explica lo que hara el programa
    scanf("%i", &number);
    FlipNumber(number, 0, 0); //Se hace el llamado a la funcion que imprime el numero al reves

    return 0;
}
