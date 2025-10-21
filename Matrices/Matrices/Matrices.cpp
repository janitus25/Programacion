/*
#include <stdio.h>

int main() {
	
	int v1[3][3];

	//Estos 2 for son la iteracion de la matriz
	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {
			scanf_s("%d", &v1[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {
			v1[i][j] = v1[i][j] * 2;
			printf(" %d ", v1[i][j]);
		}
		printf("\n");
	}
}
*/
/*
#include <stdio.h>

int main() {
	int a[4][3];
	int b[4][3];
	int s[4][3];

	printf("Introduce los datos de la primera matriz: \n");
	for (int i = 0; i < 4; i++) {

		for (int j = 0; j < 3; j++) {
			scanf_s("%d", &a[i][j]);
		}
	}

	printf("Introduce los datos de la segunda matriz: \n");
	for (int i = 0; i < 4; i++) {

		for (int j = 0; j < 3; j++) {
			scanf_s("%d", &b[i][j]);
		}
	}

	printf("Ahora vamos a hacer la suma de las 2 matrices: \n");
	for (int i = 0; i < 4; i++) {

		for (int j = 0; j < 3; j++) {
			s[i][j] = a[i][j] + b[i][j];
			printf(" %d ", s[i][j]);
		}

		printf("\n");
	}
}
*/
/*
#include <stdio.h>

int main() {
	int matrix[3][3] = { {49,0,1},
							{0,48,2},
							{1,2,47} };

	int total = 0;
	int sumaDiagonal = 0;

	for (int i = 0; i < 3; i++) {
		
		for (int j = 0; j < 3; j++) {
			total += matrix[i][j];
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}


	for (int i = 0; i < 3; i++) {
		sumaDiagonal += matrix[i][i];
	}

	printf("La suma es: %d de %d", sumaDiagonal, total);
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main() {

	char mapa[10][10];
	int posX=0;
	int posY=0;
	
	
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			mapa[i][j] = '-';
		}
	}

	while (posX != 99) { //Esto se va a repetir mientras el valor no sea 99

		printf("Que posicion quieres posicionar la X?");
		scanf_s("%d %d", &posX, &posY);
		system("cls");

		mapa[posX][posY] = 'x';

		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				printf(" %c ", mapa[i][j]);
			}
			printf("\n");
		}
	}
	
}
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

	srand(1);
	char mapa[3][3];
	int posJugador[2];
	int posMaquina[2];
	int terminarJuegoMaquina = 0;
	int terminarJuegoJugador = 0;
	int intentos = 9;


	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {
			mapa[i][j] = '-';
		}
	}


	do {

		do {
			printf("Introduce la posicion en la que quieres aparecer: \n");
			for (int i = 0; i < 2; i++) {
				posMaquina[i] = rand() % 3; //Esto generara un valor aleatorio entre 0,1,2;
			}
		} while (mapa[posMaquina[0]] [posMaquina[1]] !='-');
		mapa[posMaquina[0]][posMaquina[1]] = 'O';
		intentos--;

		do {
			printf("Introduce la posicion en la que quieres aparecer: \n");
			for (int i = 0; i < 2; i++) {
				posMaquina[i] = rand() % 3; //Esto generara un valor aleatorio entre 0,1,2;
			}
		} while (mapa[posMaquina[0]] [posMaquina[1]] !='-');
		
		mapa[posJugador[0]][posJugador[1]] = 'X';

		for (int i = 0; i < 3; i++) {

			for (int j = 0; j < 3; j++) {
				printf("%c", mapa[i][j]);
			}
			printf("\n");
		}

		//Seccion condicionales

		for (int i = 0; i < 3; i++) {

			if (mapa[i][0] == 'X' && mapa[i][1] == 'X' && mapa[i][2] == 'X') {
				terminarJuegoJugador = true;
			}

			else if (mapa[i][0] == 'O' && mapa[i][1] == 'O' && mapa[i][2] == 'O') {
				terminarJuegoMaquina = true;
			}

		}

		for (int i = 0; i < 3; i++) {

			if (mapa[0][i] == 'X' && mapa[1][i] == 'X' && mapa[2][i] == 'X') {
				terminarJuegoJugador = true;
			}

			else if (mapa[0][i] == 'O' && mapa[1][i] == 'O' && mapa[2][i] == 'O') {
				terminarJuegoMaquina = true;
			}

		}

		if (mapa[0][0] == 'X' && mapa[1][1] == 'X' && mapa[2][2] == 'X') {
			terminarJuegoJugador = true;
		}

		else if (mapa[0][0] == 'O' && mapa[1][1] == 'O' && mapa[2][2] == 'O') {
			terminarJuegoMaquina = true;
		}

		else if (mapa[2][0] == 'X' && mapa[1][1] == 'X' && mapa[0][2] == 'X') {
			terminarJuegoJugador = true;
		}

		else if (mapa[2][0] == 'O' && mapa[1][1] == 'O' && mapa[0][2] == 'O') {
			terminarJuegoMaquina = true;
		}

	} while (terminarJuegoMaquina == false && terminarJuegoJugador == false && intentos > 0);

	if (terminarJuegoJugador == true) {
		printf("Has ganado");
	}

	else if (terminarJuegoMaquina == true) {
		printf("Has perdido");
	}

	else {
		printf("Empate\n");
	}
}