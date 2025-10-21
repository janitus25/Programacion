/*
#include <stdio.h>
#include <string.h>
int main() {

	char sentencia[100];

	printf("Dame una frase: ");
	gets_s(sentencia);

	for (int i = 0; i <= strlen(sentencia)-1; i++) {
		printf("_%c_", sentencia[i]);
	}
}
*/
/*
//Ejercicio 2

#include <stdio.h>
#include <string.h>

int main() {
	char sentencia[100];
	int contador = 0;

	printf("Dame una frase: ");
	gets_s(sentencia);
	printf("%s\n", sentencia);

	for (int i = 0; i <= strlen(sentencia) - 1; i++) {
		if ((sentencia[i] == 'l' || sentencia[i] == 'L') && (sentencia[i + 1] == 'a' || sentencia[i + 1] == 'A')){
			contador++;
		}
	}

	printf("El resultado de los la es: %d", contador);
}
*/
/*
#include <stdio.h>
#include <string.h>

int main() {
	char sentencia[100];
	int contador = 0;

	printf("Dame una frase: ");
	gets_s(sentencia);
	printf("%s\n", sentencia);
	printf("%c", sentencia[0]);

	for (int i = 1; i <= strlen(sentencia) - 1; i++) {
		if (sentencia[i] == ' '); {
			printf("%c", sentencia[i + 1]);
		}
	}
}
*/
/*
//Repaso dia 14/10/2025
//Que es un array: Almacén que esta seqüencialmente en memoria, eso quiere decir que podemos pasar de celda en celda.

#include <stdio.h>
#define SIZE 2
int main() {

	const int multiplicador = 2;
	const int divisor = 3;
	float array[SIZE];

	printf("Introduce valores: \n");

	for (int i = 0; i < SIZE; i++) {
		scanf_s("%f", &array[i]);
		array[i] *= multiplicador;
		array[i] /= divisor;
	}

	for (int i = 0; i < SIZE; i++) {
		printf("%.2f ", array[i]);
	}
}
*/
/* Este codigo nos sirve para cambiar los numeros y multiplicarlos
#include <stdio.h>

int main() {

	int v1[10]{1,2,3,4,5,6,7,8,9,9};
	int v2[10];
	int resultado[10];

	printf("Este es el array antes de ser invertido: \n");
	for (int i = 0; i < 10; i++) {
		printf("%d\n", v1[i]);
	}

	printf("Ahora invertiremos el Array: \n");
	for (int i = 0; i < 10; i++) {
		v2[i] = v1[9 - i];	
		printf("%d\n", v2[i]);
	}

	for (int i = 0; i < 10; i++) {
		resultado[i] = v1[i] * v2[i];
		printf("El resultado es: %d\n", resultado[i]);
	}
}

*/
/*
#include <stdio.h>

int main() {
	
	int matriz1[5][5];
	int d1 = 0;
	int d2 = 3;

	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < 5; j++) {
			scanf_s("%d",& matriz1[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < 5; j++) {
			d1 *= matriz1[i][j];
		}
		printf("\n");
	}

	for (int i = 5; i < 0; i++) {

		for (int j = 5; j < 0; j++) {
			d2 *= matriz1[i][j];
		}
		printf("\n");
	}
}
*/

#include <stdio.h>
int main() {

	int v1[4];

	printf("introduce numeros, pueden ser tanto positivos como negativos: \n");
	for (int i = 0; i < 4; i++) {
		scanf_s("%d", &v1[i]);
		if (v1[i] < 0) {
			v1[i] = v1[i] * -1;
		}
	}
	for (int i = 0; i < 4; i++) {
		printf(" %d", v1[i]);
	}

	int menor = v1[0];
	int mayor = v1[0];

	for (int i = 0; i < 3; i++) {
		if (menor > v1[i]) {
			menor = v1[i];
		}

		else if (mayor < v1[i]) {
			mayor = v1[i];
		}
	}
		printf("\nEl valor menor es: %d y el valor mayor es: %d ",menor,mayor);
}