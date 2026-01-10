//#include <stdio.h>

/*
int main() {
	int edad = 0;

	printf("Introduce tu edad por teclado: \n");
	scanf_s("%d", &edad);

	printf("Tu edad es: %d", edad);
}
*/

/*
int main() {

	float num = 0;

	printf("Introduce un numero: \n");
	scanf_s("%f", &num);

	if (num >= 5) {
		printf("Aprobado\n");
	}

	else {
		printf("Suspendido\n");
	}
}
*/

/*
int main() {

	for (int i = 1; i <= 10; i++) {
		printf("%d\n", i);
	}
}
*/

/*
int main() {

	int v1[5];

	printf("Introduce 5 numeros por teclado: \n");

	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &v1[i]);
	}

	for (int i = 0; i < 5; i++) {
		printf("%d", v1[i]);
	}

}
*/

/*
int main() {

	int v1[5];

	printf("Introduce 5 valores: \n");

	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &v1[i]);
	}


	for (int i = 0; i < 5; i++) {
		printf("%d", v1[i]);
	}

}
*/

/*
int main() {
	
	int v1[2][3];

	printf("Introduce valores por el teclado: \n");

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			scanf_s("%d", &v1[i][j]);
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d", v1[i][j]);
		}
	}
}
*/

/*
int Suma(int a, int b);

int main() {

	int num1=0, num2=0;

	printf("Introduce 2 numeros para calcular su suma: \n");
	scanf_s("%d %d", &num1, &num2);

	int resultado = Suma(num1,num2);

	printf("El resultado es: %d", resultado);
}

int Suma(int a, int b) {
	return a + b;
}
*/

/*
void Imprimir(int v[5]);

int main() {
	
	int v1[5] = {1,2,3,4,5};

	Imprimir(v1);
}

void Imprimir(int v[5]) {
	printf("El vector completo es: \n");
	
	for (int i = 0; i < 5; i++) {
		printf("%d\n", v[i]);
	}
}
*/

/*
void AumentarUno(int* numero);

int main() {

	int num = 0;

	printf("Introduce un numero para augmentarlo por puntero: \n");
	scanf_s("%d", &num);

	printf("El numero %d será augmentado 1 por puntero: \n", num);
	
	AumentarUno(&num);

	printf("El resultado augmentado es: %d\n", num);
}

void AumentarUno(int* numero) {
	*numero = *numero + 1;
}
*/

//Mas de repaso
/*
void Duplicar(int* numero);

int main() {

	int num = 0;

	printf("Introduce un numero para duplicarlo: \n");
	scanf_s("%d", &num);

	printf("El numero era: %d\n", num);

	Duplicar(&num);

	printf("El numero despues de duplicarse es: %d\n", num);
}

void Duplicar(int* numero) {
	*numero = *numero * 2;
}
*/

/*
void Intercambiar(int* n1, int* n2);

int main() {
	
	int num1 = 0, num2=0;

	printf("Introduce 2 numeros: \n");
	scanf_s("%d %d", &num1, &num2);

	Intercambiar(&num1,&num2);

	printf("El primer valor ahora es: %d\n", num1);
	printf("El Segundo valor ahora es: %d\n", num2);
}

void Intercambiar(int* n1, int* n2) {
	int aux = *n1;
	*n1 = *n2;
	*n2 = aux;
}
*/

//Structs y ficheros aquí, para que funcione lo de arriba, descomentar la primera linea del codigo r, w+ y otro

/*
#include <stdio.h>

struct Libro{ //Variable que guarda varias cosas juntas
	int id;
	char titulo[50];
	char autor[50];
	int prestado;
};

int main() {

	struct Libro l1;

	printf("Introduce ID: \n");
	scanf_s("%d", &l1.id);

	printf("Introduce titulo: \n");
	scanf_s("%s", l1.titulo, 50);

	printf("Introduce autor: \n");
	scanf_s("%s", l1.autor,50);

	printf("Prestado (1=si, 0=no): ");
	scanf_s("%d", &l1.prestado);

	printf("\n--- DATOS DEL LIBRO ---\n");
	printf("ID: %d\n", l1.id);
	printf("Titulo: %s\n", l1.titulo);
	printf("Autor: %s\n", l1.autor);
	printf("Prestado: %d\n", l1.prestado);

	return 0;
}
*/

