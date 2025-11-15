#include <stdio.h>


struct Persona {

	float altura=100;
	int edad=10;
};



void RecorrerArray(int* num);

void RecorrerArray(int* num) {

	for (int i = 0; i < 3; i++) {
		printf("%d", num[i]);
	}
}


int main() {
	
	/*int arr[3] = {0,0,0};
	printf("%d", arr);
	RecorrerArray(arr);*/
	/*
	int x = 42;
	int* p = &x;
	int** pp = &p;

	**pp = 100;

	printf("%d\n", x);
	printf("%d\n", *p);
	printf("%d\n", **pp);
	*/

	Persona personas[32];

	for (int i = 0; i < 32; i++) {
		printf("Altura %d  Edad %d\n", personas[i].altura, personas[i].edad);
	}
}