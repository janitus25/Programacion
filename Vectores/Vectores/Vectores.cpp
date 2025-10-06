/*
#include <stdio.h>

//El modulo de un vector es para saber la direccion de un vector.
//Contenedor o bolsa que almacena datos

int main() {
	int vector1[3] = { 12,3,4 };
	int vector2[3] = { 3,1,6 };
	int resultado = 0;

	for (int i = 0; i < 3; i++) {
		resultado = (vector1[i] * vector2[i])+resultado;
	}
	printf("El resultado es: %d", resultado);

}
*/

/*
//Ejercicio 2 arrays

#include <stdio.h>

int main() {
	int v1[10]{3,5,7,8,1,4,7,8,6,10};
	int v2[10]{5,47,7,10,5,8,8,6,11};
	int v3[10];

	printf("El resultado del vector de v3 es:\n");
	for (int i = 0; i < 10; i++) {
		v3[i] = v1[i] + v2[i];
		printf("El resultado de la posicion %d es: %d\n",i, v3[i]);
	}
}
*/

/*
//Ejercicio 3 arrays
#include <stdio.h>

int main() {

	int v1[6]{5,4,7,8,6,3};
	int temp;

	for (int i = 0; i < 3; i++) { //i < 3, en cada iteración intercambia dos posiciones simétricas, osea que necesitamos la mitad de 6:
		temp = v1[i];
		v1[i] = v1[5 - i];
		v1[5 - i] = temp;
	}

	//printf("El resultado es: %d\n", v1[i]);

}
*/
/*
//Ejercicio 4
#include <stdio.h>

int main() {
	int vector[6];
	int valorMax;
	int valorMin;

	for (int i = 0; i < 5; i++) {
		printf("Introduce los numeros a guardar en el vector: ");
		scanf_s("%d", &vector[i]);
	}

	valorMax = vector[0];
	valorMin = vector[0];

	for (int i = 0; i < 5; i++) {
		
		if (vector[i] < valorMax) {
			valorMax = vector[i];
		}

		if (vector[i] > valorMin) {
			valorMin = vector[i];
		}
	}

	printf("Valor min: %d\n", valorMax);
	printf("Valor max: %d\n", valorMin);

	vector[5] = valorMax + valorMin;
	
	for (int i = 0; i < 6; i++) {
		printf("%d\n", vector[i]);
	}

}
*/

//Ejercicio 5

#include <stdio.h>

int main() {

	int v1[3];
	int resultado;


	for (int i = 0; i < 3; i++) {
		printf("Introduce los valores: ");
		scanf_s("%d", &v1[i]);

		if (v1[i] > 5) {
			resultado = 0;
		}
	}

	printf("El resultado es: %d", resultado);


}