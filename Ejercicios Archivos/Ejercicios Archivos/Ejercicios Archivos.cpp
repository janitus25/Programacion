#include <stdio.h>
#include <stdlib.h>

void IngresarValor(int value, FILE *fl);
int AdivinarValor(int secretNum, int value, int* intentos);
int AugmentarIntentos(int* intentos);
void Gestor(FILE *f1, FILE *f2);

int main() {

	FILE* archivo1;
	FILE* archivo2;

	errno_t err = fopen_s(&archivo1, "textos/numeroSecreto.txt", "w+");
	errno_t err2 = fopen_s(&archivo2, "textos/logs.txt", "w+");

	if (err||err2) {
		printf("Error\n");
		return 0;
	}

	else {
		Gestor(archivo1, archivo2);
	}

	fclose(archivo1);
	fclose(archivo2);
	return 0;
}

void IngresarValor(int value, FILE* fl) {
	fprintf(fl, "%d\n", value);
}

int AdivinarValor(int secretNum, int value, int* intentos) {
	
	if (secretNum == value) {
		printf("Lo has adivinado con %d intentos\n", *intentos);
		printf("El numero secreto era: %d \nYa era hora de acertarlo\n", secretNum);
		return 1;
	}

	return 0;
}

int AugmentarIntentos(int* intentos) {
	return *intentos = *intentos + 1;
}

void Gestor(FILE* f1, FILE* f2) {
	
	int value=0;
	int valueJ2=0;
	int numeroIntentos = 0;
	int flag = 0;//Creamos flag para salir del bucle

	printf("Dime jugador 1: El numero secreto:\n");
	scanf_s("%d", &value);
	system("cls");

	while (flag==0)
	{
		IngresarValor(value, f1);

		printf("Dime jugador 2: Intenta adivinar\n");
		scanf_s("%d", &valueJ2);
		system("cls");

		if (AdivinarValor(value, valueJ2, &numeroIntentos)) {
			IngresarValor(valueJ2, f2);
			flag = 1;
			return;
		}

		else {
			int intentos = AugmentarIntentos(&numeroIntentos);
			printf("Llevas %d intentos\n", intentos);
			IngresarValor(valueJ2, f2);
		}
	}
	
}