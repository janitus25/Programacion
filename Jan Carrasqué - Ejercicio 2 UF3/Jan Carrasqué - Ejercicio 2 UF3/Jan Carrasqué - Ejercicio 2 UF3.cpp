//Ejercicio 1
/*
#include <stdio.h>
#include <stdlib.h>

#define FILAS 4
#define COLS 3

void LimpiarArray(int a[FILAS][COLS]);
void ImprimeArray(int a[FILAS][COLS]);
int RellenarArray(int a[FILAS][COLS], int* n);

int main() {

	int arr[FILAS][COLS];
	int contador = 0;
	FILE* Menores5;
	errno_t err;

	LimpiarArray(arr);
	ImprimeArray(arr);

	RellenarArray(arr, &contador);

	err = fopen_s(&Menores5, "Archivos/menoresdecinco.txt", "a+");

	if (err) {
		printf("Error al abrir el archivo\n");
	}

	else {
		fprintf_s(Menores5, "\nTotal menores o igual a 5: %d\n", contador);
		fclose(Menores5);
		printf("\nMenores de 5 guardados en el fichero menoresdecinco.txt correctamente.\n");
	}
	
	return 0;
}

void LimpiarArray(int a[FILAS][COLS]) {
	printf("Vamos a limpiar el array a 0: \n");
	for (int i = 0; i < FILAS; i++) {
		for (int j = 0; j < COLS; j++) {
			a[i][j] = 0;
		}
	}
}
void ImprimeArray(int a[FILAS][COLS]) {
	for (int i = 0; i < FILAS; i++) {
		for (int j = 0; j < COLS; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
int RellenarArray(int a[FILAS][COLS], int* n) {
	
	*n = 0;

	printf("\nIntroduce los valores para rellenar el array: \n");

	for (int i = 0; i < FILAS; i++) {
		for (int j = 0; j < COLS; j++) {
			scanf_s("%d", &a[i][j]);

			if (a[i][j] <= 5) {
				*n = *n + 1;
			}
		}
	}

	printf("\nEste es el array del usuario: \n");
	ImprimeArray(a);
	printf("Total de numeros menores o iguales a 5: %d\n", *n);
	
	return *n;
}
*/

//Ejercicio 2
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Maquina();
int Jugador();
void Rondas(int mMaquina, int mJugador, int ronda);
void Resultados(int aciertos, int errores);

int main() {

	int i = 0;
	srand(time(NULL));
	int ganadosMaquina = 0;
	int ganadosJugador = 0;
	char continuar;

	printf("Vamos a jugar al cara o cruz, empieza la maquina.\n\n");
	
	do{
		int moneda = Maquina();
		int monedaJugador = Jugador();
		
		i++;

		if (monedaJugador == moneda) {
			printf("Acertaste! La moneda ha sido: %d\n\n", moneda);
			ganadosJugador++;
			
		}

		else {
			ganadosMaquina++;
			printf("Fallaste... La moneda ha sido: %d\n\n", moneda);
		}

		printf("Quieres intentar otra vez? (s/n): ");
		scanf_s(" %c", &continuar, 1);
		printf("\n");
		Rondas(moneda, monedaJugador, i);

	} while (continuar=='s'|| continuar=='S');

	Resultados(ganadosJugador, ganadosMaquina);
	printf("\nGracias por jugar. Revisa datos.txt para ver tus estadisticas.\n");
	
	return 0;

}

int Maquina() {
	return rand() % 2;
}

int Jugador() {
	
	int movimiento = 5;

	while (movimiento !=0 && movimiento !=1){

		printf("Adivina: Cara (0) o Cruz (1): ");
		scanf_s("%d", &movimiento);

		if (movimiento != 0 && movimiento != 1) {
			printf("Por favor, introduce solo 0 o 1.\n");
		}
	}
	
	return movimiento;
}


void Rondas(int mMaquina, int mJugador, int ronda) {
	
	FILE* Fichero;
	errno_t err;

	err = fopen_s(&Fichero, "Archivos/datos.txt", "a+");

	if (err) {
		printf("Error al abrir el archivo\n");
	}

	else {
		fprintf_s(Fichero, "RONDA %d:\n", ronda);
		fprintf_s(Fichero, "Maquina: %d  ", mMaquina);
		fprintf_s(Fichero, "Eleccion jugador: %d\n\n", mJugador);
		fclose(Fichero);
	}

}

void Resultados(int aciertos, int errores) {

	FILE* Fichero;
	errno_t err;

	err = fopen_s(&Fichero, "Archivos/datos.txt", "a+");

	if (err) {
		printf("Error al abrir el archivo\n");
	}

	else {
		fprintf_s(Fichero, "\nRESULTADO FINAL:\n");
		fprintf_s(Fichero, "Aciertos: %d\n", aciertos);
		fprintf_s(Fichero, "Errores: %d\n\n", errores);
		fprintf_s(Fichero, "\nNUEVA PARTIDA:\n");
		fclose(Fichero);
	}
	
}
*/