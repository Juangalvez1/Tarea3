/*
- Fecha de publicación: 
- Hora de publicación: 19:22
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
    Este programa muestra los n-primeros terminos de la serie de Padovan, n es ingresado por el usuario
- Salvedades:
  Para pruebas hechas en otros sistemas operativos y/o otras versiones del lenguaje, no se garantizan resultados
  Para valores ingresados que no sean numeros enteros positivos, no se garantizan resultados
*/

#include <stdio.h>

void ShowPadovanSeries(int number1, int number2, int number3, int index, int times){ //Se crea la funcion ShowPadovanSeries en la que se ira calculando e imprimiendo el siguiente numero de la serie de padovan
    if(index <= times){
        if (index == times){
            printf("%i.", number1); //Mostramos el n-esimo numero de la serie
            return;
        } else {
            printf("%i, ", number1);
            ShowPadovanSeries(number2, number3, number1+number2, index+1, times); //Hace el llamado recursivo
        }
        return;
    }
}

int main() {
    int times = 0; //Inicializamos la variable times, donde guardaremos el valor ingresado por el usuario

    printf("Este programa presenta los n primeros numeros de la serie de Padovan\nIngrese el numero de terminos que quiere ver: "); //Se explica lo que hara el programa
    scanf("%i", &times);
    ShowPadovanSeries(1, 0, 0, 1, times); //Se hace el llamado a la funcion que imprime la serie de padovan

    return 0;
}
