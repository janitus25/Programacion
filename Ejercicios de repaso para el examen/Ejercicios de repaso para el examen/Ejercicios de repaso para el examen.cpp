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
/*
// Para tributar un determinado impuesto se debe ser mayor de 16 años y tener unos ingresos iguales o superiores a 1000 € mensuales. Escribir un programa que pregunte al usuario su edad y sus ingresos mensuales y muestre por pantalla si el usuario tiene que tributar o no.

#include <stdio.h>

int main() {

	int edad = 0;
	int dinero = 0;

	printf("Introduce tu edad: \n");
	scanf_s("%d", &edad);

	printf("Introduce tus ingresos mensuales: \n");
	scanf_s("%d", &dinero);

	if (edad >= 16 && dinero >= 1000) {
		printf("Tienes que trbutar.");
	}

	else {
		printf("No tienes que tributar");
	}
}
*/
/*
// Escribir un programa para una empresa que tiene salas de juegos para todas las edades y quiere calcular de forma automática el precio que debe cobrar a sus clientes por entrar. El programa debe preguntar al usuario la edad del cliente y mostrar el precio de la entrada. Si el cliente es menor de 4 años puede entrar gratis, si tiene entre 4 y 18 años debe pagar 5€ y si es mayor de 18 años, 10€.

#include <stdio.h>

int main() {
	int edad = 0;

	printf("Introduce tu edad: \n");
	scanf_s("%d", &edad);

	if (edad < 4) {
		printf("Entras gratis");
	}

	else if (edad >= 4 && edad <= 18) {
		printf("Tienes que pagar 5 euros");
	}

	else if(edad>18) {
		printf("Tienes mas de 18, tienes que pagar 10 euros");
	}
}
*/

//Exercici arrays
/*
//  1. Suma de elementos de un array

#include <stdio.h>

int main() {
	
	int v1[5] = { 1, 2, 3, 4, 5 };
	int suma = 0;

	for (int i = 0; i < 5; i++) {
		suma+=v1[i];
	}
	
	printf("El resultado de la suma es de: %d", suma);
}
*/
/*
// 2. Encontrar el máximo y mínimo en un array

#include <stdio.h>

int main() {

	int v1[5] = { 3, 5, 7, 2, 8 };
	int max = v1[0];
	int min = v1[0];

	for (int i = 0; i < 5; i++) {
		
		if (v1[i] > max) {
			max = v1[i];
		}

		if (v1[i] < min) {
			min = v1[i];
		}
	}

	printf("El resultado de min es: %d el de max es: %d", min, max);
}
*/
/*
// 3. Invertir un array
#include <stdio.h>

int main() {
	
	int v1[5]={ 1, 2, 3, 4, 5 };
	int v2[5];

	printf("Vamos a invertir un array: \n");

	printf("El array antes de invertirse es:");

	for (int i = 0; i < 5; i++) {
		printf(" %d", v1[i]);
		v2[i] = v1[4-i];
	}
	printf("\n");

	printf("El string despues de invertirse es de: \n");
	for (int i = 0; i < 5; i++) {
		printf(" %d", v2[i]);
	}
}
*/
/*
// 4. Contar números pares e impares

#include <stdio.h>

int main() {
	
	int v1[5] = { 1, 2, 3, 4, 5 };
	int par = 0;
	int impar = 0;

	for (int i = 0; i < 5; i++){
		if (v1[i] % 2 == 0) {
			par++;
		}

		else {
			impar++;
		}
	}

	printf("pares = %d \nImpares = %d", par, impar);
}
*/
/*
#include <stdio.h>

//5. Promedio de los elementos de un array

int main(){
	int v1[4] = { 10, 20, 30, 40 };
	int resultado = 0;

	for (int i = 0; i < 4; i++) {
		resultado += v1[i];
	}

	resultado = resultado / 4;
	printf("El promedio de los elementos del array es de: %d", resultado);
}
*/
/*
#include <stdio.h>

//6. Multiplicación de elementos por una constante
int main() {
	
	int v1[3] = { 1, 2, 3 };
	int constante = 3;

	for (int i = 0; i < 3; i++) {
		v1[i] = v1[i] * constante;
		printf("%d", v1[i]);
	}
}
*/
/*
//Rotar un array a la derecha

#include <stdio.h>

int main() {

	int v1[5] = { 1, 2, 3, 4, 5 };

	v1[4] == v1[0];
	printf("%d", v1[4]);

	for (int i = 0; i < 4; i++) {
		printf("%d", v1[i]);
	}
}
*/
/*
//8. Buscar un elemento en un array

#include <stdio.h>
int main() {

	int v1[5] = { 4, 8, 6, 1, 9 };

	for (int i = 0; i < 5; i++) {
		
		if (v1[i] == 6) {
			printf("El numero 6 esta en la posicion: %d", i);
		}
	}
}
*/
/*
//9. Sumar dos arrays

#include <stdio.h>

int main() {

	int v1[3] = { 1, 2, 3 };
	int v2[3] = { 4, 5, 6 };
	int resultado = 0;

	for (int i = 0; i < 3; i++) {
		resultado = v1[i] + v2[i];
		printf(" %d", resultado);
	}
}
*/

