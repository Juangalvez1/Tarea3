/*
- Fecha de publicación: 
- Hora de publicación: 19:40
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
    Este programa calcula y miesra los n-terminos de la serie Catalan, ademas calculando el factorial necesario para cada termino, n es ingresado por el usuario
- Salvedades:
  Para pruebas hechas en otros sistemas operativos y/o otras versiones del lenguaje, no se garantizan resultados
*/

#include <stdio.h>
#include <math.h>


double CalculateFactorial(int number){
    if(number <= 1){
        return 1;
    } else {
        return number * CalculateFactorial(number - 1);
    } 
} 

float Summation(float index, float term, float times, float result){
    // Se le pone un limite a la sumatoria, sabiendo que entre mayor sea este, mas aproximado estará el resultado
    if(index <= times){
        return Summation((index + 1), term, times, result + (pow(index, (term - 1)) / CalculateFactorial(index)));
    } else {
        return result * (1 / 2.71828182845904523536);
    }
}

void ShowBellSeries(int number1, int times){
    if(number1 < times){
        printf("%.0f, ", Summation(0, number1, 100, 0));
        ShowBellSeries(number1 + 1, times);
    } else{
        printf("%.0f.", Summation(0, number1, 100, 0));
    }
}

int main() {
    int times = 0; //Inicializamos la variable times, donde guardaremos el valor ingresado por el usuario

    printf("Este programa presenta los n primeros numeros de la serie de Bell\nIngrese el numero de terminos que quiere ver: "); //Se explica lo que hara el programa
    scanf("%i", &times);
    ShowBellSeries(1, times); //Se hace el llamado a la funcion que imprime la serie de Bell

    return 0;
}