/*
- Fecha de publicación: 
- Hora de publicación: 19:28
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
    Este programa muestra los n-primeros terminos de la serie de Motszkin, n es ingresado por el usuario
- Salvedades:
  Para pruebas hechas en otros sistemas operativos y/o otras versiones del lenguaje, no se garantizan resultados
  Para valores ingresados que no sean numeros enteros positivos, no se garantizan resultados
*/

#include <stdio.h>

int SumTerms(int k, int number);

int CalculateMotzkin(int number) {
    if (number == 0 || number == 1) {
        return 1;
    }
    return CalculateMotzkin(number - 1) + SumTerms(0, number);
}

int SumTerms(int index, int number) {
    if (index > number - 2) {
        return 0;
    }
    return CalculateMotzkin(index) * CalculateMotzkin(number - 2 - index) + SumTerms(index + 1, number);
}

void ShowMotzkinSeries(int index, int times) {
    if (index < times-1) {
        printf("%d, ", CalculateMotzkin(index));
        ShowMotzkinSeries(index + 1, times); 
    } else {
        printf("%d.", CalculateMotzkin(index));
    }
}

int main() {
    int times = 0; //Inicializamos la variable times, donde guardaremos el valor ingresado por el usuario

    printf("Este programa presenta los n primeros numeros de la serie de motzkin\nIngrese el numero de terminos que quiere ver: "); //Se explica lo que hara el programa
    scanf("%i", &times);
    ShowMotzkinSeries(1, times); //Se hace el llamado a la funcion que imprime la serie de motzkin

    return 0;
}