//Repaso actividad 2 condicionales
/*
//Ej 1
#include <stdio.h>

int main() {

	int num1=0;
	int num2=0;
	int resultado = 0;

	printf("Introduce el primer numero:\n", num1);
	scanf_s("%d", &num1);

	printf("Introduce el segundo numero:\n", num2);
	scanf_s("%d", &num2);

	if (num1 == num2) {
		resultado = num1 * num2;
	}

	else if (num1 > num2) {
		resultado = num1 - num2;
	}

	else {
		resultado = num1 + num2;
	}
	
	
	printf("%d", resultado);
}
*/
/*
//Ej2

#include <stdio.h>

int main() {
	int num1, num2, num3;

	printf("Introduce los 3 numeros: \n");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	if (num1 > num2 && num1 > num3) {
		printf("El numero mas grande es: %d", num1);
	}

	else if (num2 > num1 && num2 > num3) {
		printf("El numero mas grande es: %d", num2);
	}

	else {
		printf("El numero mas grande es: %d", num3);
	}
}
*/
/*
//Ej 3

#include <stdio.h>

int main() {

	int horas;
	int horasExtra=0;
	int salario=0;

	printf("Introduce la cantidad de horas que has trabajado: \n");
	scanf_s("%d", &horas);

	if (horas <= 40) {
		salario = horas * 20;
	}

	if (horas > 40) {
		horasExtra = horas - 40;
		horasExtra = horasExtra * 40;
		salario = (40 * 20) + horasExtra;
	}

	printf("Este mes has trabajado %d horas, y cobraras: %d euros",horas,salario);
}
*/
/*
//Ej 4

#include <stdio.h>

int main() {

	int pulsaciones;
	char genero;
	int edad;

	printf("Introduce tu edad: \n");
	scanf_s("%d", &edad);

	printf("Introduce tu genero (f=femenino)(m=masculino): \n");
	scanf_s(" %c", &genero);

	if (genero == 'f') {
		printf("Has escogido el genero femenino\n");
		pulsaciones = (220 - edad) / 10;
	}

	else if (genero == 'm') {
		printf("Has escogido el genero masculino\n");
		pulsaciones = (210 - edad) / 10;
	}

	printf("%d", pulsaciones);
}
*/
/*
//Ejercicio 5 con bucle

#include <stdio.h>

int main() {

	int bolita = 0;
	int precio=0;
	int precioFinal = 0;

	printf("Introduce el precio total de la compra: \n");
	scanf_s("%d", &precio);

	while (bolita !=1 && bolita != 2 && bolita != 3 && bolita != 4 && bolita != 5){
		
		printf("Introduce el color de la bolita que le ha tocado (1: Blanco, 2:Verde, 3: Amarilla, 4: Azul, 5: Roja: \n");
		scanf_s("%d", &bolita);

		switch (bolita) {

		case 1: {
			printf("Has introducido la bolita blanca, no se te efectuara descuento alguno\n");
			printf("El total de tu compra es de: %d", precio);
			break;
		}

		case 2: {
			printf("Has introducido la bolita verde, tienes un 10 porciento de descuento\n");
			precioFinal = precio * 0.10;
			precio -= precioFinal;
			printf("El total de tu compra es de: %d", precio);
			break;
		}

		case 3: {
			printf("Has introducido la bolita amarilla, tienes un 25 porciento de descuento\n");
			precioFinal = precio * 0.25;
			precio -= precioFinal;
			printf("El total de tu compra es de: %d", precio);
			break;
		}

		case 4: {
			printf("Has introducido la bolita azul, tienes un 50 porciento de descuento\n");
			precioFinal = precio * 0.50;
			precio -= precioFinal;
			printf("El total de tu compra es de: %d", precio);
			break;
		}

		case 5: {
			printf("Has introducido la bolita roja, tienes un 100 porciento de descuento\n");
			precio = 0;
			printf("El total de tu compra es de: %d", precio);
			break;
		}

		default:
			printf("La bolita que has introducido no existe, vuelve a intentarlo\n");
			break;
		}
	}
}
*/

//Repaso actividad 3 Bucles
/*
//Ejercicio 1 bucle for
#include <stdio.h>

int main() {

	for (int i = 0; i <= 100; i=i+5) {
		printf(" %d",i);
	}
}
*/
/*
#include <stdio.h>

int main() {

	int num = 0;

	while (num<=100)
	{
		printf(" %d", num);
		num = num + 5;
	}
}
*/
/*
#include <stdio.h>

int main() {

	int num = 0;

	do {
		printf(" %d", num);
		num += 5;
	} 
	while (num<=100);
}
*/
/*
#include <stdio.h>

int main() {

	for (int i = 320; i >= 160; i -= 20) {
		printf(" %d", i);
	}
}
*/
/*
#include <stdio.h>

int main() {

	int num = 320;

	while (num>=160)
	{
		printf(" %d", num);
		num -= 20;
	}
}
*/
/*
#include <stdio.h>

int main() {

	int num = 320;

	do
	{
		printf(" %d", num);
		num -= 20;
	} while (num>=160);
}
*/
/*
//Ejercicio 7

#include <stdio.h>

int main() {

	int code = 1234;
	int code_usu;

	printf("Introduce el numero para abrir la caja fuerte: \n");
	scanf_s("%d", &code_usu);

	if (code_usu == code) {
		printf("La caja fuerte se ha abierto satisfactoriamente");
	}

	else {
		printf("Lo siento esa no es la combinacion");
	}
}
*/
/*
//Ejercicio 8

#include <stdio.h>

int main() {
	
	int code = 1234;
	int code_usu;
	int intentos = 4;

	do
	{
		printf("Introduce el numero para abrir la caja fuerte: \n");
		scanf_s("%d", &code_usu);

		if (code_usu == code) {
			printf("La caja fuerte se ha abierto satisfactoriamente\n");
			return 0;
		}

		else {
			printf("Lo siento esa no es la combinacion\n");
			intentos--;
			printf("Te quedan: %d intentos\n", intentos);
		}

	} while (intentos>0);
	
}
*/
/*
#include <stdio.h>

int main() {

	int num = 0;
	int digitos = 0;

	printf("Introduce un numero para saber los digitos que tiene: \n");
	scanf_s("%d", &num);

	if (num == 0) {
		digitos = 1;
	}

	else {
	while (num > 0) {
		num /= 10;
		digitos++;
	}
	}
	printf("Tiene %d caracteres", digitos);

}
*/
/*
#include <stdio.h>

int main() {

	int num = 0;
	int primo = 1;

	printf("Introduce un numero para saber si es primo o no: \n");
	scanf_s("%d", &num);

	if (num <= 1) {
		printf("No es primo");
	}

	for (int i = 2; i < num; i++) {
		
		if (num%i==0) {
			primo = 0;
			break;
		}
	}

	if (primo == 0) {
		printf("Numero no primo");
	}

	else {
		printf("Numero primo");
	}
}
*/
/*
#include <stdio.h>

int main() {

	int num = 0;
	int contador = 0;

	printf("Introduce un numero para saber los digitos que tiene: \n");
	scanf_s("%d", &num);


	if (num == 0) {
		contador = 1;
	}

	else{
		
		while (num > 0) {
			num /= 10;
			contador++;
		}
	}
	printf("El numero introducido tiene: %d digitos", contador);
}
*/