/*
#include <stdio.h>

struct Libros {
	int id;
	char titulo[50];
	char autor[50];
	int prestado;
};

int main() {
	struct Libros libr[2];

	for (int i = 0; i < 2; i++) {
		printf("\nIntroduce ID: \n");
		scanf_s("%d", &libr[i].id);

		printf("Introduce titulo: \n");
		scanf_s("%s", libr[i].titulo, 50);

		printf("Introduce autor: \n");
		scanf_s("%s", libr[i].autor, 50);

		printf("Prestado (1=si, 0=no): ");
		scanf_s("%d", &libr[i].prestado);

		printf("\n--- DATOS DEL LIBRO %d ---\n", i+1);
		printf("ID: %d\n", libr[i].id);
		printf("Titulo: %s\n", libr[i].titulo);
		printf("Autor: %s\n", libr[i].autor);
		printf("Prestado: %d\n", libr[i].prestado);
	}
	return 0;
}
*/

/*
#include <stdio.h>

struct Libros {
	int id;
	char titulo[50];
	char autor[50];
	int prestado;
};

int main() {
	struct Libros libr[2];
	int contador = 0;

	for (int i = 0; i < 2; i++) {
		printf("\nIntroduce ID: \n");
		scanf_s("%d", &libr[i].id);

		printf("Introduce titulo: \n");
		scanf_s("%s", libr[i].titulo, 50);

		printf("Introduce autor: \n");
		scanf_s("%s", libr[i].autor, 50);

		printf("Prestado (1=si, 0=no): ");
		scanf_s("%d", &libr[i].prestado);
		
		if (libr[i].prestado == 1) {
			contador++;
		}

		printf("\n--- DATOS DEL LIBRO %d ---\n", i + 1);
		printf("ID: %d\n", libr[i].id);
		printf("Titulo: %s\n", libr[i].titulo);
		printf("Autor: %s\n", libr[i].autor);
		printf("Prestado: %d\n", libr[i].prestado);
	}

	printf("Han sido prestados: %d\n", contador);
	return 0;
}
*/

/*
#include <stdio.h>

struct Alumno{
	int id;
	char nombre[30];
	float nota;
	int aprobado;
};

int main() {

	struct Alumno alumnos[3];
	int contador = 0;

	for (int i = 0; i < 3; i++) {

		printf("Alumno %d, introduce los siguientes datos: \n", i + 1);

		printf("ID: \n");
		scanf_s("%d", &alumnos[i].id);

		printf("Nombre: \n");
		scanf_s("%s", alumnos[i].nombre,30);

		printf("Nota: \n");
		scanf_s("%f", &alumnos[i].nota);

		if (alumnos[i].nota >= 5) {
			alumnos[i].aprobado = 1;
		}
		else {
			alumnos[i].aprobado = 0;
		}

		if (alumnos[i].aprobado == 1) {
			contador++;
		}
	}

	printf("\nVamos a mostrar todos los alumnos: \n");
	
	for (int i = 0; i < 3; i++) {
		
		printf("\nDATOS DEL ALUMNO %d\n", i + 1);
		printf("ID: %d\n", alumnos[i].id);
		printf("Nombre: %s\n", alumnos[i].nombre);
		printf("Nota: %.2f\n", alumnos[i].nota);
		printf("Aprobado: %d\n", alumnos[i].aprobado);
	}

	printf("\nHan aprobado: %d", contador);

	return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* archivo;
	errno_t err;

	err = fopen_s(&archivo, "Estudio Archivos\Archivos\archivo","w");

	if (err) {
		printf("Error de apertura\n");
	}

	else {
		fprintf(archivo, "Hola mundo desde C soy un bot\n");
		fclose(archivo);
	}

	system("pause");
	return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* prueba;
	errno_t err;
	int a ,b ,c;

	err = fopen_s(&prueba,"datos.txt", "r"); //Retorna null si no se puede abrir

	if (err != 0 || prueba == NULL) {
		printf("Error al abrir el archivo");
	}

	else {
		printf("Si se puede abrir\n");
		
		int leidos = fscanf_s(prueba, "%d %d %d", &a, &b, &c);

		printf("Elementos leidos: %d\n", leidos);
		
		printf("Los valores son: %d %d %d", a, b, c);

		fclose(prueba);
	}

	return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* prueba;
	errno_t err;
	int a = 1, b = 2, c = 3;

	err = fopen_s(&prueba, "datos.txt", "a"); //Retorna null si no se puede abrir

	if (err) {
		printf("Error al abrir el archivo");
	}

	else {
		printf("Si se puede abrir\n");

		fprintf_s(prueba,"HOLA MUNDO\n");
		fprintf_s(prueba,"Bienvenidos\n");
		fprintf_s(prueba, "%d %d %d", a,b,c);
		fclose(prueba);
	}

	return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

struct Libros{
	int id;
	char isbn[14];
	char titulo[100];
	char autor[100];
	int prestado;
};

int main() {

	FILE* f;
	errno_t err;

	err = fopen_s(&f, "Archivos/log.txt", "a");

	if (err) {
		printf("Error al abrir el archivo");
	}

	else {
		struct Libros libro[3];

		for (int i = 0; i < 3; i++) {
			printf("\nIntroduce los datos del libro: %d\n",i+1);

			printf("ID: ");
			scanf_s("%d", &libro[i].id);

			printf("\nISBN: ");
			scanf_s("%s", libro[i].isbn, 14);

			printf("\nTitulo: ");
			scanf_s("%s", libro[i].titulo, 100);

			printf("\nAutor: ");
			scanf_s("%s", libro[i].autor, 100);

			printf("\nPrestado: ");
			scanf_s("%d", &libro[i].prestado);

		}

		for (int i = 0; i < 3; i++) {
			fprintf_s(f,"Libro %d\n", i + 1);

			fprintf_s(f,"Id: %d\n", libro[i].id);
			fprintf_s(f, "Titulo: %s\n", libro[i].titulo);
			fprintf_s(f, "Autor: %s\n", libro[i].autor);

			if (libro[i].prestado == 1) {
				fprintf_s(f,"PRESTADO\n");
			}

			else {
				fprintf_s(f,"DEVUELTO\n");
			}
			fprintf_s(f, "--------------------\n");
		}
		printf("Informacion guardada en el documento log.txt");
		fclose(f);
	}
	return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

struct Libros{
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
	scanf_s("%s", &libro.nombre,100);

	printf("\nAutor: ");
	scanf_s("%s", &libro.autor, 100);

	printf("\nEstado: ");
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
*/

