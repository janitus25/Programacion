/*
//Ejercicio 1
#include <stdio.h>

int main() {
	
	for (int i = 0; i <= 100; i=i+5) {
		printf("Los numeros multiplos de 5 del 0 al 100, son: %d\n", i);
	}
	return 0;
}
*/
/*
//Ejercicio 2
#include <stdio.h>

int main() {
	int numeros=0;

	while (numeros<=100) {
		printf("Los multiplos de 5 del 0 al 100 son: %d\n", numeros);
		numeros = numeros + 5;
	}
	return 0;
}
*/
/*
//Ejercicio 3
#include <stdio.h>

int main() {
	int numeros=0;

	do
	{
		printf("Los multiplos de 5 del 0 al 100 son: %d\n", numeros);
		numeros = numeros + 5;
	} 
	while (numeros <= 100);
	return 0;
}
*/
/*
//Ejercicio 4

#include <stdio.h>

int main() {

	for (int i = 320; i >= 160; i = i - 20) {
		printf("Los numeros del 320 al 160 de 20 en 20 son: %d\n", i);
	}
	return 0;
}
*/

/*
//Ejercicio 5

#include <stdio.h>

int main() {
	int numeros=320;

	while (numeros>=160)
	{
		printf("%d\n", numeros);
		numeros = numeros - 20;
	}
	return 0;
}
*/
/*
//Ejercicio 6
#include <stdio.h>

int main() {
	int numeros = 320;

	do
	{
		printf("%d\n", numeros);
		numeros = numeros - 20;
	} while (numeros>=160);

	return 0;
}
*/

/*
//Ejericio 7

#include <stdio.h>
int main() {

	int numeroSecreto = 1234;
	int numero;

	do
	{
		printf("Introduce la combinacion de la caja fuerte: ");
		scanf_s("%d", &numero);

		if (numero == numeroSecreto) {
			printf("La caja fuerte se ha abierto satisfactoriamente");
		}

		else {
			printf("Lo siento, esa no es la combinacion\n");
		}

	} while (numero!=numeroSecreto);

	return 0;
}
*/

/*
//Ejercicio 8
#include <stdio.h>
int main() {

	int numeroSecreto = 1234;
	int numero;
	int intentos = 4;

	do
	{
		printf("Introduce la combinacion de la caja fuerte: ");
		scanf_s("%d", &numero);

		if (numero == numeroSecreto) {
			printf("La caja fuerte se ha abierto satisfactoriamente");
		}

		else {
			printf("Lo siento, esa no es la combinacion\n");
			intentos--;
			printf("Te quedan: %d intentos\n", intentos);

			if (intentos == 0) {
				printf("BOOM");
				return 0;
			}
		}

	} while (numero != numeroSecreto);

	return 0;
}
*/

/*
//Ejercicio 9

#include <stdio.h>

int main() {

	int numero;
	int contador=1;

	printf("Introduce un numero para saber los digitos que tiene: ");
	scanf_s("%d", &numero);

	if (numero == 0) {
		printf("El numero tiene 1 digito.\n");
		return 0;
	}

	do {
		if (numero < 10) {
			break;
		}

		else if (numero >= 10) {
			numero = numero / 10;
			contador++;
		}
		}
	while (numero > 9);

	printf("Ese numero tiene %d digitos", contador);
	return 0;
}
*/

/*
//Ejercicio 10
#include <stdio.h>

int main() {
	int numero;

	printf("Introduce un numero para saber si es primo o no: ");
	scanf_s("%d", &numero);

	if (numero <= 1) {
		printf("Numero no primo");
		return 0;
	}

	for (int i = 2; i < numero; i++) { //Comprueba los divisores de 1 en 1 
		if (numero % i == 0) {
			printf("Numero no primo");
			return 0;
		}
	}
	printf("Numero primo");
	return 0;
}
*/