#include <stdio.h>
#include <stdlib.h>

#define Amplitud 10
int main() {

	char mapa[Amplitud][Amplitud];
	int posBarco[Amplitud][Amplitud] = { 0 }; //0 vacio, 1 barco
	int posJugador[2];
	int vidasBarco = 9;
	int intentos = 0;
	
	printf("Vamos a jugar al tocado y hundudo, este sera el mapa en el que jugaremos: \n");
	
	//Aqui imprimimos el campo
	for (int i = 0; i < Amplitud; i++) {
		
		for (int j = 0; j < Amplitud; j++) {
			mapa[i][j] = '-';
			printf(" %c ", mapa[i][j]);
		}
		printf("\n");
	}

	int fila = rand() % 10;
	int col = rand() % 10;
	int orientacion = rand() % 4;


	printf("Introduce la posicion que quieras, para conseguir tumbar los barcos: \n");
	do {
		for (int i = 0; i < Amplitud; i++) {
			scanf_s("%d", &posJugador[i]);
		}

	} while (vidasBarco==0);
	
	//printf("\nPara poder tumbar todos los barcos has realizado: %d intentos", intentos);
}