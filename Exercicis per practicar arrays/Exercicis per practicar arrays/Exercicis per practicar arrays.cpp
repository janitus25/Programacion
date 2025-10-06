/*

#include <stdio.h>
//Suma del array
int main() {

	int v1[5]{1,2,3,4,5};
	int resultado=0;

	for (int i = 0; i < 5; i++) {
		resultado += v1[i];
	}
	printf("El resultado es: %d", resultado);

}
*/

/*
//Ejercicio 2
#include <stdio.h>

int main() {
	int v1[5]{ 3, 5, 7, 2, 8 };
	int max=0;
	int min=0;

	for (int i = 0; i < 5;i++) {
		if (v1[i] > max) {
			max=v1[i];
		}

		else if (v1[i] > min) {
			min = v1[i];
		}

	}
	printf("El resultado max es: %d, el minimo es: %d", max, min);
}
*/
/*
//Ejercicio 3

#include <stdio.h>

int main() {
	
	int v1[5] = { 1, 2, 3, 4, 5 };
	int resultado = 0;

	for (int i = 0; i < 2; i++) {
		resultado = v1[i];
		v1[i] += 4 - 1;

	}


}
*/

/**
//Ejercicio 5

#include <stdio.h>

int main() {
	int v1[4] = { 4,5,6,8 };
	int suma = 0;

	for (int i = 0; i < 4; i++) {
		suma += v1[i];
	}
	suma = suma / 4;
	printf("El resultado es: %d", suma);
}
/
/*
//Ejercicio Media ponderada

#include <stdio.h>

int main() {
	int notas[4] = { 5,6,2,8 };
	int pesos[4] = {6,3,12,6};
	float resultado=0;
	int totalpesos = 0;

	for (int i = 0; i < 4; i++) {
		resultado += notas[i] * pesos[i];
		totalpesos += pesos[i];
	}

	resultado = resultado / totalpesos;
	printf("El resultado es: %.2f", resultado);
}
*/

#include <stdio.h>

int main() {
	int arr1[3]= { 1, 2, 3 };
	int arr2[3]= { 4, 5, 6 };
	int resultado[3];

	for (int i = 0; i < 3; i++) {
		resultado[i] = arr1[i] + arr2[i];
		printf("%d\n", resultado[i]);
	}
	
}