//Vectores

/*
#include <stdio.h>

int main() {

	int v1[20]{ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int resultado = 0;
	int mayor = v1[0];

	for (int i = 0; i < 20; i++) {
		resultado += v1[i];
	}

	printf("La suma total es de: %d\n", resultado);

	for (int i = 0; i < 20; i++) {
		
		if (v1[i] > mayor) {
			mayor = v1[i];
		}
	}
	printf("El numero mas grande es el: %d", mayor);
}
*/
/*
#include <stdio.h>

int main() {

	int v1[12] = {2,7,4,9,3,9,12,5,4,1,2,6};
	int v2[12];
	int v3[12];

	for (int i = 0; i < 12; i++) {
		v2[i] = v1[11 - i];
		printf("%d\n", v1[i]);
	}

	printf("El vector despues de invertirlo es: \n");
	for (int i = 0; i < 12; i++) {
		printf("%d\n", v2[i]);
	}

	printf("\nEl vector substituyendo los valores mayores que 5 por -1 es: \n");
	for (int i = 0; i < 12; i++) {
		
		v3[i] = v1[i];
		
		if (v3[i] > 5) {
			v3[i] = -1;
			printf(" %d", v3[i]);
		}

		else {
			printf(" %d", v3[i]);
		}
	}
}
*/
/*
#include <stdio.h>

int main() {

	int v1[3];
	int v2[3];
	int resultado = 0;

	printf("Introduce los elementos del primer array para realizar el producto escalar: \n");

	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &v1[i]);
	}

	printf("Introduce los elementos del segundo array para realizar el producto escalar: \n");

	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &v2[i]);
	}

	for (int i = 0; i < 3; i++) {
		resultado += v1[i] * v2[i];
	}

	printf("El resultado del producto escalar es de: %d", resultado);
}
*/
/*
#include <stdio.h>

int main() {

	int v1[10] = {1,2,3,4,5,6,7,8,9,10};
	int v2[10] = {10,9,8,7,7,1,1,25,10,3};
	int v3[10];

	for (int i = 0; i < 10; i++) {
		
		if (v1[i] > v2[i]) {
			v3[i] = v1[i] + v2[i];
		}

		else if (v1[i] < v2[i]) {
			v3[i] = v1[i] - v2[i];
		}

		printf(" %d", v3[i]);
	}
}
*/
/*
//Ej 5
#include <stdio.h>

int main() {

	int v1[6];
	int menor;
	int mayor;

	printf("Introduce los valores del vector: \n");
	scanf_s("%d", &v1[0]);

	menor = v1[0];
	mayor = v1[0];

	for (int i = 1; i <= 4; i++) {
		
		scanf_s("%d", &v1[i]);

		if (v1[i] > mayor) {
			mayor = v1[i];
		}

		if (v1[i] < menor) {
			menor = v1[i];
		}
	}

	printf("El numero mayor es: %d\n", mayor);
	printf("El numero menor es: %d\n", menor);

	printf("\n");

	for (int i = 0; i < 6; i++) {
		v1[5] = mayor + menor;
		printf(" %d", v1[i]);
	}

}
*/
/*
//Ej 6

#include <stdio.h>

int main() {

	int v1[4];

	printf("Introduce los elementos del array: \n");

	for (int i = 0; i < 4; i++) {
		scanf_s("%d", &v1[i]);

		if (v1[i] > 10) {
			v1[i] *= 2;
		}
	}

	for (int i = 0; i < 4; i++) {
		printf(" %d", v1[i]);
	}
}
*/
/*
#include <stdio.h>

int main() {

	int v1[6]{1,2,3,4,5,6};
	int temp = 0;
	int pares = 0;


	printf("Este es el vector antes de invertirlo: \n");
	for (int i = 0; i < 6; i++) {
		printf(" %d", v1[i]);
	}

	printf("\nEste es el vector despues: \n");
	for (int i = 0; i < 3; i++) {
		temp = v1[i];
		v1[i] = v1[5 - i];
		v1[5 - i] = temp;
	}

	for (int i = 0; i < 6; i++) {
		printf(" %d", v1[i]);

		if (v1[i] % 2 == 0) {
			pares++;
		}
	}

	printf("\nEl vector tiene %d numeros pares", pares);
}
*/
/*
#include <stdio.h>

int main() {

	int v1[5] = { 1,2,3,4,5};
	int resultado = 0;

	for (int i = 0; i < 5; i++) {
		resultado += v1[i];
	}

	printf(" %d", resultado);
}
*/
/*
#include <stdio.h>

int main() {

	int v1[5] = { 3, 5, 7, 2, 8 };
	int max = v1[0];
	int min = v1[0];

	for (int i = 0; i < 5; i++) {

		if (v1[i] > max) {
			max = v1[i];
		}

		if (v1[i] < min) {
			min = v1[i];
		}
	}

	printf("El valor minimo es: %d\n", min);
	printf("El valor maximo es: %d\n", max);
}
*/
/*
#include <stdio.h>

int main() {

	int v1[5]{ 1,2,3,4,5 };
	int v2[5];
	

	printf("Este es el array despues de invertirlo: \n");
	for (int i = 0; i < 5; i++) {
		v2[i] = v1[4 - i];
		printf("%d\n", v2[i]);
	}
}
*/
/*
#include <stdio.h>

int main() {

	int v1[5]{ 1,2,3,4,5 };
	int pares = 0;
	int impares = 0;

	for (int i = 0; i < 5; i++) {

		if (v1[i] % 2 == 0) {
			pares++;
		}

		else {
			impares++;
		}
	}

	printf("El vector, tiene %d pares y %d impares", pares, impares);
}
*/
/*
#include <stdio.h>

int main() {

	int v1[4] = { 10,20,30,40 };
	int resultado = 0;

	for (int i = 0; i < 4; i++) {
		resultado += v1[i];
	}

	resultado = resultado / 4;
	printf("%d", resultado);
}
*/
/*
#include <stdio.h>

int main() {

	int v1[3] = { 1,2,3 };
	int const constante = 3;

	for (int i = 0; i < 3; i++) {
		v1[i] = v1[i] * constante;

		printf(" %d", v1[i]);
	}
}
*/
/*
#include <stdio.h>

int main() {

	int v1[5] = { 1,2,3,4,5};
	int temp = v1[4];

	for (int i = 4; i > 0; i--) {
		v1[i] = v1[i - 1];
	}

	for (int i = 0; i < 5; i++) {
		v1[0] = temp;
		printf(" %d", v1[i]);
	}
}
*/
/*
//Ejercicio 8 arrays

#include <stdio.h>

int main() {

	int v1[5] = { 4, 8, 6, 1, 9 };
	int num = 0;

	printf("Introduce el numero a buscar: \n");
	scanf_s("%d", &num);


	for (int i = 0; i < 5; i++) {

		if (num == v1[i]) {
			printf("Elemento encontrado en la posicion: %d", i);
		}
	}

}
*/
/*
#include <stdio.h>

int main() {

	int v1[3] = { 1,2,3 };
	int v2[3] = { 4,5,6 };
	int resultado[3];

	for (int i = 0; i < 3; i++) {
		resultado[i] = v1[i] + v2[i];

		printf(" %d", resultado[i]);
	}
}
*/
/*
#include <stdio.h>

int main() {
	
	int v1[5] = { 1, 2, 3, 4, 5 };
	int temp = v1[4];

	for (int i = 4; i > 0; i--) {
		v1[i] = v1[i - 1];
	}

	for (int i = 0; i < 5; i++) {
		v1[0] = temp;
		printf(" %d", v1[i]);
	}
}
*/

