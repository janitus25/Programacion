/*
//Ejercicio 1
#include <stdio.h>

int main() {
	int v1[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,33,16,17,18,19,20};
	int suma = 0;
	int mayor = v1[0];
	int pos = 0;

	for (int i = 0; i < 20; i++) {
		suma += v1[i];
	}
	printf("La suma de todos los numeros es de: %d\n", suma);

	for (int i = 0; i < 20; i++) {
		if (v1[i] > mayor) {
			mayor = v1[i];
			pos = i;
		}
	}

	printf("El numero mayor es: %d y su posicion es: %d\n", mayor, pos);
}
*/

/*
//Ejercicio 2
#include <stdio.h>

int main() {
	int v1[12] = {2,7,4,9,3,9,12,5,4,1,2,6};
	int v2[12];
	int v3[12];
	

	printf("Este es el array antes de ser invertido: \n");
	for (int i = 0; i < 12; i++) {
		printf("%d\n", v1[i]);
	}

	//Cambiar posiciones
	printf("Ahora invertiremos el Array: \n");
	for (int i = 0; i < 12;i++) {
		v2[i] = v1[11 - i]; //Invertir el Array asi es mas facil
		printf("%d\n", v2[i]);
	}
	
	printf("\nEsto ahora, cambiara los numeros mayores que 5 por -1\n");
	//Copia cambiando los numeros mayores que 5 por -1
	for (int i = 0; i < 12; i++) {
		if (v1[i] > 5) {
			v3[i] = -1;
			printf("%d\n", v3[i]);
		}

		else {
			v3[i] = v1[i];
			printf("%d\n", v3[i]);
		}
	}


}
*/

/*
//Ejercicio 3
#include <stdio.h>

int main(){
	int v1[3];
	int v2[3];
	int resultado=0;

	printf("Introduce los valores del primer vector:\n");
	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &v1[i]);
	}
	printf("Introduce los valores del segundo vector:\n");
	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &v2[i]);
	}

	for (int i = 0; i < 3; i++) {
		resultado += (v1[i] * v2[i]);
	}
	
	printf("El resultado del producto escalar entre estos 2 vectores, es de: %d", resultado);
}
*/

/*
//Ejercicio 4
#include <stdio.h>

int main() {
	int v1[10] = {10,8,9,4,5,6,7,8,9,40};
	int v2[10] = {2,4,6,8,10,12,14,16,18,20};
	int v3[10];


	for (int i = 0; i < 10; i++) {
		if (v1[i] > v2[i]) {
			v3[i] = v1[i] + v2[i];
		}

		else {
			v3[i] = v1[i] - v2[i];
		}
		printf("%d\n", v3[i]);

	}
}
*/

/*
//Ejercicio 5

#include <stdio.h>

int main() {
	int v1[6];
	int menor;
	int mayor;	
	
	printf("Introduce los valores correspondientes a cada elemento: \n");
	
	scanf_s("%d", &v1[0]);
	menor = v1[0];
	mayor = v1[0];

	for (int i = 1; i < 5; i++) {
		scanf_s("%d", &v1[i]);

		if (v1[i] < menor) {
			menor = v1[i];
		}
		else if (v1[i] > mayor) {
			mayor = v1[i];
		}
	}

	v1[5] = menor + mayor;
	
	printf("El valor menor es: %d\n", menor);
	printf("El valor mayor es: %d\n", mayor);
	printf("Suma (añadida al final del vector): %d\n", v1[5]);

	printf("\n");
	printf("Vector final:\n");
	for (int i = 0; i < 6; i++) {
		printf("%d ", v1[i]);
	}

	printf("\n");
}
*/

/*
//Ejercicio 6

#include <stdio.h>

int main() {
	int v1[4];

	printf("Introduce los valores: \n");
	for (int i = 0; i < 4; i++) {
		scanf_s("%d", &v1[i]);

		if (v1[i] > 10) {
			v1[i] = v1[i] * 2;
		}
	}

	printf("El vector final es: \n");

	for (int i = 0; i < 4; i++) {
		printf("%d\n", v1[i]);
	}
}
*/

/*
//Ejercicio 7
#include <stdio.h>

int main() {
	int v1[6]={1,2,3,4,5,6};
	int temp = 0;
	int pares = 0;

	printf("Este es el array antes de invertirlo: \n");
	for (int i = 0; i < 6; i++) {
		printf("%d\n", v1[i]);
	}

	//Cambiamos el orden
	for (int i = 0; i < 3; i++) {
		temp = v1[i];
		v1[i] = v1[5 - i];
		v1[5 - i] = temp;
	}

	printf("Este es el array despues de invertirlo: \n");
	for (int i = 0; i < 6; i++) {
		printf("%d\n", v1[i]);

		if (v1[i] % 2 == 0) {
			pares++;
		}
	}

	printf("El numero de pares es de: %d", pares);
}
*/