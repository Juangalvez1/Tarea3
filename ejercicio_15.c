/*
- Fecha de publicación: 
- Hora de publicación: 21:01
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
    Este programa calcula el factorial de un numero
- Salvedades:
  Para pruebas hechas en otros sistemas operativos y/o otras versiones del lenguaje, no se garantizan resultados
  Para valores ingresados que no sean numeros enteros positivos, no se garantizan resultados
*/

#include <stdio.h>

void ShowFactorial(int number, int index, unsigned long int factorial){ //Se crea la funcion ShowFactorial que retorna el factorial de un numero dado
    if (number == 0 || number == 1){
        printf("%i! = 1", number);
    } else if (index == number){
        printf("%i! = %li", number, factorial * index);
    } else {
        ShowFactorial(number, index + 1, factorial * index);
    }
    return;
} 

int main() {
    int number = 0; //Inicializamos la variable number, donde guardaremos el valor ingresado por el usuario

    printf("Este programa muestra el factorial de un numero.\nIngrese un numero: "); //Se explica lo que hara el programa
    scanf("%i", &number);
    ShowFactorial(number, 1, 1); //Se hace el llamado a la funcion que muestra el factorial del numero ingresado

    return 0;
}