/*
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
void RellenarFichero(struct Libros libr);


int main() {

	struct Libros libro;
	int cantidad = 0;

	printf("Introduce la cantidad de libros que desea comprobar: ");
	scanf_s("%d", &cantidad);

	for (int i = 0; i < cantidad; i++) {
		printf("\nLIBRO: %d\n", i+1);
		libro = PedirDatos();
		RellenarFichero(libro);
	}
	

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

	printf("\nEstado: ");
	scanf_s("%d", &libro.estado);

	return libro;

}

void RellenarFichero(struct Libros libr) {

	FILE* f;
	errno_t err;

	err = fopen_s(&f, "Archivos/Prueba", "a+");


	if (err) {
		printf("Error al abrir el archivo\n");
	}

	else {
		fprintf_s(f, "\nID: %d\n", libr.id);
		fprintf_s(f, "\nISBN: %s\n", libr.isbn);
		fprintf_s(f, "\nNOMBRE: %s\n", libr.nombre);
		fprintf_s(f, "\nAUTOR: %s\n", libr.autor);

		if (libr.estado == 1) {
			fprintf_s(f, "\nESTADO: DEVUELTO");
		}

		else {
			fprintf_s(f, "\nESTADO: PRESTADO");
		}
	}
}
*/

/*
#include <stdio.h>
#include <stdlib.h>


struct Datos {
	int id;
	char nombre[100];
	float nota;
};

struct Datos PedirDatos();
void GuardarDatos(struct Datos alumno);

int main() {

	struct Datos alumnos;
	int cantidad = 0;

	printf("Introduce la cantidad de alumnos que desees: ");
	scanf_s("%d", &cantidad);
		
	for (int i = 0; i < cantidad; i++) {
		printf("\nAlumno %d\n", i + 1);
		alumnos = PedirDatos();
		GuardarDatos(alumnos);
	}

	printf("\nEl archivo se ha guardado correctamente, en el fichero estudio.txt\n");
	
	return 0;
}

struct Datos PedirDatos() {
	
	struct Datos alumnos;

	printf("\nINTRODUCE LOS SIGUIENTES DATOS: \n");

	printf("\nId: ");
	scanf_s("%d", &alumnos.id);

	printf("\nNombre: ");
	scanf_s("%s", alumnos.nombre, 100);

	printf("\nNota: ");
	scanf_s("%f", &alumnos.nota);

	return alumnos;
}

void GuardarDatos(struct Datos alumno) {

	FILE* f;
	errno_t err;

	err = fopen_s(&f, "Archivos/estudio.txt", "a+");


	if (err) {
		printf("Error al abrir el archivo \n");
	}

	else {
		fprintf_s(f, "\nID: %d", alumno.id);

		fprintf_s(f, "\nNombre: %s", alumno.nombre);
		fprintf_s(f, "\nNota: %.2f", alumno.nota);
		
		if (alumno.nota>=5) {
			fprintf(f,"\nEstado: Aprobado");
		}

		else {
			fprintf(f, "\nEstado: Suspendido");
		}
		fprintf(f, "\n----------------------\n");


		fclose(f);
	}
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

struct Productos {
	int id;
	char nombre[100];
	float precio;
};


struct Productos PedirDatos();
void GuardarDatos(struct Productos product);

int main() {

	struct Productos producto;
	int cantidad = 0;


	printf("Quantos productos deseas ingresar: \n");
	scanf_s("%d", &cantidad);
	
	for (int i = 0; i < cantidad; i++) {
		producto = PedirDatos();
		GuardarDatos(producto);
	}
	
	return 0;
}

struct Productos PedirDatos() {

	struct Productos producto;

	printf("INTRODUCE LOS SIGUIENTES DATOS: \n");
	
	printf("ID: ");
	scanf_s("%d", &producto.id);

	printf("\nNOMBRE: ");
	scanf_s("%s", producto.nombre,100);

	printf("\nPRECIO: ");
	scanf_s("%f", &producto.precio);

	return producto;
}

void GuardarDatos(struct Productos product) {

	FILE* f;
	errno_t err;
	err = fopen_s(&f, "Archivos/Productos.txt", "a+");

	if (err) {
		printf("\nError al abrir el archivo: \n");
	}

	else {

		fprintf_s(f, "\nId: %d\n", product.id);

		fprintf_s(f, "Nombre: %s\n", product.nombre);

		fprintf_s(f, "Precio: %.2f\n", product.precio);

		if (product.precio >= 100) {
			fprintf_s(f, "Producto: CARO\n");
		}

		else {
			fprintf_s(f, "Producto: BARATO\n");
		}
		fclose(f);

		printf("Archivo guardado correctamente en la ruta Archivos/Productos.txt \n");
	}

}
*/

