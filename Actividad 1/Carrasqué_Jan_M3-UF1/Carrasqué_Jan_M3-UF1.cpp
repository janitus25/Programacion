/*
	//ejercicio1
	#include <stdio.h>
	int main() {

	int num1, num2, resultado;
	
	printf("Introduce un numero entero: ");
	scanf_s("%d", &num1);

	printf("Introduce otro numero entero: ");
	scanf_s("%d", &num2);

	if (num1 == num2) {
		printf("Estos numeros se van a multiplicar ");
		resultado = num1 * num2;
		printf("El resultado es de: %d", resultado);
	}
	
	else if(num1>num2){
		printf("Estos numeros se van a restar ");
		resultado = num1 - num2;
		printf("El resultado es de: %d", resultado);
	}
	
	else {
		printf("Estos numeros se van a sumar ");
		resultado = num1 + num2;
		printf("El resultado es de: %d", resultado);
	}
}
*/
	
/*	 
	//ejercicio2

	#include <stdio.h>
	int main() {

	int num1, num2, num3;

	printf("Introduce el primer numero: ");
	scanf_s("%d", &num1);

	printf("Introduce el segundo numero: ");
	scanf_s("%d", &num2);

	printf("Introduce el tercer numero: ");
	scanf_s("%d", &num3);

	if((num1==num2) || (num1==num3) || (num2 == num1) || (num2 == num3)){
		printf("Los numeros no pueden ser iguales, introduce numeros distintos");
	}
	else {
		if ((num1 > num2) && (num1 > num3)) {
			printf("El numero mayor es: %d", num1);
		}
		else if ((num2 > num1) && (num2 > num3)) {
			printf("El numero mayor es: %d", num2);
		}
		else {
			printf("El numero mayor es: %d", num3);
		}
	}
}
*/

/*
// Ejercicio 3
#include <stdio.h>

int main() {

	float horasTrabajadas,horasE, dinero;

	printf("Introduce el numero de horas que has trabajado esta semana: ");
	scanf_s("%f", &horasTrabajadas);

	if (horasTrabajadas <= 40) {
		dinero = horasTrabajadas * 20;
		printf("No has hecho horas extra, el dinero que vas a recibir es: %.2f euros", dinero);
	}

	else if (horasTrabajadas>40) {
		horasE = horasTrabajadas - 40;
		dinero = (40 * 20) + (horasE * 40);
		printf("Esta semana has hecho horas extra, el dinero que vas a recibir es de: %.2f euros\n", dinero);
		printf("Has trabajado: %.2f h extras", horasE);
	}
}
*/

/*
//Ejercicio 4

#include <stdio.h>
int main() {

	int pulsaciones, edad;
	char sexo;

	printf("Introduce tu edad: ");
	scanf_s("%d", &edad);

	printf("Introduce tu sexo (F o M): ");
	scanf_s(" %c", &sexo);

	if (sexo == 'F') {
		pulsaciones = (220 - edad) / 10;
		printf("Has escogido el sexo femenino, el numero de pulsaciones por cada 10 segundos es de %d pulsaciones", pulsaciones);
	}

	else if(sexo == 'M') {
		pulsaciones = (210 - edad) / 10;
		printf("Has escogido el sexo masculino, el numero de pulsaciones por cada 10 segundos es de %d pulsaciones", pulsaciones);
	}

	else {
		printf("Te has equivocado de letra");
	}
}
*/

//Ejercicio 5

#include <stdio.h>
int main() {

	float compra;
	int bolita;

	printf("Introduce la cantidad de dinero que te has gastado, para jugar al juego de la bolita: ");
	scanf_s("%f", &compra);

	printf("Introduce el color de la bolita: (1 = blanco, 2 = verde, 3 = amarillo, 4 = azul, 5 = roja): ");
	scanf_s("%d", &bolita);

	switch (bolita)
	{
	
	case 1:
		printf("Te ha salido la bola blanca, no tienes descuento alguno, tienes que pagar: %.2f euros", compra);
		break;
	
	case 2: 
		compra = compra * 0.90;
		printf("Te ha salido la bola verde, tienes un 10 de descuento, tienes que pagar: %.2f euros", compra); //No pongo el % porque queda feo en la terminal
		break;

	case 3: 
		compra = compra * 0.75;
		printf("Te ha salido la bola amarilla, tienes un 25 de descuento, tienes que pagar: %.2f euros", compra);
		break;

	case 4:
		compra = compra * 0.50;
		printf("Te ha salido la bola azul, tienes un 50 descuento, tienes que pagar: %.2f euros", compra);
		break;
	
	case 5: 
		compra = 0;
		printf("Te ha salido la bola roja, felicidades tienes un 100 descuento, tienes que pagar: %.2f euros", compra);
		break;
	
	default:
		printf("Te has equivocado en el color de la bolita");
		break;
	}
}
