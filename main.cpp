#include <iostream> 
#include <windows.h>

using namespace std;

#define FILAS 3
#define COLUMNAS 3  

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    int matriz[FILAS][COLUMNAS];
    int num = 1; 

    system("cls");

    // De menor a mayor)
    for (int i = 0; i < FILAS; i++) { 
        for (int j = 0; j < COLUMNAS; j++) {  
            matriz[i][j] = num++;
        }
    }

    // normal
    cout << "Matriz en orden de menor a mayor:" << endl;
    for (int i = 0; i < FILAS; i++) { 
        for (int j = 0; j < COLUMNAS; j++) {  
            cout << matriz[i][j] << "  ";
        }
        cout << endl;
    }

    cout << endl; // Espacio entre matrices

    // De mayor a menor
    cout << "Matriz en orden de mayor a menor:" << endl;
    for (int i = FILAS - 1; i >= 0; i--) { 
        for (int j = COLUMNAS - 1; j >= 0; j--) {  
            cout << matriz[i][j] << "  ";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}


