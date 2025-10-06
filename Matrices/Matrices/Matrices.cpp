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