/*
#include <stdio.h>
#include <stdlib.h>

void InicializarMapa(char map[10][10]);
void CreacionMapa(char map[10][10]);
void PosicionarJugador(char map[10][10]);
void PosicionEnemigo(char map[10][10]);
void ComprobarCoincidencia(char map[10][10]);
void Ahorcado();
void MoverJugador(char map[10][10]);

int main() {

	char mapa[10][10];
	char salir = 'n';

	InicializarMapa(mapa);
	PosicionarJugador(mapa);
	PosicionEnemigo(mapa);

	while (salir != 'q') {
		CreacionMapa(mapa);
		MoverJugador(mapa);
		ComprobarCoincidencia(mapa);

		printf("¿Quieres salir? (q = salir): ");
		scanf_s(" %c", &salir, 1);
	}

	return 0;
}


void InicializarMapa(char map[10][10]) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			map[i][j] = '-';
		}
	}
}

void CreacionMapa(char map[10][10]) {

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf(" %c ", map[i][j]);
		}
		printf("\n");
	}

}	

void PosicionarJugador(char map[10][10]) {

	FILE* Jugador;
	errno_t err;
	err = fopen_s(&Jugador, "Archivos/Posicion.txt", "r");

	int fila;
	int columna;


	if (err) {
		printf("Error al abrir el archivo\n");
	}

	else {
		fscanf_s(Jugador, "%d %d", &fila, &columna);
		map[fila][columna] = 'X';
		fclose(Jugador);
	}
}

void PosicionEnemigo(char map[10][10]) {
	
	FILE* Enemigo;
	errno_t err;
	err = fopen_s(&Enemigo, "Archivos/PosicionEnemigo.txt", "r");
	int fila, columna;

	if (err) {
		printf("Error al abrir el archivo\n");
	}

	else {
		fscanf_s(Enemigo, "%d %d", &fila, &columna);
		map[fila][columna] = 'E';
		fclose(Enemigo);
	}
}

void ComprobarCoincidencia(char map[10][10]) {

	int filaJugador = -1, columnaJugador = -1;
	int filaMaquina = -1, columnaMaquina = -1;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {

			if (map[i][j] == 'X') {
				filaJugador = i;
				columnaJugador = j;
			}

			if (map[i][j] == 'E') {
				filaMaquina = i;
				columnaMaquina = j;
			}
		}
	}

	if (filaJugador == filaMaquina && columnaJugador == columnaMaquina) {
		printf("Las palabras han coincidido, comienza el ahorcado\n");
		Ahorcado();
	}
}

void MoverJugador(char map[10][10]) {
	int fila = -1, columna = -1;
	char tecla;

	// 1. Buscar jugador
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (map[i][j] == 'X') {
				fila = i;
				columna = j;
			}
		}
	}

	// 2. Leer tecla
	printf("Mover (w/a/s/d): ");
	scanf_s(" %c", &tecla,1);

	// 3. Borrar posición anterior
	map[fila][columna] = '-';

	// 4. Decidir movimiento
	if (tecla == 'w' && fila > 0) fila--;
	if (tecla == 's' && fila < 9) fila++;
	if (tecla == 'a' && columna > 0) columna--;
	if (tecla == 'd' && columna < 9) columna++;

	// 5. Colocar jugador
	map[fila][columna] = 'X';
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

void limpiarArray(int a[4][3]);
void imprimeArray(int a[4][3]);
int rellenarArray(int a[4][3], int* n);

int main() {

	int v1[4][3];
	int menores = 0;


	limpiarArray(v1);
	imprimeArray(v1);
	rellenarArray(v1, &menores);
}


void limpiarArray(int a[4][3]) {
	
	printf("Vamos a limpiar el array dejando los valores a 0\n");

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			a[i][j] = 0;
		}
	}
}

void imprimeArray(int a [4][3]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
}

int rellenarArray(int a[4][3], int* n) {

	FILE* f;
	errno_t err;

	err = fopen_s(&f, "Archivos/navidad", "a+");

	if (err) {
		printf("Error al abrir el archivo\n");
	}

	else {
		
		printf("Introduce los valores del array:\n");
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 3; j++) {
				scanf_s("%d", &a[i][j]);
				if (a[i][j] <= 5) {
					*n = *n + 1;
				}
			}
		}

		printf("El array final es:\n");

		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 3; j++) {
				printf("%d\n", a[i][j]);
			}
		}

		fprintf_s(f, "La cantidad de numeros iguales o menores que 5 es de: %d", *n);
		return *n;
		fclose(f);
	}
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

void InicializarACero(int v1[5][5]);
void RellenarConNumeros(int v1[5][5], int* pares);
void GuardarEnFichero(int* pares);

int main() {

	int array[5][5];
	int cantidadPares=0;

	InicializarACero(array);
	RellenarConNumeros(array, &cantidadPares);
	GuardarEnFichero(&cantidadPares);
	
	return 0;
}

void InicializarACero(int v1[5][5]) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			v1[i][j] = 0;
		}
	}
}

void RellenarConNumeros(int v1[5][5], int* pares) {

	printf("Introduce numeros para rellenar el array: \n");

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf_s("%d", &v1[i][j]);
			if (v1[i][j] % 2 == 0) {
				*pares = *pares + 1;
			}
		}
	}
}

void GuardarEnFichero(int* pares) {
	FILE* f;
	errno_t err;
	
	err = fopen_s(&f, "Archivos/Array.txt", "a+");
	
	if (err) {
		printf("Error al abrir el archivo\n");
	}
	

	else {
		printf("Informacion guardada correctamente en el fichero\n");
		fprintf_s(f, "\nLa cantidad de pares en el array es de: %d", *pares);
		fclose(f);
	}

}
*/

