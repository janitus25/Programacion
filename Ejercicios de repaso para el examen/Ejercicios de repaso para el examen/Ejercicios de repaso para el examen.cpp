// Practicar condicionals
/*
//Ejercicio 1: Que pida un número del 1 al 7 y diga el día de la semana correspondiente.
#include <stdio.h>

int main() {
	int diaSemana = 0;

	printf("Introduce un numero del 1 al 7 para saber el numero de la semana: \n");
	scanf_s("%d", &diaSemana);

		switch (diaSemana) {

		case 1: {
			printf("Has escogido el lunes");
			break;
		}

		case 2: {
			printf("Has escogido el martes");
			break;
		}

		case 3: {
			printf("Has escogido el miercoles");
			break;
		}

		case 4: {
			printf("Has escogido el jueves");
			break;
		}

		case 5: {
			printf("Has escogido el viernes");
			break;
		}

		case 6: {
			printf("Has escogido el sabado");
			break;
		}

		case 7: {
			printf("Has escogido el domingo");
			break;
		}
		default:
			printf("No has escogido ningun dia de la semana");
			break;
		}
}
*/
/*
// Que pida una letra y detecte si es una vocal.
#include <stdio.h>

int main() {
	
	char letra;

	printf("Introduce una letra para saber si es vocal o consonante: \n");
	scanf_s("%c", &letra);

	if (letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' || letra == 'u' | letra == 'U') {
		printf("Es vocal");
	}

	else {
		printf("Es consonante");
	}
}
*/
/*
//3r.  Que calcule el sueldo que le corresponde al trabajador de una empresa que cobra 40.000 euros anuales, el programa debe realizar los cálculos en función de los siguientes criterios:

//a.       Si lleva más de 10 años en la empresa se le aplica un aumento del 10%.
//b.      Si lleva menos de 10 años pero más que 5 se le aplica un aumento del 7%.
//c.       Si lleva menos de 5 años pero más que 3 se le aplica un aumento del 5%.
//d.      Si lleva menos de 3 años se le aplica un aumento del 3%.

#include <stdio.h>

int main() {

	int sueldo = 40000;
	int augmento = 0;
	int tiempo = 0;

	printf("Tu sueldo inicial es de 40k, cuanto tiempo llevas en la empresa?: \n");
	scanf_s("%d", &tiempo);

	if (tiempo > 10) {
		printf("El augmento de tu sueldo es del 10%\n");
		augmento = sueldo * 0.10;
		sueldo = sueldo + augmento;
		printf("%d euros", sueldo);
	}

	else if (tiempo < 10 && tiempo > 5 ) {
		printf("El augmento de tu sueldo es del 7%\n");
		augmento = sueldo * 0.07;
		sueldo = sueldo + augmento;
		printf("%d euros", sueldo);
	}

	else if (tiempo <= 5 && tiempo >= 3) {
		printf("El augmento de tu sueldo es del 5%\n");
		augmento = sueldo * 0.05;
		sueldo = sueldo + augmento;
		printf("%d euros", sueldo);
	}

	else {
		printf("El augmento de tu sueldo es del 3%\n");
		augmento = sueldo * 0.03;
		sueldo = sueldo + augmento;
		printf("%d euros", sueldo);
	}
}
*/
/*
// Escribir un programa que pida al usuario dos números y muestre por pantalla su división. Si el divisor es cero el programa debe mostrar un error.

#include <stdio.h>

int main() {

	int num1 = 0, num2 = 0, resultado = 0;

	printf("Introduce 2 numeros: \n");
	scanf_s("%d %d", &num1 ,&num2);

	if (num2==0) {
		printf("Error");
		return 0;
	}

	else {
		resultado = num1 / num2;
		printf("El resultado de %d / %d es de: %d", num1, num2, resultado);
	}
}
*/

// Para tributar un determinado impuesto se debe ser mayor de 16 años y tener unos ingresos iguales o superiores a 1000 € mensuales. Escribir un programa que pregunte al usuario su edad y sus ingresos mensuales y muestre por pantalla si el usuario tiene que tributar o no.

#include <stdio.h>

int main() {

	int edad = 0;

	printf("Introduce tu edad: \n");
	scanf_s("%d", &edad);
}