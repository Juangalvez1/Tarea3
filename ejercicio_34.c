/*
- Fecha de publicación: 
- Hora de publicación: 00:36
- Versión de su código: 1.0
- Autor. Ing(c) Juan José Gálvez López
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C11
- Versión del compilador utilizado: MinGW.org GCC-6.3.0-1
- Versión del S.O sobre el que compilo y probo su código: Windows 11 Home Single Language, 23H2
- Precostado a: Doctor Ricardo Moreno Laverde 
- Universidad Tecnológica de Pereira 
- Programa de Ingeniería de Sistemas y Computación 
- Asignatura IS284 Programación II 
- Un descriptivo de que hace el programa:
    Este programa calcula la serie de tailor de senx, x y la cantidad de terminos de la serie de taylor lo ingresa el usuario.
- Salvedades:
  Para pruebas hechas en otros sistemas operativos y/o otras versiones del lenguaje, no se garantizan resultados
  Para valores ingresados que no sean numeros reales mayores a 0 para la x, no se garantizan resultados.
  Para valores ingresados que no sean numeros enteros positivos para los terminos a sumar, no se garantizan resultados.
*/

#include <stdio.h>
#include <math.h>

long int CalculateFactorial(int number){
    if (number <= 1){
        return 1;
    } else {
        return number * CalculateFactorial(number - 1);
    }
}

double CalculateSin(double x, int times, int index){
    if (index > times){
        return 0;
    } else {
        return (pow(-1 , index) * pow(x,2 * index + 1)) / CalculateFactorial(2 * index + 1) + CalculateSin(x, times, index + 1);
    }
}

int main(){
    //Inicializamos las variables x y terms, donde guardaremos el valor ingresado por el usuario
    double x = 0;
    int terms = 0; 

    printf("Este programa calcula por serie de taylor la funcion senx."); //Explicamos brevemente lo que hace el programa
    printf("\nIngrese el valor de x que para reemplazar en la serie de taylor: "); //Le pedimos al usuario que ingrese el valor de x que desea averiguar
    scanf("%lf", &x); //Le asignamos el valor ingresado a la variable x
    printf("Ingrese el numero de terminos de la serie que desea sumar (numero entero positivo): ");
    scanf("%i", &terms);

    printf("\nEl resultado es de: %lf", CalculateSin(x, terms, 0));

    return 0;
}
