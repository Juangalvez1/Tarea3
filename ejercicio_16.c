/*
- Fecha de publicación: 
- Hora de publicación: 21:10
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
    Este programa calcula el la suma de los factoriales hasta un numero dado
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

void SumFactorials(int times, int index, long int sum){ //se crea la funcion SumFactorials la cual lleva la suma de los factoriales que se van mostrando
    if (index <= times){
        if (index == times){
            sum += CalculateFactorial(index);
            printf("%i! = %li", index, sum);
            return;
        } else {
            printf("%i! + ", index);
            sum += CalculateFactorial(index);
            SumFactorials(times, index + 1, sum);
        }
    }
    return;
}

int main() {
    int number = 0; //Inicializamos la variable number, donde guardaremos el valor ingresado por el usuario

    printf("Este programa muestra la suma de los factoriales hasta un numero.\nIngrese un numero: "); //Se explica lo que hara el programa
    scanf("%i", &number);
    
    if (number >= 0){
        SumFactorials(number, 0, 0); //Se hace el llamado a la funcion que muestra el factorial del numero ingresado
    }
    else{
        printf("El numero ingresado no cumple con las condiciones requeridas para el funcinamiento del programa. Intente de nuevo.");
    }
    

    return 0;
}
