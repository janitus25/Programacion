/*
#include <stdio.h>
int main() {

	int numeros=0;

	while(numeros<=10){
		printf("Numero:%d\n", numeros);
		numeros++;

	}
}

*/
/*
#include <stdio.h>
//Factorial
int main() {

	char op;
	float valor1, valor2, resultado;
	int i=1;

	printf("Introduce la operación que deseas realizar: (+,-,*,/,!)");
	scanf_s(" %c", &op);

	printf("Introduce el primer numero: ");
	scanf_s("%f", &valor1);

	printf("Introduce el segundo numero: ");
	scanf_s("%f", &valor2);
	
	switch (op)
	{
	case '+':
		resultado = valor1 + valor2;
		break;

	case '-':
		resultado = valor1 - valor2;
		break;

	case '*':
		resultado = valor1 * valor2;
		break;

	case '/':
		if (valor2 == 0) {
			printf("No se puede dividir entre 0, lo siento\n");
			return 0; //Este return 0, permite que no se ejecute el mensaje del resultado, ya que en este caso no lo podra calcular
		}
		resultado = valor1 / valor2;
		break;

	default:
		printf("Operacion selecionada no encontrada, lo siento");
		break;
	}

	printf("El resultado es: %.2f", resultado);
}
*/
/*
#include <stdio.h>

int main() {
	int num1;
	
	printf("Introduce un numero: ");
	scanf_s("%d", &num1);

	if ((num1 % 3 == 0) && (num1 % 5 == 0)) {
		printf("FizzBuzz");
	}

	else if (num1 % 3 == 0) {
		printf("Fizz");
	}

	else if (num1 % 5 == 0) {
		printf("Buzz");
	}

	else {
		printf("El numero %d no es divisible ni por 3 ni por 5", num1);
	}
}
*/

#include <stdio.h>

int main() {
	
	int num=0;
	int resultado=0;

	while (num >= 0) {
		resultado = resultado + num;
		printf("Introduce numeros hasta que finalize la cosa: ");
		scanf_s("%d", &num);
	}	

	printf("El resultado es: %d", resultado);
}