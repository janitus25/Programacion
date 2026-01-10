#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//FILE * fopen (const char *filename, const char *opentype);
//r= read:  w+: Crear un archivo para escritura 
//errmp_t err Es una capa de seguridad para que la maquina no pete, nos avisa si peta el archivo


int main() {

	FILE* archivo;
	char caracter;
	errno_t err = fopen_s(&archivo, "textos/prueba.txt", "a+");
		
	if (err) {
		printf("\nError de apertura del archivo \n\n");
	}
	
	else {
		
		printf("\n El contenido del archivo prueba.txt es\n\n");
		
		do{

			strcmp();
		} while (true);
	}




	printf("\n");
	system("pause");
	return 0;
}