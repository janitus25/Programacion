/*
//Ejercicio 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 101  //Dejo el espacio de 1 mas, para el 0 del final

int main() {

	char palabra[MAX];
	char reves[MAX];
		
	printf("Introduce la frase que quieras: ");
	gets_s(palabra, MAX);
	printf("La frase que has escrito es: %s", palabra);

	printf("\n");

	printf("La frase que has escrito al reves es: ");

	int tam = strlen(palabra); //Esto me sirve para medir la palabra
	int j = 0; //Esto me sirve de variable temp
	
	for (int i = tam - 1; i >= 0; i--) { // Uso tam-1 para que no coja el 0 del final
		reves[j] = palabra[i];
		printf("%c", reves[j]);
		j++;
	}
	reves[j] = '\0'; //Pongo esto para añadir directamente el 0 final y que no haya problemas, sin esto el codigo no funcinaria

	if (strcmp(palabra, reves) == 0) {
		printf("\nLa palabra es Palindroma");
	}

	else {
		printf("\nLa palabra no es palindroma");
	}
}
*/
/*
//Ejercicio 2

#include <stdio.h>
#include <string.h>

#define tamano 151
int main() {
	
	char frase[tamano];
	int a=0, e=0, iI=0, o=0, u=0;

	printf("Introduce una frase para determinar la cantidad de vocales que tiene: \n");
	gets_s(frase, tamano);

	int tamanioFrase = strlen(frase);
	printf("La frase es de tamano: %d\n", tamanioFrase);

	for (int i = 0; i < tamano; i++) {

		switch (frase[i]) {

			case 'a': {
				a++;
				break;
			}

			case 'e': {
				e++;
				break;
			}

			case 'i': {
				iI++;
				break;
			}

			case 'o': {
				o++;
				break;
			}

			case 'u': {
				u++;
				break;
			}

			case 'A': {
				a++;
				break;
			}

			case 'E': {
				e++;
				break;
			}

			case 'I': {
				iI++;
				break;
			}

			case 'O': {
				o++;
				break;
			}

			case 'U': {
				u++;
				break;
			}
		}
	
	}

	if (a > 0) {
		printf("\nEl numero de letras a es: %d\n", a);
	}

	if (e > 0) {
		printf("El numero de letras e es: %d\n", e);
	}

	if (iI > 0) {
		printf("El numero de letras i es: %d\n", iI);
	}

	if (o > 0) {
		printf("El numero de letras o es: %d\n", o);
	}

	if (u > 0) {
		printf("El numero de letras u es: %d\n", u);
	}

	else if(a==0 && e==0 && iI == 0 && o == 0 && u == 0){
		printf("Tu frase no tiene vocales");
	}
}
*/
/*
//Ejercicio 3
#include <stdio.h>
#include <string.h>

#define tamano 151
int main() {
	
	char palabra[tamano];

	printf("Introduce texto en el que se cambiaran las vocales por .: \n");
	gets_s(palabra);

	int tamanio = strlen(palabra);

	for (int i = 0; i < tamanio; i++) {
		if (palabra[i] == 'a' || palabra[i] == 'A' || palabra[i] == 'e' || palabra[i] == 'E' || palabra[i] == 'i' || palabra[i] == 'I' || palabra[i] == 'o' || palabra[i] == 'O' || palabra[i] == 'u' || palabra[i] == 'U') {
			palabra[i] = '.';
		}
	}
	printf("%s", palabra);
}
*/
/*
//Ejercicio 4

#include <stdio.h>
#include <string.h>

#define tamano 201

int main() {
	
	char palabra[tamano];
	
	int consonante = 0;
	int vocales = 0;
	int especiales = 0;

	printf("Introduce un texto para ver la cantidad de consonantes y vocales que tiene: \n");
	gets_s(palabra);
	
	int tamanio = strlen(palabra);

	for (int i = 0; i < tamanio; i++) {
		if (palabra[i] == 'a' || palabra[i] == 'A' || palabra[i] == 'e' || palabra[i] == 'E' || palabra[i] == 'i' || palabra[i] == 'I' || palabra[i] == 'o' || palabra[i] == 'O' || palabra[i] == 'u' || palabra[i] == 'U') {
			vocales++;
		}

		else if (palabra[i] == ' ' || palabra[i] == ',' || palabra[i] == '.' || palabra[i] == '?' || palabra[i] == '¿' || palabra[i] == '!' || palabra[i] == '¡' || palabra[i] == '-' || palabra[i] == '_' || palabra[i] == ';' || palabra[i] == ':') {
			especiales++;
		}
		
		else {
			consonante++;
		}
	}
	
	printf("Tiene %d vocales, y tiene %d consonantes\n", vocales, consonante);

	printf("Tu frase tiene %d caracteres especiales", especiales);
}
*/
/*
//Ejercicio 5
#include <stdio.h>
#include <string.h>

#define tamano 101
int main() {

	char frase[tamano];
	int letras = 0;

	printf("Introduce la frase para ver cada palabra y los caracteres que tiene: \n");
	gets_s(frase);

	for (int i = 0; i < strlen(frase); i++) {
		
		if (frase[i] == ' ') {
			printf(" : (%d letras)\n", letras);
			letras = 0;
		}
		else {
			printf("%c", frase[i]);
			letras++;
		}
	}

	if (letras > 0) {
		printf(" : (%d letras)\n", letras);
	}
}
*/
/*
//Ejercicio 6
#include <stdio.h>
#include <string.h>

#define tamano 251
int main() {
	char frase[tamano];
	char resultado[tamano];
	int j = 0;

	printf("Introduce la frase:\n");
	gets_s(frase, tamano);

	int longitud = strlen(frase);

	for (int i = 0; i < longitud; i++) {
		
		if (frase[i] == ' ') {
			
			if (i == 0 || frase[i - 1] != ' ') { //solo lo copia si no es un espacio
				resultado[j++] = ' ';
			}
		}
		
		else {
			resultado[j++] = frase[i]; // si no es un espacio se copia siempre
		}
	}
	resultado[j] = '\0';

	printf("Frase con espacios reducidos:\n%s\n", resultado);
}
*/
