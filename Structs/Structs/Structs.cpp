#include <stdio.h>

struct Luz {
	float potencia;
	char color;

};


struct Persiana
{
	int posicion;
};

void ApagarLuz(Luz *l);
void MostrarEstado(Luz l[], int totalLuces);

int main() {

	Luz l1[4];
	Persiana p1;

	p1.posicion = 0;
	
	printf("Creacion de las luces: \n");

	for (int i = 0; i < 4; i++) {
		printf("Dame el color de esta luz: %d: \n", i);
		scanf_s(" %c", &l1[i].color, 1);

		printf("Dame la potencia de esta luz: %d: \n", i);
		scanf_s("%f", &l1[i].potencia);
	}

	MostrarEstado(l1, 4);
}

void ApagarLuz(Luz* l) {

	l->potencia = 0;//No se tiene que poner * porque la flecha en si es como si apuntaramos a esa direccion
}

void MostrarEstado(Luz l[], int totalLuces) {

	for (int i = 0; i < totalLuces; i++) {
		printf("\nIntensidad Luces: \n");
		printf("%f",l[i].potencia);

		printf("\nColor Luces: \n");
		printf("%c", l[i].color);
	}
}