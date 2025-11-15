#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ActualizarGanadas(int* p);
void InicializarMapa(char mapa[3][3]);
void MostrarMapa(char mapa[3][3]);
void MovimientoMaquina(char mapa[3][3]);
void MovimientoJugador(char mapa[3][3]);
int ComprobarGanador(char mapa[3][3]);
void Juego();

void ActualizarGanadas(int* p) {
    (*p)++;
}
void InicializarMapa(char mapa[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            mapa[i][j] = '-';
        }
    }
}
void MostrarMapa(char mapa[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", mapa[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void MovimientoMaquina(char mapa[3][3]) {
    int fila, columna;

    do {
        fila = rand() % 3;
        columna = rand() % 3;
    } while (mapa[fila][columna] != '-');

    mapa[fila][columna] = 'O';
    printf("Movimiento de la máquina: fila %d, columna %d\n", fila, columna);
}
void MovimientoJugador(char mapa[3][3]) {
    int fila, columna;

    printf("Introduce tus coordenadas (fila y columna de 0 a 2):\n");

    do {
        scanf_s("%d %d", &fila, &columna);

        if (fila < 0 || fila > 2 || columna < 0 || columna > 2) {
            printf("Coordenadas fuera de rango. Intenta de nuevo:\n");
            continue;
        }
        if (mapa[fila][columna] != '-') {
            printf("Esa casilla ya está ocupada. Intenta de nuevo:\n");
        }
    } while (fila < 0 || fila > 2 || columna < 0 || columna > 2 || mapa[fila][columna] != '-');

    mapa[fila][columna] = 'X';
    printf("Movimiento del jugador: fila %d, columna %d\n", fila, columna);
}
int ComprobarGanador(char mapa[3][3]) {
    // Comprobar filas
    for (int i = 0; i < 3; i++) {
        if (mapa[i][0] != '-' && mapa[i][0] == mapa[i][1] && mapa[i][1] == mapa[i][2]) {
            if (mapa[i][0] == 'X') {
                return 1; // gana jugador
            }
            else {
                return 2; // gana máquina
            }
        }
    }

    // Comprobar columnas
    for (int i = 0; i < 3; i++) {
        if (mapa[0][i] != '-' && mapa[0][i] == mapa[1][i] && mapa[1][i] == mapa[2][i]) {
            if (mapa[0][i] == 'X') {
                return 1; // gana jugador
            }
            else {
                return 2; // gana máquina
            }
        }
    }

    // Comprobar diagonales
    if (mapa[0][0] != '-' && mapa[0][0] == mapa[1][1] && mapa[1][1] == mapa[2][2]) {
        if (mapa[0][0] == 'X') {
            return 1;
        }
        else {
            return 2;
        }
    }
    if (mapa[2][0] != '-' && mapa[2][0] == mapa[1][1] && mapa[1][1] == mapa[0][2]) {
        if (mapa[2][0] == 'X') {
            return 1;
        }
        else {
            return 2;
        }
    }

    // Comprobar si quedan espacios libres
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (mapa[i][j] == '-') {
                return 0; // sigue la partida
            }
        }
    }

    return 3; // empate
}
void Juego() {
    int ganadas = 0, perdidas = 0;
    int* pGanadas = &ganadas;
    char continuar;

    do {
        char mapa[3][3];
        InicializarMapa(mapa);
        int resultado = 0;

        while (resultado == 0) {
            // Turno jugador
            MovimientoJugador(mapa);
            MostrarMapa(mapa);
            resultado = ComprobarGanador(mapa);
            if (resultado != 0) break;

            // Turno máquina
            MovimientoMaquina(mapa);
            MostrarMapa(mapa);
            resultado = ComprobarGanador(mapa);
        }

        if (resultado == 1) {
            printf("Has ganado!!\n");
            ActualizarGanadas(pGanadas);
        }
        else if (resultado == 2) {
            printf("Has perdido.\n");
            perdidas++;
        }
        else if (resultado == 3) {
            printf("Empate.\n");
        }

        printf("Quieres jugar otra partida? (s/n): ");
        scanf_s(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("\nHistorial\n");
    printf("Ganadas: %d\n", ganadas);
    printf("Perdidas: %d\n", perdidas);
}

int main() {
    
    srand(time(NULL));

    Juego();
    return 0;
}
