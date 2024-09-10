/*
- Fecha de publicación: 
- Hora de publicación: 21:20
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
    Este programa muestra por pantalla ciertas parejas de enteros
- Salvedades:
  Para pruebas hechas en otros sistemas operativos y/o otras versiones del lenguaje, no se garantizan resultados
*/

#include <stdio.h>

void ShowIntegers(int counter1, int counter2, int index){ //Se crea la funcion ShowIntegers que retorna el factorial de un numero dado
    if (counter1 <= 9){
        if (index % 2 == 0){
            printf("\n%i %i", counter1, counter2);
            ShowIntegers(counter1 + 1, counter2 + 1, index + 1);
        } else {
            printf("\n%i %i", counter1, counter2);
            ShowIntegers(counter1 + 1, counter2, index + 1);
        }
    }
    return;
} 

int main() {

    printf("Este programa muestra ciertas parejas de enteros."); //Se explica lo que hara el programa
    ShowIntegers(0, 1, 1); //Se hace el llamado a la funcion que muestra las parejas de enteros

    return 0;
}
