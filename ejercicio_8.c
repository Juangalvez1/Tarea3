/*
- Fecha de publicación: 
- Hora de publicación: 19:35
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
  Para valores ingresados que no sean numeros enteros positivos, no se garantizan resultados
*/

#include <stdio.h>

unsigned long long int CalculateFactorial(int number){ //Se crea la funcion CalculateFactorial que retorna el factorial de un numero dado
    if (number == 0 || number == 1){
        return 1;
    } else {
        return number * CalculateFactorial(number - 1);
    }
}

void ShowCatalanSeries(unsigned long int number1, int index, int times){ //Se crea la funcion ShowCatalanSeries en la que se ira calculando e imprimiendo el siguiente numero de la serie de Catalan
    if(index <= times){
        if (index == times){
            printf("%lu.", number1); //Mostramos el n-esimo numero de la serie
            return;
        } else {
            printf("%lu, ", number1);
            ShowCatalanSeries((CalculateFactorial(2 * index)) / ((CalculateFactorial(index)) * (CalculateFactorial(index + 1))), index + 1, times);
        }
    }
    return;
}

int main() {
    int times = 0; //Inicializamos la variable times, donde guardaremos el valor ingresado por el usuario

    printf("Este programa presenta los n primeros numeros de la serie de Catalan\nIngrese el numero de terminos que quiere ver: "); //Se explica lo que hara el programa
    scanf("%i", &times);
    ShowCatalanSeries(1, 1, times); //Se hace el llamado a la funcion que imprime la serie de catalan

    return 0;
}
