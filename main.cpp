#include <iostream>
#include <cstdio> 
#include <windows.h>

using namespace std;

#define FILAS 3
#define COLUMNAS 3  

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
}

int main() {
    int matriz[FILAS][COLUMNAS];
    int num = 1; 

    system("cls");

    // Original
    for (int i = 0; i < FILAS; i++) { 
        for (int j = 0; j < COLUMNAS; j++) {  
            matriz[i][j] = num++;
        }
    }

    // menor a mayor
    printf("Matriz en orden de menor a mayor:\n");
    for (int i = 0; i < FILAS; i++) { 
        for (int j = 0; j < COLUMNAS; j++) {  
            printf("%d  ", matriz[i][j]); 
        }
        printf("\n");
    }

    printf("\n"); // Espacio entre matrices

    // mayor a menor
    printf("Matriz en orden de mayor a menor:\n");
    for (int i = FILAS - 1; i >= 0; i--) { 
        for (int j = COLUMNAS - 1; j >= 0; j--) {  
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}

