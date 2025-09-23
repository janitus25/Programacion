#include <stdio.h>

//vamos a intentar que se imprima por pantalla hola mundo

/*int main() {
	
	int i = 0;
	int continuar = 1;

	while (i <= 10 && (continuar == 1)) {
		printf("%d", i);
		printf(" Quieres continuar? 0=no 1=si\n");
		scanf_s("%d", &continuar);
		i++;
	}
}
*/

int main() {
	int dinero = 0;
	int horas;
	const int precioHora = 9;

	while (dinero < 1000) {
		printf("Quantas horas has trabajado esta semana\n");
		scanf_s("%d", &horas);
		dinero += horas * precioHora;
		printf("Dinero total = %d\n", dinero);
	}
}
//Bucle for

/*
	Estructura for: 
	for (int i = 0; i <= 10, i++){
	printf("%d", i);
*/
