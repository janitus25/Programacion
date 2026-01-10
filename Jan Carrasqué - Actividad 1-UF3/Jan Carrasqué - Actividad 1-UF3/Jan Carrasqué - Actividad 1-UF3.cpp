#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Libro {
	int id;
	int isbn;
	char nombre[50];
	char autor[50];
	char estado;
};

int main() {
	int const n=1;
	printf("¿Cuantos libros desea registrar: ");
	scanf_s("%d", &n);

	struct Libro libros[n];
}