//Repaso de nuevo desde 0
/*
#include <stdio.h>

int main(){

	int num1=0;
	int num2=0;
	int resultado = 0;

	printf("Introduce 2 numeros: \n");
	scanf_s("%d %d", &num1, &num2);

	if (num1 == num2) {
		resultado = num1 * num2;
	}

	else if (num1 > num2) {
		resultado = num1 - num2;
	}

	else {
		resultado = num1 + num2;
	}

	printf("resultado: %d", resultado);
}
*/
/*
#include <stdio.h>

int main() {

	printf("Los numeros multiplos de 5 del 0 al 100 son: \n");

	for (int i = 0; i <= 100; i += 5) {
		printf(" %d", i);
	}
}
*/
/*
#include <stdio.h>

int main() {

	int num = 0;

	while (num<=100)
	{
		printf(" %d", num);
		num += 5;
		
	}
}
*/



/*
//Strings

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 101  //Dejo el espacio de 1 mas, para el 0 del final

int main() {

	char palabra[MAX];
	char reves[MAX];

	printf("Introduce la frase que quieras: ");
	gets_s(palabra, MAX);
	printf("La frase que has escrito es: %s", palabra);

	printf("\n");

	printf("La frase que has escrito al reves es: ");

	int tam = strlen(palabra); //Esto me sirve para medir la palabra
	int j = 0; //Esto me sirve de variable temp

	for (int i = tam - 1; i >= 0; i--) { // Uso tam-1 para que no coja el 0 del final
		reves[j] = palabra[i];
		printf("%c", reves[j]);
		j++;
	}
	reves[j] = '\0'; //Pongo esto para añadir directamente el 0 final y que no haya problemas, sin esto el codigo no funcinaria

	if (strcmp(palabra, reves) == 0) {
		printf("\nLa palabra es Palindroma");
	}

	else {
		printf("\nLa palabra no es palindroma");
	}
}
*/

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define size 51
int main() {

	char frase[size];
	int a = 0, e = 0, Ii = 0, o = 0, u = 0;
	

	printf("Introduce una frase: \n");
	fgets(frase, size, stdin);//El stdin

	int longitud = strlen(frase);

	printf("La frase es de larga: %d caracteres\n", longitud-1);
	
	for (int i = 0; i < size; i++) {

		if (frase[i] == 'a') {
			a++;
		}
		
		if (frase[i] == 'e') {
			e++;
		}
		
		if (frase[i] == 'i') {
			Ii++;
		}
		
		if (frase[i] == 'o') {
			o++;
		}
		
		if (frase[i] == 'u') {
			u++;
		}
	}

	printf("La letra a aparece: %d\n", a);
	printf("La letra e aparece: %d\n", e);
	printf("La letra i aparece: %d\n", i);
	printf("La letra o aparece: %d\n", o);
	printf("La letra u aparece: %d\n", u);
}
*/

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define size 101
int main() {

	char cadena1[size];
	char cadena2[size];

	printf("Introduce una frase para cambiar las vocacales por puntos: \n");
	fgets(cadena1, size, stdin);

	strcpy_s(cadena2, cadena1);

	for (int i = 0; i < strlen(cadena1); i++) {

		if (cadena1[i] == 'a' || cadena1[i] == 'e' || cadena1[i] == 'i' || cadena1[i] == 'o' || cadena1[i] == 'u') {
			
			cadena2[i] = '.';
		}

		printf("%c", cadena2[i]);
	}
}
*/

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define size 51
int main() {


	char cadena[size];
	int v = 0;
	int c = 0;

	printf("Introduce una cadena de texto: \n");
	fgets(cadena, size, stdin);

	for (int i = 0; i < strlen(cadena); i++) {

		if (cadena[i] == 'a' || cadena[i] == 'e' || cadena[i] == 'i' || cadena[i] == 'o' || cadena[i] == 'u') {
			v++;
		}

		else if (cadena[i] == ' ') {

		}
		
		else {
			c++;
		}
	}

	printf("La frase tiene %d vocales y %d consonantes", v, c-1);

}
*/

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define size 101
int main() {

	char frase[size];
	int letras = 0;

	printf("Introduce una frase: \n");
	fgets(frase, size, stdin);

	frase[strcspn(frase, "\n")] = '\0';

	for (int i = 0; i < strlen(frase); i++) {
		
		if (frase[i] == ' ') {
			printf(" : (%d letras)\n", letras);
			letras = 0;
		}

		else {
			printf("%c", frase[i]);
			letras++;
		}

	}

	if (letras > 0) {
		printf(" : (%d letras)\n", letras);
	}
}
*/


