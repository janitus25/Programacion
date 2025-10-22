#include <stdio.h>
#include <stdlib.h> //para la generación de numeros aleatorios (rand y srand).
#include <time.h>

#define Amplitud 10
int main() {

    srand(time(NULL)); //inicializamos el generador de numeros aleatorios
    char mapa[Amplitud][Amplitud];
    int barcos[Amplitud][Amplitud] = { 0 }; //0 vacio, 1 barco
    int fila, col;
    int vidas = 9;
    int intentos = 0;

    printf("Vamos a jugar al tocado y hundudo, este sera el mapa en el que jugaremos: \n");

    //Mostramos el mapa
    for (int i = 0; i < Amplitud; i++) {
        for (int j = 0; j < Amplitud; j++) {
            mapa[i][j] = '-';
            printf(" %c ", mapa[i][j]);
        }
        printf("\n");
    }

    for (int b = 0; b < 3; b++) {
        int f = rand() % (Amplitud - 2);    //f=fila amplitud-2 pqra que no se salga del tablero
        int c = rand() % (Amplitud - 2);    //c=columna
        int direccion = rand() % 4;               //dir=direccion

        
        //Colocamos los barcos en el array
        for (int i = 0; i < 3; i++) {
            if (direccion == 0) barcos[f][c + i] = 1;       // Horizontal
            else if (direccion == 1) barcos[f + i][c] = 1;  // Vertical
            else if (direccion == 2) barcos[f + i][c + i] = 1;    // diagonal fila y columna aumentan, la nave desciende de izquierda a derecha
            else barcos[f + i][c + 2 - i] = 1;             // Diagonal fila aumenta, columna disminuye
            // La columna (c + 2 - i) empieza en c+2 y va restando el avance de la fila (i), lo que la hace retroceder diagonalmente.
        }
    }

    printf("Bienvenido al juego TOCADO Y HUNDIDO: \n");
    printf("Introduce la posicion que quieras, para conseguir tumbar los barcos: \n");

    while (vidas > 0) {
        printf("\nFila: ");
        scanf_s("%d", &fila);
        printf("Columna: ");
        scanf_s("%d", &col);

        if (fila < 0 || fila > 9 || col < 0 || col > 9) {
            printf("Fuera del mapa.\n");
            continue; //si entra aquí, saltamos a la siguiente instución
        }

        intentos++;

        if (mapa[fila][col] == 'X' || mapa[fila][col] == 'O') {
            printf("Ya habías disparado ahí.\n");
        }
        else if (barcos[fila][col] == 1) {
            printf("TOCADO!!!!\n");
            mapa[fila][col] = 'X';
            barcos[fila][col] = 0;
            vidas--;
        }
        else {
            printf(" Agua\n");
            mapa[fila][col] = 'O';
        }

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                printf(" %c ", mapa[i][j]);
            }
            printf("\n");
        }

        printf("Intentos: %d y Posiciones restantes: %d\n", intentos, vidas);
    }

    printf("\n Has hundido las naves en %d intentos\n", intentos);
}
