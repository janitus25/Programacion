#include <stdio.h>
#include <math.h>

//Ejercicio1
void Ejercicio1();
void Operacion(int n1, int n2, char oper, float* resul, int* error);

void Ejercicio1() {

	int num1 = 0, num2 = 0;
	char operacion, opcion = 'n';

	float resultado = 0;
	int error = 0;

	do
	{
		printf("Introduce 2 numeros para hacer una operacion: \n");
		scanf_s("%d %d", &num1, &num2);

		printf("Introduce la operacion que desear realizar: \n");
		printf("MENU\n");
		printf("+ -- > Sumar\n");
		printf("- -- > Restar\n");
		printf("* -- > Multiplicar\n");
		printf("/ -- > Dividir\n");
		printf("^ -- > Potencia\n");
		printf(" s-- > Salir\n");
		printf("Elija opcion :\n");
		scanf_s(" %c", &operacion, 1);

		Operacion(num1, num2, operacion, &resultado, &error);

		if (error == 1) {
			printf("El resultado de %d %c %d es de: %.2f\n", num1, operacion, num2, resultado);
		}

		else if (error == -1) {
			printf("No se puede dividir entre 0.\n");
		}

		else {
			printf("Error, operador no válido.\n");
		}

		printf("\nQuieres salir? (s/n): ");
		scanf_s(" %c", &opcion, 1);

	} while (opcion != 's');
}
void Operacion(int n1, int n2, char oper, float* resul, int* error) {

	switch (oper) {

	case '+': {
		*resul = n1 + n2;
		*error = 1;
		break;
	}

	case '-': {
		*resul = n1 - n2;
		*error = 1;
		break;
	}

	case '*': {
		*resul = n1 * n2;
		*error = 1;
		break;
	}

	case '/': {
		if (n2 == 0) {
			*error = -1;
			*resul = 0;
		}

		else {
			*resul = (float)n1 / n2;
			*error = 1;
		}
		break;
	}

	case '^': {
		*resul = pow(n1, n2);
		*error = 1;
		break;
	}

	default:
		*error = -2;
		*resul = 0;
		break;
	}
}



//Ejercicio2

void Ejercicio2();
void OperacionEj2(int n1, int n2, char oper, float* resul, int* error);
int Menu();

void Ejercicio2() {

	int num1 = 0, num2 = 0;
	char operacion;

	float resultado = 0;
	int error = 0;

	do
	{
		operacion = Menu();

		if (operacion == 's') {
			break;
		}

		printf("Introduce 2 numeros para hacer una operacion: \n");
		scanf_s("%d %d", &num1, &num2);


		OperacionEj2(num1, num2, operacion, &resultado, &error);

		if (error == 1) {
			printf("\n");
			printf("El resultado de %d %c %d es de: %.2f\n", num1, operacion, num2, resultado);
			printf("\n");
		}

		else if (error == -1) {
			printf("No se puede dividir entre 0.\n");
		}

		else {
			printf("Error, operador no válido.\n");
		}

	} while (operacion != 's');
}
void OperacionEj2(int n1, int n2, char oper, float* resul, int* error) {

	switch (oper) {

	case '+': {
		*resul = n1 + n2;
		*error = 1;
		break;
	}

	case '-': {
		*resul = n1 - n2;
		*error = 1;
		break;
	}

	case '*': {
		*resul = n1 * n2;
		*error = 1;
		break;
	}

	case '/': {
		if (n2 == 0) {
			*error = -1;
			*resul = 0;
		}

		else {
			*resul = (float)n1 / n2;
			*error = 1;
		}
		break;
	}

	case '^': {
		*resul = pow(n1, n2);
		*error = 1;
		break;
	}

	default:
		*error = -2;
		*resul = 0;
		break;
	}
}
int Menu() {
	
	char operacion;

	printf("+ = Sumar\n");
	printf("- = Restar\n");
	printf("* = Multiplicar\n");
	printf("/ = Dividir\n");
	printf("^ = Potencia\n");
	printf("s = Salir\n");
	printf("Elija opcion: \n");

	scanf_s(" %c", &operacion, 1);

	return operacion;
}



//Ejercicio3

void Ejercicio3();
void OperacionEj3(int n1, int n2, char oper, float* resul, int* error, int* num1, int* num2);
int MenuEj3();

void Ejercicio3() {

	int num1 = 0, num2 = 0;
	char operacion;

	float resultado = 0;
	int error = 0;

	int n1 = 0, n2 = 0;

	do
	{
		operacion = MenuEj3();

		if (operacion == 's') {
			break;
		}

		printf("Introduce 2 numeros para hacer una operacion: \n");
		scanf_s("%d %d", &num1, &num2);


		OperacionEj3(num1, num2, operacion, &resultado, &error, &n1, &n2);

		if (error == 1) {
			printf("\n");
			printf("El resultado de %d %c %d es de: %.2f\n", num1, operacion, num2, resultado);
			printf("\n");
		}

		else if (error == -1) {
			printf("No se puede dividir entre 0.\n");
		}

		else if (error == 5) {
			printf("El factorial de %d es: %d\n", num1, n1);
			printf("El factorial de %d es: %d\n", num2, n2);
			printf("\n");
		}

		else {
			printf("Error, operador no válido.\n");
		}

	} while (operacion != 's');
}
void OperacionEj3(int n1, int n2, char oper, float* resul, int* error, int* num1, int* num2) {

	switch (oper) {

	case '+': {
		*resul = n1 + n2;
		*error = 1;
		break;
	}

	case '-': {
		*resul = n1 - n2;
		*error = 1;
		break;
	}

	case '*': {
		*resul = n1 * n2;
		*error = 1;
		break;
	}

	case '/': {
		if (n2 == 0) {
			*error = -1;
			*resul = 0;
		}

		else {
			*resul = (float)n1 / n2;
			*error = 1;
		}
		break;
	}

	case '^': {
		*resul = pow(n1, n2);
		*error = 1;
		break;
	}

	case '!': {

		int fact1 = 1;
		int fact2 = 1;

		for (int i = 1; i <= n1; i++) {
			fact1 *= i;
		}

		for (int i = 1; i <= n2; i++) {
			fact2 *= i;
		}

		*num1 = fact1;
		*num2 = fact2;
		*error = 5;
		break;
	}

	default:
		*error = -2;
		*resul = 0;
		break;
	}
}
int MenuEj3() {

	char operacion;

	printf("+ = Sumar\n");
	printf("- = Restar\n");
	printf("* = Multiplicar\n");
	printf("/ = Dividir\n");
	printf("^ = Potencia\n");
	printf("! = Factorial\n");
	printf("s = Salir\n");
	printf("Elija opcion: \n");

	scanf_s(" %c", &operacion, 1);

	return operacion;
}

int main() {
	Ejercicio1();
	//Ejercicio2();
	//Ejercicio3();
	return 0;
}