/*
#include <stdio.h>

int main() {

	int v1[3] = {1,2,3};
	int v2[3] = {1,2,3};
	int v3[3];

	for (int i = 0; i < 3; i++) {
		v3[i] = v1[i]*v2[2-i];
	}

	for (int i = 0; i < 3; i++) {
		printf("%d", v3[i]);
	}
}
*/

/*
#include <stdio.h>
#include <stdlib.h>


int main() {

	char matrix[5][5];
	int posX = 0;
	int posY = 0;
	char accion;
	int endGame = 0;

	do {
		system("cls");
		for (int i = 0; i < 5; i++) {

			for (int j = 0; j < 5; j++) {

				matrix[i][j] = '-';
			}
		}

		matrix[posX][posY] = 'X';


		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {

				printf(" %c", matrix[i][j]);
			}

			printf("\n");
		}

		printf("Que accion quieres realizar:\n");
		scanf_s(" %c", &accion,1);

		switch (accion) {

		case 'W': {
			posX--;
			break;
		}

		case 'A': {
			posY--;
			break;
		}

		case 'S': {
			posX++;
			break;
		}

		case 'D': {
			posY++;
			break;
		}
		default:
			break;
		}
	} while (!(posX== 4 && posY==4));
}
*/

/*

#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main() {
	
	char palabra[5] = { "Hola" };
	char palabraEscondida[5] = { "----" };
	int size = strlen(palabra);
	int tries = 5;
	int aciertos = 0;
	char letra=0;

	do {
		for (int i = 0; i < size; i++) {

			printf(" - ");
		}
		scanf_s(" %c ", &letra,1);

	} while (tries >0 || aciertos<size );

}
*/

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define size 51
int main() {

	char frase[size];

	printf("Introduce una frase con 2 o mas espacios para verla sin espacios: \n");
	fgets(frase, size, stdin);

	frase[strcspn(frase, "\n")] = '\0';

	for (int i = 0; i < strlen(frase); i++) {

		if (frase[i] >= ' ') {
			



		}

		else {
			frase[i] = frase[i];
		}
	}

	for (int i = 0; i < strlen(frase); i++) {
		printf("%c", frase[i]);
	}
}
*/

/*
#include<stdio.h>

int main() {

	int num = 0;

	printf("Introduce un numero entero: \n");
	scanf_s("%d", &num);

	if (num % 3 == 0 && num % 5 == 0) {
		printf("FizzBuzz");
	}

	else if (num % 3 == 0) {
		printf("Fizz");
	}

	else if (num % 5 == 0) {
		printf("Buzz");
	}

	else {
		printf("El numero no es divisible ni por 3 ni por 5, el numero introducido es: %d", num);
	}
}
*/

/*
#include <stdio.h>

int main() {

	int num = 0;
	int resultado = 0;

	while (num>=0) {

		printf("Introduce numeros enteros: \n");
		scanf_s("%d", &num);
		if (num > 0) {
			resultado += num;
		}
	}

	printf("El resultado es de: %d", resultado);
}
*/

//Ej 3 practica para examen
/*
#include <stdio.h>

int main() {

	int combinacion = 1234;
	int c_usu = 0;
	int intentos = 4;

	while (intentos > 0) {

		printf("Introduce la combinacion para abrir la caja: \n");
		scanf_s("%d", &c_usu);

		if (c_usu == combinacion) {

			printf("La caja fuerte se ha abierto satisfactoriamente\n");
			return 0;
		}
		else {
			printf("Esa no es la combinacion\n");
			intentos--;
		}

		if (intentos <= 0) {
			printf("Lo siento, no tienes mas intentos");
		}
	}
}
*/
/*
//Ej 4 practica para el examen

#include <stdio.h>

int main() {
	int num[5];
	int max;

	printf("Introduce 5 numeros: \n");

	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &num[i]);

		if (num[i] > max) {
			max = num[i];
		}
	}

	printf("El numero mas grande es: %d", max);
}
*/

/*
//Ej 5

#include <stdio.h>

int main() {

	int num[5];
	int reves[5];

	printf("Introduce numeros para desplazarlos con un array:\n");

	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &num[i]);
	}

	reves[0] = num[4];
	for (int i = 1; i < 5; i++) {
		reves[i] = num[i-1];
	}

	for (int i = 0; i < 5; i++) {
		printf("%d", reves[i]);
	}
}
*/

