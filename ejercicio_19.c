/*
- Fecha de publicación: 
- Hora de publicación: 22:30
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
    Este programa va mostrando unas 'A' en pantalla y las va acercando en cada iteracino de la funcion PrintPattern
- Salvedades:
  Para pruebas hechas en otros sistemas operativos y/o otras versiones del lenguaje, no se garantizan resultados
*/

#include <stdio.h>
#include <windows.h>

void PrintSpaces(int index, int times){
    if (index <= times){
        printf(" ");
        PrintSpaces(index + 1, times);
    }
    return;
}

void PrintLetter(char letter, int times, int index){
    if (index <= times){
        if (index == times){
            printf("%c", letter);
        } else {
            printf("%c", letter);
            PrintLetter(letter, times, index + 1);
        }
    }
    return;
}

void PrintPattern(int index, int spaces1, int spaces2){
    if (spaces2 == 0){
        PrintSpaces(1, spaces1);
        PrintLetter(65, 1, 1);
        PrintSpaces(1, spaces2);
        PrintLetter(65, 1, 1);
    } else {
        PrintSpaces(1, spaces1);
        PrintLetter(65, 1, 1);
        PrintSpaces(1, spaces2);
        PrintLetter(65, 1, 1);
        Sleep(150);
        system("cls");
        PrintPattern(index + 1, spaces1 + 1, spaces2 - 2);
    }
    return;
}

int main(){

    system("cls");
    PrintPattern(1, 0, 78);

    return 0;
}
