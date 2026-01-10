#include <stdio.h>
#include <stdlib.h>

struct Libros {
	int id;
	char isbn[14];
	char nombre[100];
	char autor[100];
	int estado;
};

struct Libros PedirDatos();
void LlenarFichero(struct Libros libro);

int main() {

	int cantidad = 0;

	printf("Cuantos libros quieres introducir: ");
	scanf_s("%d", &cantidad);

	for (int i = 0; i < cantidad; i++) {
		struct Libros libro;
		printf("\nLibro %d\n", i + 1);
		libro = PedirDatos();
		LlenarFichero(libro);
	}

	return 0;
}

struct Libros PedirDatos() {

	struct Libros libro;

	printf("INTRODUCE LOS SIGUIENTES DATOS: \n");

	printf("\nID: ");
	scanf_s("%d", &libro.id);

	printf("\nISBN: ");
	scanf_s("%s", &libro.isbn, 14);

	printf("\nNombre: ");
	scanf_s("%s", &libro.nombre, 100);

	printf("\nAutor: ");
	scanf_s("%s", &libro.autor, 100);

	printf("\nEstado(0=Devuelto 1=Prestado): ");
	scanf_s("%d", &libro.estado);

	return libro;
}

void LlenarFichero(struct Libros libr) {

	FILE* f;
	errno_t err;

	err = fopen_s(&f, "Archivos/logs.txt", "a");

	if (err) {
		printf("Error al abrir el archivo\n");
	}

	else {

		fprintf_s(f, "ID: %d\n", libr.id);

		fprintf_s(f, "ISBN: %s\n", libr.isbn);

		fprintf_s(f, "NOMBRE: %s\n", libr.nombre);

		fprintf_s(f, "AUTOR: %s\n", libr.autor);

		if (libr.estado == 1) {
			fprintf_s(f, "ESTADO: Prestado\n");
			fprintf(f, "---------------------\n");
		}

		else {
			fprintf_s(f, "ESTADO: Devuelto\n");
			fprintf(f, "---------------------\n");
		}
		fclose(f);
	}
}