/*
#include <stdio.h>

int main() {

	int v1[3][3];

	printf("Introduce los datos de la matriz: \n");

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {
			scanf_s("%d", &v1[i][j]);
		}
	}

	for (int i = 0; i < 3; i++) {
		
		int sumaFila = 0;

		for (int j = 0; j < 3; j++) {
			
			sumaFila += v1[i] [j];
		}
		printf("Suma de la fila %d: %d\n", i + 1, sumaFila);
	}

}
*/

/*
#include <stdio.h>

int main() {

	char letra;

	scanf_s(" %c", &letra);

	if (!(letra == 'a' || letra == 'e' || letra == 'i' ||  letra == 'o' || letra == 'u')) { //El ! es para decir que no es igual
		printf("Es consonante\n");
	}
}
*/

/*
#include <stdio.h>

int main() {

	int puntosJugador[12];
	int total = 0;

	printf("Introduce numeros de jugador: \n");

	for (int i = 0; i < 12; i++) {

		scanf_s("%d", &puntosJugador[i]);
		total += puntosJugador[i];
	}

	printf("El resultado final es: %d\n", total);
	total = total / 12;
	printf("La media es: %d\n", total);

}
*/

/*
#include <stdio.h>

int main() {
	
	int v1[5];
	int v2[5];

	printf("Introduce 5 numeros: \n");

	//Introducimos los numeros y los leemos
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &v1[i]);
	}

	v2[0] = v1[4];

	for (int i = 1; i < 5; i++) {
		v2[i] = v1[i - 1];
	}

	for (int i = 0; i < 5; i++) {
		printf("%d", v2[i]);
	}
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int v1[5][5];
	srand(time(NULL));

	printf("Introduce los valores: \n");

	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < 5; j++) {
			
			v1[i][j] = rand() % 20000;
			
			if(v1[i][j] > 10000){
				v1[i][j] = 0;
			}

			printf("%d", v1[i][j]);
		}
	}
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {

	char catalan[3][100] = {"hola","cara","aigua"};
	char ingles[3][100] = {"hello","face","water"};
	char palabra[100];
	int estado;
	int pos;

	gets_s(palabra);

	for (int i = 0; i < 3; i++) {

		pos = i;

		if (strcmp(palabra, catalan[i]) == 0) {

			printf("%s", ingles[i]);
		}

	}
}
*/

/*
#include <stdio.h>

int main() {

	int v1[5] = { 1,2,3,4,5 };
	int v2[5];

	printf("Este es el array antes de modificarlo: \n");
	
	for (int i = 0; i < 5; i++) {
		printf(" %d", v1[i]);
	}

	printf("\nEste es el array una vez modificado: \n");
	
	v2[0] = v1[4];

	for (int i = 1; i < 5; i++) {
		v2[i] = v1[i - 1];
	}
	
	for (int i = 0; i < 5; i++) {
		printf(" %d", v2[i]);
	}
}
*/

/*
#include <stdio.h>

int main() {

	int combi = 1234;
	int combi_usu=0;
	int intentos = 4;

	do{

		printf("Introduce la clave: \n");
		scanf_s("%d", &combi_usu);

		if (combi == combi_usu) {
			printf("Has acertado");
		}

		else {
			printf("Has fallado");
			intentos--;
		}

	} while (intentos > 0 && combi_usu != combi);
}
*/

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	char palabra[6] = { "aadar" };
	int estado = 1;

	for (int i = 0; i < strlen(palabra) / 2; i++) {
		
		if (palabra[i] != palabra[strlen(palabra) - 1 - i]) {
			
			estado = 0;
		}

	}

	if (estado == 1) {
		printf("La palabra es palindroma");
	}
	
	else {
		printf("La palabra no es palindroma");
	}
}
*/

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {

	char palabra[12] = { "aa     da r" };

	for (int i = 0; i < strlen(palabra); i++) {

		printf("%c", palabra[i]);

		while (palabra[i] == ' ' && palabra[i + 1] == ' ') {
			i++;
		}
		
	}
}
*/

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	char palabra[100] = {"hola que tal me llamo Jan"};
	int numLetras = 0;

	for (int i = 0; i < strlen(palabra); i++) {

		if (palabra[i] != ' ') {
			numLetras++;
			printf("%c", palabra[i]);
		}

		else {
			printf(": % d\n", numLetras);
			numLetras = 0;
		}

	}

	if (numLetras > 0) {
		printf(": % d\n", numLetras);
	}
}
*/

/*
#include <stdio.h>

int main() {

	int num[3][3];

	printf("Introduce numeros:\n");

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {
			scanf_s("%d", &num[i][j]);
		}
	}

	for (int i = 0; i < 3; i++) {
		int suma = 0;

		for (int j = 0; j < 3; j++) {
			suma += num[i][j];
		}
		printf("La suma de la fila %d es de: %d\n", i+1, suma);
	}
}
*/

//Repaso final antes del examen:
/*
#include <stdio.h>

int main() {

	int horasWork = 0;
	int horasExtra = 0;
	int precio = 20;
	int salario = 0;

	printf("Introduce el numero de horas que has trabajado esta semana: \n");
	scanf_s("%d", &horasWork);

	if (horasWork > 40) {
		horasExtra = horasWork - 40;
		salario = (40 * precio) + (horasExtra * (precio * 2));
	}

	else {
		salario = horasWork * precio;
	}

	printf("Este mes has hecho %d horas, cobraras: %d euros", horasWork, salario);
}
*/

/*
#include <stdio.h>

int main() {
	
	int num = 0;
	int digitos = 1;
	int numero = 0;

	printf("Introduce un numero para saber cuantos digitos tiene: \n");
	scanf_s("%d", &num);

	numero = num;
	while (num >= 10) {
		
		if (num >= 10) {
			num = num / 10;
			digitos++;
		}
	}

	printf("El numero %d tiene %d digitos: ", numero, digitos);
}
*/

