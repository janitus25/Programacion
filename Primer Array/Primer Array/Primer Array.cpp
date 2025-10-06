#include <stdio.h>
#define TOTALALUMNOS 10 //El define se utiliza para crear macros, que son sustituciones de texto o símbolos que ocurren antes de que el código se compile. Sirve para definir constantes simbólicas, como #define PI 3.14159.
int main() {

	float alumnos [TOTALALUMNOS]; //Es molt important especificar el tamany de la memoria
	float media = 0;

	for (int i = 0; i<TOTALALUMNOS; i++) {
		printf("Introduce la nota del alumno %d: ", i + 1);
		scanf_s("%f", &alumnos[i]);
	}

	for (int i = 0; i < TOTALALUMNOS; i++) {
		media = media + alumnos[i];
	}
	printf("%.2f", media / TOTALALUMNOS);
	

}