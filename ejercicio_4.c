/*
- Fecha de publicación: 
- Hora de publicación: 19:11
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
    Este programa muestra los n-primeros terminos de la serie de Pell, n es ingresado por el usuario
- Salvedades:
  Para pruebas hechas en otros sistemas operativos y/o otras versiones del lenguaje, no se garantizan resultados
  Para valores ingresados que no sean numeros enteros positivos, no se garantizan resultados
*/

#include <stdio.h>

void ShowPellSeries(int number1, int number2, int index, int times){ //Se crea la funcion ShowPellSeries en la que se ira calculando e imprimiendo el siguiente numero de la serie de pell
    if(index <= times){
        if (index == times){
            printf("%i.", number1); //Mostramos el n-esimo numero de la serie
            return;
        } else {
            printf("%i, ", number1);
            ShowPellSeries(number2, (2 * number2)+(number1), index+1, times); //Hace el llamado recursivo
        }
        return;
    }
}

int main() {
    int times = 0; //Inicializamos la variable times, donde guardaremos el valor ingresado por el usuario

    printf("Este programa presenta los n primeros numeros de la serie de Pell\nIngrese el numero de terminos que quiere ver: "); //Se explica lo que hara el programa
    scanf("%i", &times);
    ShowPellSeries(0, 1, 1, times); //Se hace el llamado a la funcion que imprime la serie de pell

    return 0;
}