/*
#include <stdio.h>
#include <stdlib.h>

void MostrarNumeros();
void CalcularMedia();
void Rewind();

int main() {
	
	MostrarNumeros();
	CalcularMedia();
	Rewind();

	return 0;

}

void MostrarNumeros() {
	
	FILE* f;
	errno_t err;
	err = fopen_s(&f, "Archivos/rewind.txt", "r");

	int mostrar=0;

	if (err) {
		printf("Error al abrir el archivo\n");
	}

	else {
		printf("Numeros del fichero:\n");
		
		while (fscanf_s(f, "%d", &mostrar) == 1) {
			printf("%d ", mostrar);
		}
		fclose(f);
	}
	
}

void CalcularMedia() {
	FILE* f;
	errno_t err;
	err = fopen_s(&f, "Archivos/rewind.txt", "r");
	int num = 0, suma=0, contador=0;

	if (err) {
		printf("Error al abrir el archivo\n");
	}

	else {
		while (fscanf_s(f, "%d", &num) == 1) {
			suma += num;
			contador++;
		}

		printf("\nMedia: %.2f\n", (float)suma / contador);
		fclose(f);
	}
}

void Rewind() {
	FILE* f;
	errno_t err;
	err = fopen_s(&f, "Archivos/rewind.txt", "r");
	int num;

	if (err) {
		printf("Error al abrir el archivo\n");
	}

	else {
		rewind(f);
		printf("Volviendo a leer desde 0, nos queda así:\n");
		
		while (fscanf_s(f, "%d", &num)==1) {
			printf("%d ", num);
		}

		fclose(f);
	}
}
*/

#include <stdio.h>
#include <stdlib.h>


int main() {

}