/*
#include <stdio.h>

int main() {
	
	int v1[20];
	int suma = 0;
	int pos = 0;

	printf("Introduce numeros: \n");

	for (int i = 0; i < 20; i++) {
		scanf_s("%d", &v1[i]);
	}

	int max = v1[0];

	for (int i = 0; i < 20; i++) {
		suma += v1[i];
		
		if (v1[i] > max) {
			max = v1[i];
			pos = i;
		}
	}

	printf("\nEl resultado de la suma es de: %d\n", suma);
	printf("El numero mas grande es: %d y su posicion es: %d", max, pos);
}
*/

/*
#include <stdio.h>

int main() {

	int v1[12];
	int v2[12];
	int v3[12];

	printf("Introduce los valores del array: \n");

	for (int i = 0; i < 12; i++) {
		scanf_s("%d", &v1[i]);
	}
	
	for (int i = 0; i < 12; i++) {
		v2[i] = v1[11 - i];
		printf(" %d", v2[i]);
	}
	
	for (int i = 0; i < 12; i++) {
		v3[i] = v1[i];
		if (v3[i] > 5) {
			v3[i] = -1;
		}
		printf(" %d", v3[i]);
	}
}
*/

/*
#include <stdio.h>

int main(){
	
	int v1[3];
	int v2[3];
	int resultado = 0;

	printf("Introduce los valores del primer vector: \n");

	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &v1[i]);

	}
	
	printf("Introduce los valores del segundo vector: \n");

	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &v2[i]);
	}

	for (int i = 0; i < 3; i++) {
		resultado += v1[i] * v2[i];
	}

	printf("El resultado del producto escalar es de: %d", resultado);
}
*/

/*
#include <stdio.h>

int main() {

	int v1[10];
	int v2[10];
	int v3[10];

	printf("Introduce los primeros 10 numeros: \n");

	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &v1[i]);
	}
	
	printf("Introduce los ultimos 10 numeros: \n");

	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &v2[i]);
	}

	for (int i = 0; i < 10; i++) {
		
		if (v1[i] > v2[i]) {
			v3[i] = v1[i] + v2[i];
		}
		else {
			v3[i] = v1[i] - v2[i];
		}

	}

	for (int i = 0; i < 10; i++) {
		printf(" %d", v3[i]);
	}

}
*/

/*
#include <stdio.h>

int main(){

	int v1[6];
	int max = v1[0];

	printf("Introduce valores para saber qual es mas grande o mas pequeño: \n");

	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &v1[i]);
	}
	int min =v1[0];

	for (int i = 0; i < 5; i++) {
		if (v1[i] > max) {
			max = v1[i];
		}

		if (v1[i] < min) {
			min = v1[i];
		}
	}

	printf("\nEl numero mas pequeño es: %d\n", min);
	printf("El numero mas grande es: %d\n", max);

	v1[5] = min + max;

	printf("\nEl vector final es: \n");
	for (int i = 0; i < 6; i++) {
		printf(" %d", v1[i]);
	}
}
*/

/*
//Ejercicio 6 vectores
#include <stdio.h>

int main() {

	int v1[4];

	printf("Introduce los valores del vector: \n");

	for (int i = 0; i < 4; i++) {
		scanf_s("%d", &v1[i]);
	}

	for (int i = 0; i < 4; i++) {
		if (v1[i] > 10) {
			v1[i] = v1[i] * 2;
		}
	}

	for (int i = 0; i < 4; i++) {
		
		printf("%d", v1[i]);
	}

}
*/

/*
#include <stdio.h>

int main() {

	int v1[6] = { 1, 2, 3, 4, 5, 6 };
	int temp = 0;
	int pares = 0;

	printf("Este es el vector antes de invertirlo:\n");
	for (int i = 0; i < 6; i++) {
		printf(" %d", v1[i]);
	}

	// Invertir el vector sobre sí mismo
	for (int i = 0; i < 3; i++) {
		temp = v1[i];
		v1[i] = v1[5 - i];
		v1[5 - i] = temp;
	}

	printf("\nEste es el vector después de invertirlo:\n");
	for (int i = 0; i < 6; i++) {
		printf(" %d", v1[i]);
	}

	for (int i = 0; i < 6; i++) {
		if (v1[i] % 2 == 0) {
			pares++;
		}
	}

	printf("Tiene %d numeros pares", pares);
}
*/

/*
#include <stdio.h>

int main() {
	
	int v1[5];
	int suma = 0;

	printf("Introduce los numeros para realizar la suma: \n");
	
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &v1[i]);
	}

	for (int i = 0; i < 5; i++) {
		suma += v1[i];
	}

	printf("%d", suma);
}
*/

/*
#include <stdio.h>

int main() {
	
	int v1[5];
	int max = v1[0];

	printf("Introduce numeros: \n");

	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &v1[i]);
	}

	int min = v1[0];

	for (int i = 0; i < 5; i++) {

		if (v1[i] > max) {
			max = v1[i];
		}

		if (v1[i] < min) {
			min = v1[i];
		}
	}
	printf("El valor maximo es: %d", max);
	printf("El valor minimo es: %d", min);
}
*/

/*
#include <stdio.h>

int main() {

	int v1[5] = { 1,2,3,4,5 };
	int v2[5];

	for (int i = 0; i < 5; i++) {
		v2[i] = v1[4 - i];
	}
	
	for (int i = 0; i < 5; i++) {
		printf("%d", v2[i]);
	}
}
*/

/*
#include <stdio.h>

int main() {

	int v1[6];
	int temp = 0;


	printf("Introduce los valores para invertir el array: \n");

	for (int i = 0; i < 6; i++) {
		scanf_s("%d", &v1[i]);
	}


	printf("Este es el vector antes de invertirlo: \n");
	for (int i = 0; i < 6; i++) {
		printf("%d", v1[i]);
	}
	
	for (int i = 0; i < 3; i++) {
		temp = v1[i];
		v1[i] = v1[5-i];
		v1[5 - i] = temp;
	}

	printf("\njEste es el vector despues de invertirlo: \n");
	for (int i = 0; i < 6; i++) {
		printf("%d", v1[i]);
	}
}
*/

