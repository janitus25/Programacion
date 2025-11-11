/*

#include <stdio.h>

char Operacion();
float GetNumber();
void gestor(float valor1, float valor2, int operacion);
void Suma(float valor1, float valor2);
void resta(float valor1, float valor2);
void multiplicacion(float valor1, float valor2);
void division(float valor1, float valor2);


int main() {

	char operacion = Operacion();
	printf("%c ", operacion);

	float number1 = GetNumber();
	float number2 = GetNumber();
	gestor(number1, number2, operacion);
}


char Operacion() {

	char op;
	printf("Dime que operacion quieres realizar: (+,-,*,/)\n");
	scanf_s(" %c", &op,1);
	return op;
}


float GetNumber() {

	int number;
	printf("Dame un numero: \n");
	scanf_s("%d", &number);
	return number;

}

void gestor(float valor1, float valor2, int operacion)
{
	switch (operacion)
	{
		case'+': {
			Suma(valor1, valor2);
			break;
		}

		case'-': {
			
			resta(valor1, valor2);
			break;

		}

		case'*': {
			multiplicacion(valor1,valor2);
			break;

		}

		case'/': {
			division(valor1,valor2);
			break;

		}
		default: {
			break;
	}
		
	}
}

void Suma(float valor1, float valor2)
{
	printf("El resultado de la suma de %f y %f es: %f", valor1, valor2, valor1 + valor2);
}

void resta(float valor1, float valor2)
{
	printf("El resultado de la resta de %f y %f es: %f", valor1, valor2, valor1 - valor2);

}

void multiplicacion(float valor1, float valor2)
{
	printf("El resultado de la * de %f y %f es: %f", valor1, valor2, valor1 * valor2);

}

void division(float valor1, float valor2)
{
	printf("El resultado de la / de %f y %f es: %f", valor1, valor2, valor1 / valor2);

}
*/

#include <stdio.h>



int main() {

}