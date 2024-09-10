/*
- Fecha de publicación: 
- Hora de publicación: 22:55
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
    Este programa muestra una piramide invertida de 7 filas de 'P'
- Salvedades:
  Para pruebas hechas en otros sistemas operativos y/o otras versiones del lenguaje, no se garantizan resultados
*/

#include <stdio.h>

void PrintSpaces(int times, int index){
    if (index <= times){
        printf(" ");
        PrintSpaces(times, index + 1);
    }
    return;
}

void PrintLetter(char letter, int times, int index){
    if (index <= times){
        if (index == times){
            printf("%c\n", letter);
        } else {
            printf("%c", letter);
            PrintLetter(letter, times, index + 1);
        }
    }
    return;
}

void PrintPattern(int letter, int index, int spaces, int rows){
    if (rows <= 7){
        PrintSpaces(spaces, 1);
        PrintLetter(letter, index, 1);
        PrintPattern(letter, index - 2, spaces + 1, rows + 1);
    }
    return;
}

int main(){

    printf("Este programa muestra un patron de letras dado.\n");
    
    PrintPattern(80, 13, 0, 1);

    return 0;
}