/*
#include <stdio.h>

int main() {

	int v1[5];
	int v2[5];


	printf("Introduce valores: \n");

	for (int i = 0; i < 5 ; i++) {
		scanf_s("%d", &v1[i]);
	}

	v2[0] = v1[4];
	for (int i = 1; i < 5; i++) {
		v2[i] = v1[i-1];
	}

	for (int i = 0; i < 5; i++) {
		printf("%d", v2[i]);
	}
}
*/

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	char frase[101];
	int letras = 0;
	int espacio = 0;

	printf("Introduce una frase: \n");
	gets_s(frase);

	int tamano = strlen(frase);

	printf("Esta frase tiene: %d caracteres", tamano);

	for (int i = 0; i < tamano; i++) {
		if (frase[i] != ' ') {
			letras++;
		}

		else {
			espacio++;
		}
	}
	printf("Esta frase tiene: %d letras", letras);
	printf("Esta frase tiene: %d espacios", espacio);
	
}
*/

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {

	char frase[101];

	printf("Introduce una frase: \n");
	gets_s(frase);

	printf("Esta es la frase original: \n");

	for (int i = 0; i < strlen(frase); i++) {
		printf(" %c", frase[i]);
	}
	
	printf("\nEsta es la frase remplazando las vocales por *: \n");

	for (int i = 0; i < strlen(frase); i++) {
		if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u') {
			frase[i] = '*';
		}
	}
	
	for (int i = 0; i < strlen(frase); i++) {
		
		printf(" %c", frase[i]);
	}
}
*/

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	char frase[101];

	printf("Introduce una frase: \n");
	gets_s(frase);

	int tamano = 0;

	for (int i = 0; i < strlen(frase); i++) {

		if (frase[i] != ' ' && frase[i] != '\0') {
			tamano++;
			printf("%c", frase[i]);
		}

		else {
			if (tamano > 0) {
				printf(" (%d)\n", tamano);
				tamano = 0; // Reiniciamos para la siguiente palabra
			}
		}

	}
}
*/

/*
#include <stdio.h>

int main() {

	int	num = 0;
	int suma = 0;

	do
	{
		printf("Introduce numeros enteros: \n");
		scanf_s("%d", &num);
		suma += num;

	} while (num>=0);

	if (num < 0) {
		suma -= num;
	}
	printf("\nEl resultado final es: %d\n", suma);

}
*/

/*
#include <stdio.h>

int main() {

	int num[5];
	int resultado[5];

	printf("Introduce numeros para guardarlos en un array: \n");

	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &num[i]);
	}

	resultado[0] = num[4];
	for (int i = 1; i < 5; i++) {
		resultado[i] = num[i-1];
	}


	printf("Este es el array despues de invertirlo: \n");
	for (int i = 0; i < 5; i++) {
		printf("%d", resultado[i]);
	}
}
*/

/*
#include <stdio.h>

int main() {

	int v1[3][3];

	printf("Introduce numeros: \n");

	for (int i = 0; i < 3; i++) {
		
		for (int j = 0; j < 3; j++) {
			scanf_s("%d", &v1[i][j]);
		}
	}

	for (int i = 0; i < 3; i++) {

		int sumaFila = 0;
		
		for (int j = 0; j < 3; j++) {
			sumaFila += v1[i][j];
		}
		printf("El resultado de la fila %d es: %d\n", i+1, sumaFila);

	}
}
*/

/*
#include <stdio.h>

int main() {

	int v1[3][3];
	int max = v1[0][0];

	printf("Introduce numeros para rellenar la matriz: \n");

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf_s("%d", &v1[i][j]);
		}
	}

	int min = v1[0][0];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (v1[i][j] > max) {
				max = v1[i][j];
			}

			if (v1[i][j] < min) {
				min = v1[i][j];
			}
		}
	}

	printf("Valor min: %d\n", min);
	printf("Valor max: %d\n", max);

}
*/

/*

#include <stdio.h>
void calcularMedia(int arry[5], int tam) {  //Estas variables al terminar el void desaparecen, estas de arriba se copian de las de abajo, en este caso es void, pero podria ser todas las variables

	float resultado = 0;
	for (int i = 0; i < tam; i++) {
		resultado += arry[i];
	}
	printf("%f\n", resultado / tam);
	//Si la funcion tiene un tipo de dato hay que poner return resultado;
}

int main() {

	int v1[5] = { 2,6,8,10,1 };
	int tamanio = 4;
	
	//calcularMedia(v1, tamanio); //No hace falta poner el tamaño del array, porque lo coje de arriba directamente, de hecho no se puede poner, sino da error
	if (calcularMedia(v1, tamanio) >= 6) {

		printf("Eres un crack");
	}
}

*/

/*
#include <stdio.h>

void Bucle(){ //Funciones en mayuscula, variables en minuscula
	
	int seguir;
	printf("Quieres seguir: \n");
	scanf_s("%d", &seguir);

	if (seguir == 1) {
		Bucle();
	}
}


int main() {

	Bucle();
}
*/


#include <stdio.h>

void ImprimirHola(char _name[10]);
float CalcularMedia(float notas[20], int cantidad);

int main() {

	char name[10];
	gets_s(name);
	ImprimirHola(name);
	float DAM[5] = {3,7,6,9,10};
	CalcularMedia(DAM, 5);
}

void ImprimirHola(char _name[10]) {
	printf("Hello world %s", _name);
}

float CalcularMedia(float notas[20], int cantidad)
{
	float resultado = 0;

	for (int i = 0; i < cantidad; i++) {

		resultado += notas[i];
	}
	return resultado / cantidad;
}




//Hacer tabla de multiplicar con 1 o varias funciones