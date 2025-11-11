#include <stdio.h>

//Ejercicio 1
void Ejercicio1();
int Par(int num);

void Ejercicio1() {
		int num = 0;
		int resultado = 0;

		printf("Introduce un numero: \n");
		scanf_s("%d", &num);

		resultado = Par(num);

		printf("Resultado: %d\n", resultado);
	}
int Par(int num) {

		if (num % 2 == 0) {
			return 1;
		}

		else {
			return 0;
		}
	}

//Ejercicio 2
void Ejercicio2();
float Media2(float num1, float num2);

void Ejercicio2()
{
	float num1 = 0, num2 = 0, media=0;

	printf("Introduce 2 numeros para saber su media: \n");
	scanf_s("%f %f", &num1, &num2);
	
	media=Media2(num1,num2);
	printf("La media es: %.2f\n", media);

}
float Media2(float num1, float num2)
{
	return (num1 + num2) / 2;
}


//Ejercicio 3
void Ejercicio3();
void Media3(float num1, float num2, float num3);

void Ejercicio3(){
	float num1=0, num2=0, num3=0;
	
	printf("Introduce 3 numeros para calcular la media: \n");
	scanf_s("%f %f %f", &num1, &num2 ,&num3);

	Media3(num1, num2, num3);
}
void Media3(float num1, float num2, float num3){

	float media = (num1 + num2 + num3) / 3;
	printf("\nLa media es: %.2f\n", media);
}


//Ejercicio 4
void Ejercicio4();
void Saludo();

void Ejercicio4() {
	Saludo();
}
void Saludo() {

	printf("Hola\n");
}

//Ejercicio 5
void Ejercicio5();
int Negativo(int num);

void Ejercicio5() {

	int num = 0;
	int resultado = 0;

	printf("Introduce un numero para saber si es positivo o negativo 1=negativo 0=positivo: \n");
	scanf_s("%d", &num);

	resultado=Negativo(num);
	
	if (resultado == 1) {
		printf("Resultado: %d, es negativo\n", resultado);
	}

	else{
		printf("Resultado: %d, es positivo\n", resultado);
	}
	
}
int Negativo(int num) {

	if (num < 0) {
		return 1;
	}

	else {
		return 0;
	}

}

//Ejercicio 6
void Ejercicio6();
float Suma(float num1, float num2);
float Resta(float num1, float num2);
float Multiplicacion(float num1, float num2);
float Division(float num1, float num2);

void Ejercicio6() {

	float num1,num2,resultadoDiv;

	printf("Introduce 2 numeros para realizar una operacion: \n");
	scanf_s("%f %f", &num1, &num2);

	printf("\n");

	printf("Suma: %.2f\n", Suma(num1, num2));
	printf("Resta: %.2f\n", Resta(num1, num2));
	printf("Multiplicacion: %.2f\n", Multiplicacion(num1, num2));
	
	resultadoDiv = Division(num1, num2);
	if (resultadoDiv == -1) {
		printf("Division: Error\n");
	}
	else {
		printf("Division: %.2f\n", resultadoDiv);
	}

}
float Suma(float num1, float num2) {
	return num1 + num2;
}
float Resta(float num1, float num2) {
	return num1 - num2;
}
float Multiplicacion(float num1, float num2) {
	return num1 * num2;
}
float Division(float num1, float num2) {
	if (num2 == 0) {
		return -1; // valor de error
	}
	else {
		return num1 / num2;
	}
}

int main() {
	Ejercicio1();
	Ejercicio2();
	Ejercicio3();
	Ejercicio4();
	Ejercicio5();
	Ejercicio6();
}