
//Teoria del tema
//Diferencia entre parametro y referencia:
//Parametro: Se pasa el valor por copia
//Referencia: Referencia son punteros * o &
//Cada variable tiene 1 ubicacion en memoria

/*
#include <stdio.h>
 
int Selector();
void Gestor(float* sensibilidad);
void Total(float * sense);
void Parcial(float* sense);
void Desactivar(float* sense);

int Selector() {

	int x;
	do
	{
		scanf_s("%d", &x);

	} while (!(x >= 0 && x <= 2));
	
	return x;
}

void Gestor(float* sensibilidad) {

	switch (Selector()) {

	case 0: {
		Desactivar(sensibilidad);
		break;
	}

	case 1: {
		Parcial(sensibilidad);
		break;
	}

	case 2: {
		Total(sensibilidad);
		break;
	}
	}
}

void Total(float* sense) {

	*sense = 1;
}

void Parcial(float* sense) {

	*sense = 0.5;
}

void Desactivar(float* sense) {

	*sense = 0;
}


int main() {
	float sensibilidad;
	Gestor(&sensibilidad);
	printf("La sensibilidad esta en modo %.2f", sensibilidad);
}
*/


//Funciones desde 0
/*
#include <stdio.h>

void Ejercicio();
int Suma(int a, int b);

int main() {
	Ejercicio();
}

void Ejercicio()
{
	int a = 0, b = 0;
	printf("Introduce numeros para realizar una suma: \n");
	scanf_s("%d %d", &a, &b);

	int resultado = Suma(a, b);
	printf("La suma es: %d\n", resultado);
}

int Suma(int a, int b) {
	return a + b;
}

*/

/*
#include <stdio.h>

void Mensaje();

int main(){
	Mensaje();
}


void Mensaje(){
	printf("Hola");
}
*/


/*
#include <stdio.h>

void Ejercicio();
void MostrarNumero(int num);


int main() {

	Ejercicio();
}

void Ejercicio() {
	int num;

	printf("Introduce un numero: \n");
	scanf_s("%d", &num);

	MostrarNumero(num);
}

void MostrarNumero(int num) {
	printf("El numero es: %d", num);
}
*/

/*
#include <stdio.h>

void Ejercicio();
int Cuadrado(int num);

int main() {

	Ejercicio();
}

void Ejercicio() {

	int num = 0;

	printf("Introduce un numero para saber su cuadrado: \n");
	scanf_s("%d", &num);

	int resultado = Cuadrado(num);
	printf("El resultado es: %d\n", resultado);
}

int Cuadrado(int num) {
	num *= num;
	return num;
}
*/

/*
#include <stdio.h>

int Suma(int a, int b);
int Resta(int a, int b);
void MostrarResultado(int x, int y);


int main() {

	int num1 = 0;
	int num2 = 0;

	printf("Introduce numeros para hacer la operacion: \n");
	scanf_s("%d %d", &num1, &num2);

	int resultadoSuma = Suma(num1, num2);
	int resultadoResta = Resta(num1, num2);

	MostrarResultado(resultadoSuma, resultadoResta);
}


int Suma(int a, int b) {
	int resultado = a + b;
	return resultado;
}

int Resta(int a, int b) {
	int resultado = a - b;
	return resultado;
}

void MostrarResultado(int x, int y){

	printf("El resultado de la suma es de: %d\n", x);
	printf("El resultado de la resta es de: %d\n", y);
	
}
*/

/*
#include <stdio.h>

int Suma(int a, int b);
int Resta(int a, int b);
void MostrarResultado(int sum, int rest);

int main() {

	int num1 = 0, num2 = 0;

	printf("Introduce 2 numeros: \n");
	scanf_s("%d %d", &num1, &num2);

	int MostrarSuma = Suma(num1,num2);
	int MostrarResta = Resta(num1,num2);

	MostrarResultado(MostrarSuma, MostrarResta);
}

int Suma(int a, int b) {
	return a + b;
}
int Resta(int a, int b) {
	return a - b;
}

void MostrarResultado(int sum, int rest) {
	printf("El resultado de la suma es de: %d\n", sum);
	printf("El resultado de la resta es de: %d\n", rest);
}
*/

/*
#include <stdio.h>

float Cuadrado(float lado);
float Rectangulo(float base, float altura);
float Triangulo(float base, float altura);


int main() {

	float lado=0;
	float base=0;
	float altura=0;

	printf("Introduce en cm la medida del lado: \n");
	scanf_s("%f", &lado);

	printf("Introduce en cm la medida de la base: \n");
	scanf_s("%f", &base);

	printf("Introduce en cm la medida de la altura: \n");
	scanf_s("%f", &altura);

	float areaC = Cuadrado(lado);
	float areaR = Rectangulo(lado, altura);
	float areaT = Triangulo(lado, altura);

	printf("El area del cuadrado es: %.2f\n", areaC);
	printf("El area del rectangulo es: %.2f\n", areaR);
	printf("El area del triangulo es: %.2f\n", areaT);
}

float Cuadrado(float lado) {
	return lado * lado;
}

float Rectangulo(float base, float altura) {
	return base * altura;
}

float Triangulo(float base, float altura) {
	return (base * altura) / 2;
}
*/

/*
#include <stdio.h>

void Ejercicio();
int Doblar(int n);

int main() {

	Ejercicio();
}


void Ejercicio() {

	int num = 0;

	printf("Introduce un valor para doblarlo: \n");
	scanf_s("%d", &num);

	int resultado = Doblar(num);

	printf("El doble de %d es: %d", num, resultado);
}

int Doblar(int n) {
	return n * 2;
}
*/

/*
#include <stdio.h>

void Ejercicio();
int MayorDeTres(int n1, int n2, int n3);


int main() {

	Ejercicio();
}

void Ejercicio() {

	int num1=0, num2=0, num3=0	;

	printf("Introduce 3 numeros para ver cual es el mayor: \n");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	int mayor = MayorDeTres(num1, num2, num3);

	printf("El numero mayor es: %d", mayor);
}

int MayorDeTres(int n1, int n2, int n3) {

	if (n1 > n2 && n1 > n3) {
		return n1;
	}

	else if(n2>n1 && n2>n3){
		return n2;
	}

	else if (n3 > n1 && n3 > n2) {
		return n3;
	}

}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int PedirNumero();
int GenerarAleatorio();
void RevisarNumero(int nume, int aleatorio);

int main(){
	
	int num = PedirNumero();
	int num_aleatorio = GenerarAleatorio();
	RevisarNumero(num, num_aleatorio);
}

int PedirNumero() {

	int num = 0;

	do
	{
		printf("Introduce un numero del 1 al 10: \n");
		scanf_s("%d", &num);

	} while (num > 0 && num > 10);

	return num;
}


int GenerarAleatorio() {

	srand(time(NULL));
	int aleatorio = rand() % 10;

	return aleatorio;

}

void RevisarNumero(int nume, int aleatorio) {

	printf("Numero introducido por el usuario: %d\n", nume);
	printf("Numero aleatorio: %d\n", aleatorio);

	if (nume == aleatorio) {
		printf("La maquina ha acertado\n");
	}

	else {
		printf("La maquina no ha acertado\n");
	}

}
*/

/*
#include <stdio.h>

int  PedirOpcion();
int Sumar(int a, int b);
int Resta(int a, int b);
int Multiplicacion(int a, int b);
int Division(int a, int b);

int main() {
	int op;
	int result;
	int num1, num2;
	printf("Introduce numeros para hacer opeaciones: \n");
	scanf_s("%d %d", &num1, &num2);

	op = PedirOpcion();

	switch (op)
	{
	case '+': result = Sumar(num1, num2); break;
	case '-': result = Resta(num1, num2); break;
	case '*': result = Multiplicacion(num1, num2); break;
	case '/': result = Division(num1, num2); break;
	}
	printf("Resultado: %d", result);
	
}

int  PedirOpcion() {
	
	char operacion;

	printf("Introduce la operacion que deseas realizar: \n");
	scanf_s(" %c", &operacion, 1);

	switch (operacion)
	{
	case '+': {
		printf("Has escogido la suma\n");
		break;
	}

	case '-': {
		printf("Has escogido la resta\n");
		break;
	}

	case '*': {
		printf("Has escogido la *\n");
		break;
	}

	case '/': {
		printf("Has escogido la /\n");
		break;
	}
	default:
		printf("Operacion no encontrada\n");
		break;
	}

	return operacion;
}

int Sumar(int a, int b) {
	return a + b;
}

int Resta(int a, int b) {
	return a - b;
}
int Multiplicacion(int a, int b) {
	return a * b;
}

int Division(int a, int b) {
	if (b == 0) {
		printf("No se puede hacer: \n");
	}

	else {
		return a / b;
	}
}
*/

/**/

/*
#include <stdio.h>

void PrimeraFuncion();

int main() {

	PrimeraFuncion();
}

void PrimeraFuncion() {
	printf("Hola, estoy aprendiendo funciones");
}
*/

/*
//Ejercicio 2
#include <stdio.h>

void Intro();
void NumeroEntero(int n);

int main() {

	Intro();
}

void Intro() {
	int num = 0;

	printf("Introduce un numero: \n");
	scanf_s("%d", &num);

	NumeroEntero(num);
}

void NumeroEntero(int n) {

	printf("El numero es: %d", n);
}
*/


/*
//Ejercicio 3
#include <stdio.h>

int Siete();


int main() {

	printf("El resultado es: %d", Siete());
}

int Siete() {

	return 7;
}
*/

/*
//Ejercicio 4
#include <stdio.h>

int Triple(int n);

int main() {

	int num = 0;

	printf("Introduce un numero para saber el mismo numero *3: \n");
	scanf_s("%d", &num);

	Triple(num);

	printf("%d", Triple(num));
}

int Triple(int n) {

	return n * 3;
}
*/

/*
//Ejercicio 5
#include <stdio.h>

void Pregunta();
int EsPar(int n);

int main() {

	Pregunta();
}

void Pregunta() {

	int num = 0;

	printf("Introduce un numero para saber si es par o impar: \n");
	scanf_s("%d", &num);

	EsPar(num);
}

int EsPar(int n) {

	if (n % 2 == 0) {
		printf("Es par\n");
	}

	else {
		printf("Es impar\n");
	}

	return n;
}
*/

/*
#include <stdio.h>

int Doblar(int n);
int TripleDelDoble(int n);

int main() {

	int num=0;

	printf("Introduce un numero para saber su doble y su triple del doble: \n");
	scanf_s("%d", &num);

	int doble = Doblar(num);
	printf("El numero introducido es: %d, y su doble es: %d\n", num, doble);

	int triple = TripleDelDoble(num);
	printf("El numero introducido es %d, y su triple del doble es: %d\n", num, triple);
}

int Doblar(int n) {
	return n * 2;
}

int TripleDelDoble(int n) {
	int triple = Doblar(n);
	return triple * 3;
}
*/

/*
#include <stdio.h>

int PedirNumero();
int Cuadrado(int n);
void MostrarResultado(int n, int cuadrado);

int main() {

	int n= PedirNumero();
	int c= Cuadrado(n);
	MostrarResultado(n,c);
}

int PedirNumero() {

	int num=0;

	do {
		printf("introduce un numero: \n");
		scanf_s("%d", &num);
	} while(num < 1 || num > 10);
		
	return num;
}

int Cuadrado(int n) {
	return n * n;
}

void MostrarResultado(int n, int cuadrado) {

	printf("El número es %d y su cuadrado es %d", n, cuadrado);
}

*/

/*
#include <stdio.h>

int main() {

	int num = 0;

	do
	{
		printf("%d\n", num);
		num += 5;
	} while (num<=100);

}
*/


/*
#include <stdio.h>

int Doble(int n);
int Triple(int doble);
void Resultados(int n, int doble);


int main() {
	

	int num = 0;

	printf("Introduce un numero, obtendras el doble: \n");
	scanf_s("%d", &num);

	int doble = Doble(num);
	int triple = Triple(num);

	Resultados(doble, triple);

}

int Doble(int n){
	return n * 2;
}

int Triple(int doble) {
	return doble * 3;
}

void Resultados(int doble, int triple) {
	printf("El doble es: %d\n", doble);
	printf("El triple es: %d\n", triple);
}

*/


/*
#include <stdio.h>

int Cuadrado(int n);
int Cubo(int n);
void Resultado(int cuadrao, int cub);

int main() {

	int num = 0;

	printf("Introduce un numero: \n");
	scanf_s("%d", &num);

	int cuadrao=Cuadrado(num);
	int cub=Cubo(num);

	Resultado(cuadrao, cub);
}


int Cuadrado(int n) {
	return n * n;
}

int Cubo(int n) {
	return n * n * n;
}


void Resultado(int cuadrao, int cub) {
	printf("El Cuadrado es: %d\n", cuadrao);
	printf("Su cubo es: %d\n", cub);

}
*/

/*
#include <stdio.h>

int Incremente(int n);
int Decremente(int n);
void Resultado(int incre, int decre);

int main() {

	int num = 0;

	printf("Introduce un numero: \n");
	scanf_s("%d", &num);

	int incre = Incremente(num);
	int decre = Decremente(num);

	Resultado(incre, decre);
}

int Incremente(int n) {
	return n + 5;
}

int Decremente(int n) {
	return n - 3;
}

void Resultado(int incre, int decre) {
	printf("Incrementado: %d\n", incre);
	printf("Decrementado: %d\n", decre);
}
*/

/*
#include <stdio.h>

int Suma(int n1, int n2);
int Resta(int n1, int n2);
void Resultado(int sum, int rest);

int main() {

	int num1 = 0, num2 = 0;

	printf("Introduce 2 numeros: \n");
	scanf_s("%d %d", &num1, &num2);

	int sum = Suma(num1, num2);
	int rest = Resta(num1, num2);

	Resultado(sum, rest);

}


int Suma(int n1, int n2) {
	return n1 + n2;
}

int Resta(int n1, int n2) {
	return n1 - n2;
}

void Resultado(int sum, int rest) {

	printf("La suma es: %d\n", sum);
	printf("La resta es: %d\n", rest);
}
*/

/*
#include <stdio.h>

int Doble(int n);
int Triple(int n);
void Resultado(int dobl, int tripl);

int main() {

	int num = 0;

	printf("Introduce un numero: \n");
	scanf_s("%d", &num);
	
	int dobl=Doble(num);
	int tripl=Triple(dobl);

	Resultado(dobl, tripl);
}

int Doble(int n) {
	return n * 2;
}

int Triple(int n) {
	return n * 3;
}

void Resultado(int dobl, int tripl) {

	printf("El doble es: %d\n", dobl);
	printf("El Triple del doble es: %d\n", tripl);
}
*/

/*
#include <stdio.h>

int Suma(int n1, int n2);
int Resta(int n1, int n2);
int Multiplicacion(int n1, int n2);
int Division(int n1, int n2);
void MostrarResultado(char operacion, int resultado);


int main() {

	int num1 = 0, num2 = 0;
	char operacion;
	int resultado = 0;

	printf("Introduce 2 numeros: \n");
	scanf_s("%d %d", &num1, &num2);

	printf("Introduce una operacion: ('+','-','*','/')\n");
	scanf_s(" %c", &operacion, 1);

	switch (operacion){

		case '+': {
			resultado = Suma(num1, num2);
			break;
		}

		case '-': {
			resultado = Resta(num1, num2);
			break;
		}
		case '*': {
			resultado = Multiplicacion(num1, num2);
			break;
		}
		case '/': {
			resultado = Division(num1, num2);
			break;
		}

		default:{
			printf("Operacion no valida\n");
			return 0;
	}
	
	}
	MostrarResultado(operacion, resultado);

}

int Suma(int n1, int n2) {
	return n1 + n2;
}

int Resta(int n1, int n2) {
	return n1 - n2;
}

int Multiplicacion(int n1, int n2) {
	return n1 * n2;
}

int Division(int n1, int n2) {

	if (n2 == 0) {
		printf("Error");
		return 0;
	}
	else {
		return n1 / n2;
	}
}

void MostrarResultado(char operacion, int resultado) {
	printf("El resultado de la operacion %c es: %d\n", operacion, resultado);
}

*/

/*
#include <stdio.h>

void Ejercicio();
int Negativo(int n);
void Resultado(int num, int neg);

int main() {

	Ejercicio();
}


void Ejercicio() {

	int num = 0;

	printf("Introduce un numero para saber si es positivo o negativo: \n");
	scanf_s("%d", &num);

	int neg = Negativo(num);

	Resultado(num,neg);
}

int Negativo(int n) {

	if (n < 0) {
		return 1;
	}

	else {
		return 0;
	}
}

void Resultado(int num, int neg) {

	if (neg == 1) {
		printf("El numero %d es negativo", num);
	}

	else {
		printf("El numero %d es positivo", num);
	}
	
}
*/


/*
#include <stdio.h>

void Ejercicio3();
void Media3(float n1, float n2, float n3);

int main() {

	Ejercicio3();
}


void Ejercicio3() {

	float num1 = 0, num2 = 0, num3 = 0;

	printf("Introduce 3 numeros para saber su media: \n");
	scanf_s("%f %f %f", &num1, &num2, &num3);

	Media3(num1, num2, num3);
}

void Media3(float n1, float n2, float n3) {

	float media = (n1 + n2 + n3) / 3;

	printf("La media de los 3 numeros introducidos es: %.2f\n", media);

}
*/

/*
#include <stdio.h>

int MayordeTres(int n1, int n2, int n3);
int Espar(int grande);
void Resultado(int paroimpar, int mayor);

int main(){

	int num1=0, num2=0, num3=0;

	printf("Introduce numeros para ver cual es el mayor: \n");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	int mayor = MayordeTres(num1, num2, num3);

	int paroimpar = Espar(mayor);
	
	Resultado(paroimpar, mayor);

}

int MayordeTres(int n1, int n2, int n3) {

	if (n1 > n2 && n1 > n3) {
		return n1;
	}

	else if (n2 > n1 && n2 > n3) {
		return n2;
	}

	else if (n3 > n1 && n3 > n2) {
		return n3;
	}
}

int Espar(int grande) {

	if (grande % 2 == 0) {
		return 1;
	}

	else {
		return 0;
	}

}

void Resultado(int paroimpar, int mayor) {

	printf("El mayor de los 3 numeros es: %d\n", mayor);

	if (paroimpar == 1) {
		printf("El mayor es par");
	}

	else {
		printf("El mayor es impar");
	}
}
*/


/*
#include <stdio.h>

int EsMultiplo(int n1,int n2);
void Resultado(int n1, int n2, int m);


int main() {

	int num1 = 0, num2 = 0;

	printf("Introduce 2 numeros: \n");
	scanf_s("%d %d", &num1, &num2);

	int multiplo = EsMultiplo(num1, num2);

	Resultado(num1, num2, multiplo);
}


int EsMultiplo(int n1, int n2) {

	if (n1 % n2 == 0) {
		return 1;
	}

	else {
		return 0;
	}
}

void Resultado(int n1, int n2, int m) {

	if (m == 1) {
		printf("%d es multiplo de %d\n",n1, n2);
	}

	else {
		printf("%d NO es multiplo de %d\n", n1, n2);
	}
}

*/

/*
#include <stdio.h>

int Doble(int n);
int Triple(int n);
int Cuadrado(int n);
void Resultado(int n, int r1, int r2, int r3);

int main() {

	int num = 0;

	printf("Introduce un numero: \n");
	scanf_s("%d", &num);

	int dobl = Doble(num);
	int tripl = Triple(dobl);
	int cuad = Cuadrado(tripl);

	Resultado(num, dobl, tripl, cuad);
}


int Doble(int n) {
	return n * 2;
}

int Triple(int n) {
	return n * 3;
}

int Cuadrado(int n) {
	return n * n;
}

void Resultado(int n, int r1, int r2, int r3) {
	printf("El doble de %d es de: %d\n", n, r1);

	printf("El triple de %d es de: %d\n",r1,r2);

	printf("El cuadrado de %d es de: %d\n", r2, r3);

}

*/

/*
#include <stdio.h>

void Ejercicio();
int SumaCinco(int n);
int RestaDos(int n);
int MultiplicaCuatro(int n);
int DivideEntreTres(int n);
void MostrarResultados(int n, int suma, int resta, int mult, int divi);

int main() {

	Ejercicio();

}

void Ejercicio() {
	int num =0;

	printf("Introduce un numero: \n");
	scanf_s("%d", &num);

	int sum = SumaCinco(num);
	int rest= RestaDos(num);
	int multi= MultiplicaCuatro(num);
	int divi=DivideEntreTres(num);

	MostrarResultados(num, sum, rest, multi, divi);
}


int SumaCinco(int n) {

	return n + 5;
}

int RestaDos(int n) {

	return n - 2;
}

int MultiplicaCuatro(int n) {

	return n * 4;
}

int DivideEntreTres(int n) {
	return n / 3;
}

void MostrarResultados(int n, int suma, int resta, int mult, int divi) {

	printf("\nEl resultado de la suma del numero %d es de: %d\n", n, suma);

	printf("El resultado de la resta del numero %d es de: %d\n", n, resta);

	printf("El resultado de la multiplicacion del numero %d es de: %d\n", n, mult);

	printf("El resultado de la division del numero %d es de: %d\n", n, divi);

}
*/

/*
#include <stdio.h>

void Ejercicio();
int Siguiente(int n);
int Anterior(int n);
int Doble(int n);
void Mostrar(int n, int sig, int ant, int dob);

int main() {

	Ejercicio();
}


void Ejercicio() {
	int num = 0;

	printf("Introduce un numero: \n");
	scanf_s("%d", &num);

	int sigui = Siguiente(num);
	int ante = Anterior(num);
	int dobl = Doble(num);

	Mostrar(num, sigui, ante, dobl);
}


int Siguiente(int n) {
	return n + 1;
}

int Anterior(int n) {
	return n - 1;
}

int Doble(int n) {
	return n * 2;
}

void Mostrar(int n, int sig, int ant, int dob) {

	printf("El siguiente del numero %d es: %d\n", n, sig);

	printf("El anterior del numero %d es: %d\n", n, ant);

	printf("El Doble del numero %d es: %d\n", n, dob);
}
*/

/*
#include <stdio.h>

int PositivoONegativo(int n);
int ParOImpar(int n);
void Resultados(int n, int positivoOnegativo, int parOimpar);

int main() {

	int num = 0;

	printf("Introduce un numero: \n");
	scanf_s("%d", &num);

	int posoneg = PositivoONegativo(num);
	int poimp = ParOImpar(num);

	Resultados(num, posoneg, poimp);
}

int PositivoONegativo(int n) {
	if (n < 0) {
		return -1; //-1=negativo
	}

	else {
		return 1; //Positivo
	}
}

int ParOImpar(int n) {

	if (n % 2 == 0) {
		return 5;//Par
	}
	else {
		return -1;//Impar
	}
}


void Resultados(int n, int positivoOnegativo, int parOimpar) {

	if (positivoOnegativo == -1) {
		printf("El numero %d es negativo\n", n);
	}

	else {
		printf("El numero %d es positivo\n", n);
	}

	if (parOimpar == 5) {
		printf("El numero %d es un Numero par\n", n);
	}

	else {
		printf("El numero %d es un Numero impar\n", n);
	}
}
*/

/*
#include <stdio.h>

void Ejercicio();
int Mayor(int n1, int n2, int n3);
int Menor(int n1, int n2, int n3);
int Media(int n1, int n2, int n3);
void Resultado(int mayor, int menor, int media);

int main() {

	Ejercicio();
}

void Ejercicio() {

	int num1=0, num2=0, num3=0;

	printf("Introduce 3 numeros enteros: \n");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	int mayor = Mayor(num1, num2, num3);

	int menor = Menor(num1, num2, num3);

	int media = Media(num1, num2, num3);

	Resultado(mayor, menor, media);
}

int Mayor(int n1, int n2, int n3) {

	if (n1 > n2 && n1 > n3) {
		return n1;
	}

	else if (n2 > n1 && n2 > n3) {
		return n2;
	}

	else if (n3 > n1 && n3 > n2) {
		return n3;
	}
}



int Menor(int n1, int n2, int n3) {
	
	//Menor
	if (n1 < n2 && n1 < n3) {
		return n1;
	}

	else if (n2 < n1 && n2 < n3) {
		return n2;
	}

	else if (n3 < n1 && n3 < n2) {
		return n3;
	}
}


int Media(int n1, int n2, int n3) {
	return (n1 + n2 + n3) / 3;
}

void Resultado(int mayor, int menor, int media) {

	printf("El numero mas grande es el: %d\n", mayor);

	printf("El numero mas pequeño es el : %d\n", menor);

	printf("La media de los 3 numeros introducidos es de: %d\n", media);
}
*/

//Punteros

/*
#include <stdio.h>

void Sumar5(int* num);

int main() {

	int x = 10;
	Sumar5(&x);
	printf("%d\n", x);
}


void Sumar5(int* num) {

	*num = *num + 5;

}
*/

/*
#include <stdio.h>

void Ejercicio();
void Intercambiar(int*n1, int* n2);

int main() {

	Ejercicio();
}

void Ejercicio() {

	int num1 = 0, num2 = 0;

	printf("Introduce 2 numeros: \n");
	scanf_s("%d %d", &num1, &num2);

	printf("Antes del intercambio: num1=%d, num2=%d\n",num1, num2);

	Intercambiar(&num1, &num2);


	printf("Despues del intercambio: num1=%d, num2=%d\n", num1, num2);

}


void Intercambiar(int* n1, int* n2) {

	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;

}
*/


/*
#include <stdio.h>

void Intercambiar(int* v1, int* v2);

int main() {

	int valor1 = 0, valor2 = 0;

	printf("Introduce 2 valores: \n");
	scanf_s("%d %d", &valor1, &valor2);

	Intercambiar(&valor1, &valor2);

}

void Intercambiar(int* v1, int* v2) {

	int temp = *v1;
	*v1 = *v2;
	*v2 = temp;

	printf("El valor 1 es: %d\n", *v1);
	printf("El valor 2 es: %d\n", *v2);
}

*/

/*

//Ejercicio 1
#include <stdio.h>

void Ejercicio1();
void Mult(float n1, float n2);

int main() {
	Ejercicio1();
}

void Ejercicio1() {

	float num1, num2;

	printf("Introduce 2 numeros: \n");
	scanf_s("%f %f", &num1, &num2);

	Mult(num1, num2);
}

void Mult(float n1, float n2) {

	float resultado = 0;
	resultado = n1 * n2;

	printf("El resultado es: %.2f", resultado);
}
*/

/*
//Ejercicio2
#include <stdio.h>

void Ejercicio2();
void Al_cuadrado(float n);

int main() {

	Ejercicio2();

}

void Ejercicio2() {

	float num=0;

	printf("Introduce un numero para calcular su cuadrado: \n");
	scanf_s("%f", &num);

	Al_cuadrado(num);
}

void Al_cuadrado(float n) {

	float resultado = 0;
	resultado = n * n;

	printf("El resultado es: %.2f", resultado);

}
*/


/*
//Ejercicio3
#include <stdio.h>

void Ejercicio3();
void Funpot(int base, int potencia);


int main() {

	Ejercicio3();
}

void Ejercicio3() {

	int num1=0, num2=0;

	printf("Introduce el numero: ");
	scanf_s("%d", &num1);

	printf("Introduce la potencia (entero positivo): ");
	scanf_s("%d", &num2);

	Funpot(num1, num2);
}

void Funpot(int base, int potencia) {

	int resultado = 1;

	for (int i = 1; i <= potencia; i++) {
		resultado *= base;
	}

	printf("El resultado de %d elevado a %d es de: %d", base, potencia, resultado);
}
*/

/*
//Ejercicio4

#include <stdio.h>

void Ejercicio4();
void ParteFracionaria(float n);

int main() {

	Ejercicio4();
}

void Ejercicio4() {

	float num = 0;

	printf("Introduce un numero para saber la parte fracionaria: \n");
	scanf_s("%f", &num);

	ParteFracionaria(num);
}

void ParteFracionaria(float n) {

	float resultado = n - (int)n; //Esto es un cast, cambiamos el valor de tipo float al int
	
	printf("El resultado es %.2f", resultado);
	
}
*/

/*
#include <stdio.h>

void Incidencias(int* alumno, int inci);

int main() {
	
	int alumnos[5] = {0,0,0,0,0};

	printf("Introduce el nombre del alumno: \n");
	printf("1: Ariel \n");
	printf("2: Martin\n");
	printf("3: Jan\n");
	printf("4: Marc\n");
	printf("5: Paco\n");

	Incidencias(&alumnos[2], 6);

}

void Incidencias(int* alumno, int inci) {
	*alumno = *alumno + inci;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int CaballoGanador();
void AssignarApuestaUsuario(int arr[], int cba[], int totalApostantes, int* bolsa);
void Gestor(int arr[], int cba[], int totalApostantes, int* bolsa);
int DineroaDevolver(int arr[], int cba[], int totalApostantes, int* bolsa, int CaballoGanador);


int main() {

	srand(time(NULL));

	int bolsa = 0;
	int totalApostantes = 20;
	int apostantes[20] = {10};
	int caballoApostado[20];

	Gestor(apostantes, caballoApostado, totalApostantes, &bolsa);
}

int CaballoGanador() {

	return rand() % 10;

}

void AssignarApuestaUsuario(int arr[], int cba[], int totalApostantes, int* bolsa) {

	int dinero = 0;

	for (int i = 0; i < totalApostantes; i++) {

		printf("Cuanto dinero quieres apostar? \n");
		scanf_s("%d", &dinero);

		arr[i] - dinero;
		*bolsa = *bolsa + dinero;

		printf("Que caballo apuestas? \n");
		scanf_s("%d", &dinero);

		cba[i] = dinero;
	}
}

void Gestor(int arr[], int cba[], int totalApostantes, int* bolsa) {

	int cg = CaballoGanador();
	AssignarApuestaUsuario(arr, cba, totalApostantes, bolsa);
	int dinero= DineroaDevolver(arr, cba, totalApostantes, bolsa, cg);
	

	for (int i = 0; i < totalApostantes; i++) {
		
		if (cba[i] = cg) {
			arr[i]+=dinero;
			printf(" Jugador %d : %d", i, arr[i]);
		}
	}

}

int DineroaDevolver(int arr[], int cba[], int totalApostantes, int* bolsa, int CaballoGanador) {

	int totalAciertos = 0;

	for (int i = 0; i < totalApostantes; i++) {
		if (cba[i] = CaballoGanador) {
			totalAciertos++;
		}
	}

	return *bolsa / totalAciertos;

}
*/

/*
#include <stdio.h>

void Ejercicio4();
void Devolver(float n);

int main() {

	Ejercicio4();
}

void Ejercicio4() {

	float num = 0;

	printf("Introduce un numero: \n");
	scanf_s("%f", &num);

	Devolver(num);
}

void Devolver(float n) {

	float decimal = n - (int)n;

	printf("El resultado es: %.2f", decimal);
}
*/

/*
#include <stdio.h>

void Ejercicio5();
void Cambio(int n, int* cien, int* cincuenta, int* veinte, int* diez, int* cinco, int* uno);

int main() {

	Ejercicio5();
}

void Ejercicio5() {

	int num = 0;

	printf("Introduce un numero: \n");
	scanf_s("%d", &num);

	int cien=0, cincuenta=0, veinte=0, diez=0, cinco=0, uno=0;

	Cambio(num, &cien, &cincuenta, &veinte, &diez, &cinco, &uno);

	printf("\nHas pedido %d dolares\n", num);
	printf("La maquina te ha entregado: \n");
	printf(" Cien: %d\n Cincuenta: %d\n Veinte: %d\n Diez: %d\n Cinco: %d\n Uno: %d\n", cien, cincuenta, veinte, diez, cinco, uno);
}

void Cambio(int n, int* cien, int* cincuenta, int* veinte, int* diez, int* cinco, int* uno) {
	
	do
	{
		if (n >= 100) {
			n = n - 100;
			*cien = *cien + 1;
		}

		else if (n >= 50) {
			n = n - 50;
			*cincuenta = *cincuenta + 1;
		}

		else if (n >= 20) {
			n = n - 20;
			*veinte = *veinte + 1;
		}

		else if (n >= 10) {
			n = n - 10;
			*diez = *diez + 1;
		}

		else if (n >= 5) {
			n = n - 5;
			*cinco = *cinco + 1;
		}

		else if (n >= 1) {
			n = n - 1;
			*uno = *uno + 1;
		}

	} while (n > 0);
}
*/

/*
#include <stdio.h>

void Ejercicio6();
void Tiempo(int totalS, int* h, int* min, int* sec);

int main() {

	Ejercicio6();
}

void Ejercicio6() {

	int totalSeg = 0;

	printf("Introduce un numero de segundos para calcular el tiempo en horas minutos y segundos: \n");
	scanf_s("%d", &totalSeg);

	int horas = 0, minutos = 0, segundos = 0;

	Tiempo(totalSeg, &horas, &minutos, &segundos);

	printf("La cantidad de: %d segundos es de:\n", totalSeg);
	printf("Horas: %d\nMinutos: %d\nSegundos: %d\n", horas, minutos, segundos);
	
}

void Tiempo(int totalS, int* h, int* min, int* sec) {

	do
	{
			if (totalS >= 3600) {
				totalS=totalS - 3600;
				*h = *h + 1;
			}

			else if (totalS >= 60) {
				totalS=totalS - 60;
				*min = *min + 1;
			}

			else if (totalS >= 1) {
				totalS=totalS - 1;
				*sec = *sec + 1;
			}
	
	} while (totalS > 0);
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int CaballoGanador();
void AssignarApuestaUsuario(int arr[], int cba[], int totalApostantes, int* bolsa);
void Gestor(int arr[], int cba[], int totalApostantes, int* bolsa);
int DineroaDevolver(int arr[], int cba[], int totalApostantes, int* bolsa, int CaballoGanador);


int main() {

	srand(time(NULL));

	int bolsa = 0;
	int totalApostantes = 20;
	int apostantes[20] = { 10 };
	int caballoApostado[20];

	Gestor(apostantes, caballoApostado, totalApostantes, &bolsa);
}

int CaballoGanador() {

	return rand() % 10;

}

void AssignarApuestaUsuario(int arr[], int cba[], int totalApostantes, int* bolsa) {

	int dinero = 0;

	for (int i = 0; i < totalApostantes; i++) {

		printf("Cuanto dinero quieres apostar? \n");
		scanf_s("%d", &dinero);

		arr[i] - dinero;
		*bolsa = *bolsa + dinero;

		printf("Que caballo apuestas? \n");
		scanf_s("%d", &dinero);

		cba[i] = dinero;
	}
}

void Gestor(int arr[], int cba[], int totalApostantes, int* bolsa) {

	int cg = CaballoGanador();
	AssignarApuestaUsuario(arr, cba, totalApostantes, bolsa);
	int dinero = DineroaDevolver(arr, cba, totalApostantes, bolsa, cg);


	for (int i = 0; i < totalApostantes; i++) {

		if (cba[i] = cg) {
			arr[i] += dinero;
			printf(" Jugador %d : %d", i, arr[i]);
		}
	}

}

int DineroaDevolver(int arr[], int cba[], int totalApostantes, int* bolsa, int CaballoGanador) {

	int totalAciertos = 0;

	for (int i = 0; i < totalApostantes; i++) {
		if (cba[i] = CaballoGanador) {
			totalAciertos++;
		}
	}

	return *bolsa / totalAciertos;

}
*/

/*
//Ejercicio7
#include <stdio.h>

void calc_años(int n, int* a, int* m, int* d);
void Ejercicio7();

int main() {
	Ejercicio7();
}

void Ejercicio7() {

	int num = 0;
	int anyo = 0, mes = 0, dia = 0;

	printf("Introduce quantos dias hace desde el dia 1/1/2000: \n");
	scanf_s("%d", &num);

	calc_años(num, &anyo, &mes, &dia);

	printf("Hace: \n");
	printf("Años: %d\nMeses: %d\nDias: %d\n", anyo, mes, dia);

	printf("La fecha de hoy es: %d/%d/%d", dia+1, mes+1, anyo+2000);
}

void calc_años(int n, int* a, int* m, int* d ) {

	do
	{
		if (n >= 365) {
			n = n - 365;
			*a = *a + 1;
		}

		else if (n >= 30) {
			n = n - 30;
			*m = *m + 1;
		}

		else if (n >= 1) {
			n = n - 1;
			*d = *d + 1;
		}
	
	} while (n>0);
	
}
*/

/*
//Ejercicio8
#include <stdio.h>

void PedirDatos();
int CalcularSuma(int vec[], int numVector);

int main() {

	PedirDatos();

}

void PedirDatos() {

	int v1[5];

	printf("Introduce 5 numeros: \n");
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &v1[i]);
	}

	int resultado = CalcularSuma(v1, 5); //En los vectores se le manda sin el vector, y luego el numero al lado

	printf("El resultado es: %d\n", resultado);
}

int CalcularSuma(int vec[], int numVector) {

	int resultado = 0;

	for (int i = 0; i < numVector; i++) {
		resultado += vec[i];
	}
	return resultado;
}
*/

/*
#include <stdio.h>

void PedirDatos();
void ComprobarOrdenamiento(int vec[], int tamanoVector);

int main() {
	PedirDatos();
	return 0;
}

void PedirDatos() {
	int v1[6];

	printf("Introduce 6 numeros:\n");
	for (int i = 0; i < 6; i++) {
		scanf_s("%d", &v1[i]);
	}

	ComprobarOrdenamiento(v1, 6);
}

void ComprobarOrdenamiento(int vec[], int tamanoVector) {
	int ordenado = 1;

	for (int i = 1; i < tamanoVector; i++) {
		if (vec[i] < vec[i - 1]) {
			ordenado = 0;
			break;
		}
	}

	if (ordenado) {
		printf("El vector esta ordenado correctamente.\n");
	}
	else {
		printf("El vector NO esta ordenado.\n");
	}
}
*/

/*
//Ejercicio 10
#include <stdio.h>

void Ejercicio10();
void CambiarSigno(int vec[], int tamano);
void MostrarVector(int vec[], int tamano);


int main() {
	Ejercicio10();
}

void Ejercicio10() {

	int v1[6];

	printf("Introduce los numeros del vector, para cambiarles el signo: \n");
	
	for (int i = 0; i < 6; i++) {
		scanf_s("%d", &v1[i]);
	}

	CambiarSigno(v1, 6);

	MostrarVector(v1, 6);
}

void CambiarSigno(int vec[], int tamano) {

	for (int i = 0; i < tamano; i++) {
		vec[i] = vec[i] * -1;
	}
}

void MostrarVector(int vec[], int tamano) {

	for (int i = 0; i < tamano; i++) {
		printf("%d\n", vec[i]);
	}
}
*/

/*
//Ejercicio11
#include <stdio.h>

void Ejercicio11();
void Impares(int vec[], int tamano);

int main() {
	
	Ejercicio11();

}

void Ejercicio11() {

	int v1[6];

	printf("Introduce numeros para saber quales son los pares: \n");
	
	for (int i = 0; i < 6; i++) {
		scanf_s("%d", &v1[i]);
	}

	Impares(v1, 6);

}

void Impares(int vec[], int tamano) {

	for (int i = 0; i < tamano; i++) {
		
		if (vec[i] % 2 == 0) {
			printf("%d\n", vec[i]);
		}
	}
}
*/

/*
//Ejercicio12

#include <stdio.h>

void Ejercicio12();
int MenorFila(int matriz[][3], int fila, int columnas);


int main() {

	Ejercicio12();
}

void Ejercicio12() {

	int v1[3][3];
	int fila = 0;

	printf("Introduce los numeros de la matriz: \n");
	
	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {
			scanf_s("%d", &v1[i][j]);
		}
	}

	printf("Introduce el numero de fila que quieres saber: \n");
	scanf_s("%d", &fila);

	int menor = MenorFila(v1,fila,3);

	printf("El numero mas pequeño de la fila: %d es el: %d", fila, menor);
}

int MenorFila(int matriz[][3], int fila, int columnas){

	int menor = matriz[fila][0];

	for (int i = 0; i < columnas; i++) {
		if (matriz[fila][i] < menor) {
			menor = matriz[fila][i];
		}
	}

	return menor;
}
*/

/*
//Ejercicio1
#include <stdio.h>

void Ejercicio1();
int ParoImpar(int n);


int main() {
	Ejercicio1();
}


void Ejercicio1() {

	int num = 0;

	printf("Introduce un numero para saber si es par o impar: \n");
	scanf_s("%d", &num);

	int resultado = ParoImpar(num);

	if (resultado == 1) {
		printf("\nEl numero introducido es par\n");
	}

	else {
		printf("El numero introducido es impar");
	}
}

int ParoImpar(int n) {

	if (n % 2 == 0) {
		return 1;
	}

	else {
		return 0;
	}

}
*/


/*
#include <stdio.h>

void Ejercicio2();
float Media2(float n1, float n2);


int main() {
	Ejercicio2();
}

void Ejercicio2() {

	float num1 = 0, num2 = 0;

	printf("Introduce 2 numeros para realizar la media: \n");
	scanf_s("%f %f", &num1, &num2);

	float media = Media2(num1, num2);

	printf("El resultado de la media es de: %.2f\n", media);
}

float Media2(float n1, float n2){

	return (n1+n2)/2;

}
*/

/*
#include <stdio.h>

void Ejercicio3();
void Media3(float n1, float n2, float n3);

int main() {
	Ejercicio3();
}

void Ejercicio3() {

	float num1 = 0, num2 = 0, num3 = 0;

	printf("Introduce 3 numeros para calcular la media: \n");
	scanf_s("%f %f %f", &num1, &num2, &num3);

	Media3(num1, num2, num3);
}

void Media3(float n1, float n2, float n3) {

	float media = (n1 + n2 + n3) / 3;
	printf("El resultado de la media de: %.2f + %.2f + %.2f es de: %.2f", n1, n2, n3, media);
}
*/

/*
//Ejercicio4
#include <stdio.h>

void Saludo();

int main() {
	Saludo();
}

void Saludo() {
	printf("Hola");
}
*/


/*
//Ejercicio 5
#include <stdio.h>

void Ejercicio5();
int Negativo(int n);

int main() {
	Ejercicio5();
}

void Ejercicio5() {

	int num = 0;

	printf("Introduce un numero para saber si es negativo o no: \n");
	scanf_s("%d", &num);


	int negativ = Negativo(num);

	if (negativ == 1) {
		printf("\nEl numero introducido es negativo");
	}

	else {
		printf("\nEl numero introducido es positivo");
	}
}

int Negativo(int n) {

	if (n < 0) {
		return 1;
	}

	else {
		return 0;
	}

}
*/

/*
#include <stdio.h>

void Ejercicio6();
float Suma(float n1, float n2);
float Resta(float n1, float n2);
float Multiplicacion(float n1, float n2);
float Division(float n1, float n2);

int main() {
	Ejercicio6();
}

void Ejercicio6() {

	float num1 = 0, num2 = 0;

	printf("Introduce 2 numeros para realizar la operacion: \n");
	scanf_s("%f %f", &num1, &num2);

	float S = Suma(num1, num2);
	float R = Resta(num1, num2);
	float M = Multiplicacion(num1, num2);
	float D = Division(num1, num2);

	printf("El resultado de la Suma es de: %.2f\n", S);
	printf("El resultado de la Resta es de: %.2f\n", R);
	printf("El resultado de la Multiplicacion es de: %.2f\n", M);
	
	if (D == -1) {
		printf("No se puede dividir entre 0");
	}

	else {
		printf("El resultado de la Division es de: %.2f\n", D);
	}
}

float Suma(float n1, float n2) {
	return n1 + n2;
}

float Resta(float n1, float n2) {
	return n1 - n2;
}

float Multiplicacion(float n1, float n2) {
	return n1 * n2;
}

float Division(float n1, float n2) {

	if (n2 == 0) {
		return -1;
	}

	else {
		return n1 / n2;
	}
}
*/

/*
#include <stdio.h>

void Ejercicio();
void analizarVector(int vec[], int tam, int* mayor, int* menor, float* promedio);


int main() {
	Ejercicio();
}

void Ejercicio() {

	int v1[10];


	printf("Introduce 10 numeros para guardarlos en un vector: \n");

	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &v1[i]);
	}

	int mayor=0, menor=0;
	float promedio=0;

	analizarVector(v1, 10, &mayor, &menor, &promedio);

	printf("El numero menor es: %d\n", menor);
	printf("El numero mayor es: %d\n", mayor);
	printf("El promedio es: %.2f\n", promedio);
}

void analizarVector(int vec[], int tam, int* mayor, int* menor, float* promedio) {
	
	*mayor = vec[0];
	*menor = vec[0];
	float suma = 0;

	for (int i = 0; i < 10; i++) {
		
		if (vec[i] > *mayor) {
			*mayor = vec[i];
		}

		if (vec[i] < *menor) {
			*menor = vec[i];
		}

		suma += vec[i];
		*promedio = suma / tam;
	}
}
*/

/*
#include <stdio.h>

void Ejercicio();
void ContarSignos(int vec[], int tamano, int* pos, int* neg, int* cero);


int main() {
	Ejercicio();
	return 0;
}

void Ejercicio() {

	int v1[8];

	printf("Introduce numeros para rellenar el vector: \n");
	
	for (int i = 0; i < 8; i++) {
		scanf_s("%d", &v1[i]);
	}

	int positivos = 0;
	int negativos = 0;
	int ceros = 0;

	ContarSignos(v1, 8, &positivos, &negativos, &ceros );

	printf("\nEl vector tiene: %d positivos\n", positivos);
	printf("El vector tiene: %d negativos\n", negativos);
	printf("El vector tiene: %d ceros\n", ceros);

}

void ContarSignos(int vec[], int tamano, int* pos, int* neg, int* cero) {

	for (int i = 0; i < tamano; i++) {
		if (vec[i] > 0) {
			*pos = *pos + 1;
		}

		else if (vec[i] < 0) {
			*neg = *neg + 1;
		}

		else {
			*cero = *cero + 1;
		}
	}
}
*/

/*
#include <stdio.h>

void Ejercicio();
void ContarParesImpares(int vec[], int tamano, int* par, int* impar, int* multi5);

int main() {
	Ejercicio();
	return 0;
}

void Ejercicio() {

	int v1[8];

	printf("Introduce numeros: \n");

	for (int i = 0; i < 8; i++) {
		scanf_s("%d", &v1[i]);
	}

	int pares = 0;
	int impares = 0;
	int multiples5 = 0;


	ContarParesImpares(v1, 8, &pares, &impares, &multiples5);

	printf("El vector tiene: %d pares\n", pares);
	printf("El vector tiene: %d impares\n", impares);
	printf("El vector tiene: %d multiplo de 5\n", multiples5);

}

void ContarParesImpares(int vec[], int tamano, int* par, int* impar, int* multi5) {

	for (int i = 0; i < tamano; i++) {
		if (vec[i] % 2 == 0) {
			*par = *par + 1;
		}

		else {
			*impar = *impar + 1;
		}

		if (vec[i] % 5 == 0) {
			*multi5 = *multi5 + 1;
		}
	}
}
*/

/*
#include <stdio.h>

void EjercicioF();
void segundoMayorMenor(int vec[], int tamano, int* segundoMayol, int* segundoMenol);

int main() {
	EjercicioF();
	return 0;
}

void EjercicioF() {

	int v1[8];

	printf("Introduce numeros para calcular el segundo mayor y el segundo menor: \n");

	for (int i = 0; i < 8; i++) {
		scanf_s("%d", &v1[i]);
	}

	int segundoMayor = 2147483647;
	int segundoMenor = -2147483648;

	segundoMayorMenor(v1, 8, &segundoMayor, &segundoMenor);


	printf("El segundo mayor es: %d\n", segundoMayor);
	printf("El segundo menor es: %d\n", segundoMenor);
}

void segundoMayorMenor(int vec[], int tamano, int* segundoMayol, int* segundoMenol) {

	int mayor = vec[0];
	int menor = vec[0];

	for (int i = 0; i < tamano; i++) {

		if (vec[i] > mayor) {
			*segundoMayol = mayor;
			mayor = vec[i];
		}

		else if (vec[i] > *segundoMayol && vec[i] != mayor) {
			*segundoMayol = vec[i];
		}

		if (vec[i] < menor) {
			*segundoMenol = menor;
			menor = vec[i];
		}

		else if (vec[i] < *segundoMenol && vec[i] != menor) {
			*segundoMenol = vec[i];
		}
	}
}
*/

/*
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void Juego();
int MoveJugador();
int MoveMaquina();
void Resultado(int movJugador, int movMaquina, int* vic, int* derr, int* empa);

int main() {
	Juego();
	return 0;
}

void Juego() {

	srand(time(NULL));

	int opcion = 5;
	char seguir ='s';

	int victorias = 0;
	int derrotas = 0;
	int empates = 0;
	
	do
	{
		int movimientoJugador = MoveJugador();
		int movimientomaquina = MoveMaquina();
		Resultado(movimientoJugador, movimientomaquina, &victorias, &derrotas, &empates);
		
		printf("Quieres seguir? s para seguir \n");
		scanf_s(" %c", &seguir, 1);

	} while (seguir =='s'); //s para seguir

	printf("Victorias: %d\n", victorias);
	printf("Derrotas: %d\n", derrotas);
	printf("Empates: %d\n", empates);
}

int MoveJugador() {

	int movimiento = 0; 
	do
	{
		printf("Introduce que accion quieres hacer: 1 Piedra, 2 Papel, 3 Tijeras \n");
		scanf_s("%d", &movimiento);

	} while (movimiento != 1 && movimiento != 2 && movimiento != 3);

	return movimiento;
}

int MoveMaquina() {
	return (rand() % 3) + 1;//Ponemos el +1 para que devuelva entre el 1-3
}

void Resultado(int movJugador, int movMaquina, int* vic, int* derr, int *empa) {

	if (movJugador == movMaquina) {
		*empa = *empa + 1;
	}

	else if ((movJugador == 1 && movMaquina == 3) || (movJugador == 2 && movMaquina == 1) || (movJugador == 3 && movMaquina == 2)) {
		*vic = *vic + 1;
	}

	else {
		*derr = *derr + 1;
	}
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define Tam 8

void Ejercicio();
void InicializaTablero(int m[Tam][Tam]);
void RellenarTablero(int m[Tam][Tam]);
void PintarTablero(int m[Tam][Tam]);

int main() {
	Ejercicio();
	return 0;
}

void Ejercicio() {

	srand(time(NULL));

	int v1[Tam][Tam];
	char seguir = 'n';

	do
	{

		InicializaTablero(v1);
		RellenarTablero(v1);
		PintarTablero(v1);

		printf("Quieres generar otro tablero? (n = NO / cualquier otra tecla = sí): \n");
		scanf_s(" %c", &seguir, 1);

	} while (seguir!='n');
	

}

void InicializaTablero(int m[Tam][Tam]) {
	
	for (int i = 0; i < Tam; i++) {
		
		for (int j = 0; j < Tam; j++) {
			m[i][j] = 0;
		}
	}
	
}

void RellenarTablero(int m[Tam][Tam]) {

	for (int i =0; i < Tam; i++) {
		for (int j = 0; j < Tam; j++) {
			m[i][j] = (rand() % 9) + 1;
		}
		printf("\n");
	}

}

void PintarTablero(int m[Tam][Tam]) {

	for (int i = 0; i < Tam; i++) {
		for (int j = 0; j < Tam; j++) {
			printf(" %d ", m[i][j]);
		}
		printf("\n");
	}
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Juego();
void RepartirJugador(int* cartasJ, int* partidas);
void RepartirBanca(int* cartasM);
void Puntuacion(int* cartasJ, int* cartasM);
void Ganador(int* cartasJ, int* cartasM, int* vic, int* derr, int* empa);

int main() {
	Juego();
	return 0;
}

void Juego() {

	srand(time(NULL));

	int partidas = 0;
	int cartasJugador=0;
	int cartasMaquina=0;
	char seguir = 'n';
	int victorias=0, derrotas=0, empates=0;
	
	do
	{
		RepartirJugador(&cartasJugador, &partidas);
		RepartirBanca(&cartasMaquina);
		Puntuacion(&cartasJugador, &cartasMaquina);
		Ganador(&cartasJugador, &cartasMaquina, &victorias, &derrotas, &empates);

		printf("Quieres continuar? (n=salir), para salir pulsa cualquier letra...\n");
		scanf_s(" %c", &seguir, 1);
		printf("\n");

	} while (seguir!='n');

	printf("\nHas hecho un total de: %d partidas\n", partidas);
	printf("Has ganado %d partidas\n", victorias);
	printf("Has perdido %d partidas\n", derrotas);
	printf("Has empatado %d partidas\n", empates);

}

void RepartirJugador(int* cartasJ, int* partidas) {
	int carta1 = (rand() % 13) + 1;
	int carta2 = (rand() % 13) + 1;
	*cartasJ = carta1 + carta2;
	*partidas = *partidas + 1;
}

void RepartirBanca(int* cartasM) {
	int carta1 = (rand() % 13) + 1;
	int carta2 = (rand() % 13) + 1;
	*cartasM = carta1 + carta2;
}

void Puntuacion(int* cartasJ, int* cartasM) {
	
	printf("Jugador: %d puntos\n", *cartasJ);
	printf("Maquina: %d puntos\n", *cartasM);
}

void Ganador(int* cartasJ, int* cartasM, int* vic, int* derr, int* empa) {
	
	if (*cartasJ > 21) {
		printf("Has perdido\n");
		*derr = *derr + 1;
	}

	else if(*cartasM > 21){
		printf("Has ganado\n");
		*vic = *vic + 1;
	}

	else if (*cartasJ == *cartasM) {
		printf("Empate\n");
		*empa = *empa + 1;
	}

	else if (*cartasJ > *cartasM) {
		printf("Has ganado\n");
		*vic=*vic+1;
	}

	else {
		printf("Has perdido\n");
		*derr = *derr + 1;
	}
}
*/

/*
#include <stdio.h>

void Ejercicio8();
int Suma(int vec[], int tamano);

int main() {
	
	Ejercicio8();
	return 0;
}

void Ejercicio8() {

	int v1[8];

	printf("Introduce numeros de un vector para realizar la suma: \n");

	for (int i = 0; i < 8; i++) {
		scanf_s("%d", &v1[i]);
	}

	int suma = Suma(v1,8);

	printf("La suma del vector es: %d\n", suma);

}

int Suma(int vec[], int tamano) {

	int sum = 0;

	for (int i = 0; i < tamano; i++) {
		sum += vec[i];
	}

	return sum;
}
*/

/*
#include <stdio.h>

void Ejercicio();
void AumentarSalario(float salar[], int tamano, float aumento);
void MinyMax(float s[], int tamano, float* minimo, float* maximo, float* media);
void Resultados(float s[], int tamano, float* minimo, float* maximo, float* media);


int main() {

	Ejercicio();
	return 0;
}

void Ejercicio() {

	float salario[5];

	printf("Introduce el salario de tus 5 empleados: \n");
	
	for (int i = 0; i < 5; i++) {
		scanf_s("%f", &salario[i]);
	}

	float aumento = 0;
	float media = 0;
	
	printf("\nQuanto % quieres aumentar el salario? \n");
	scanf_s("%f", &aumento);

	AumentarSalario(salario,5, aumento);

	float min = salario[0];
	float max = salario[0];

	MinyMax(salario,5,&min,&max,&media);

	Resultados(salario, 5, &min, &max, &media);
}

void AumentarSalario(float salar[], int tamano, float aumento) {

	printf("Hemos augmentado el salario, la cosa queda así:\n");
	aumento = aumento / 100;

	for (int i = 0; i < tamano; i++) {
		salar[i] += salar[i] * aumento;
	}

	printf("\nSalarios después del aumento:\n");
	for (int i = 0; i < tamano; i++) {
		printf("Empleado %d: %.2f\n", i+1, salar[i]);
	}
	
}


void MinyMax(float s[], int tamano, float* minimo, float* maximo, float* media) {

	for (int i = 0; i < tamano; i++) {
		
		if (s[i] < *minimo) {
			*minimo = s[i];
		}

		if (s[i] > *maximo) {
			*maximo = s[i];
		}

		*media += s[i];

	}

	*media = *media / tamano;

}

void Resultados(float s[], int tamano, float* minimo, float* maximo, float* media) {
	
	printf("\nINFORME FINAL\n");
	printf("Salario minimo: %.2f\n", *minimo);
	printf("Salario maximo: %.2f\n", *maximo);
	printf("Salario medio : %.2f\n", *media);

}
*/

//Una tienda donde hay diferentes cajas registradoras, en main habra dinerototal del cajero, y un array de cajeros, los cajeros empezaran en 0 euros, y la gracia es que con una funcion se le pase por referencia un cajero y se le ingresen los dineros, y al final poder ver todo el dinero de las cajas en la variable dinerototal

/*
#include <stdio.h>

void IngresarDineroCajaFuerte(int* cajeros, int size, int* dineroTotal);

int main() {
	int dineroTotal = 0;      
	int cajeros[3] = { 0, 0, 0 };
	char salir = 'n';

	do {
		IngresarDineroCajaFuerte(cajeros, 3, &dineroTotal);

		printf("Desea salir? (s/n): ");
		scanf_s(" %c", &salir,1);

	} while (salir != 's');

	printf("\nDinero recaudado en cada cajero:\n");
	for (int i = 0; i < 3; i++) {
		printf("Cajero %d: %d\n", i + 1, cajeros[i]);
	}

	printf("Dinero total recaudado en todas las operaciones: %d\n", dineroTotal);

	return 0;
}

void IngresarDineroCajaFuerte(int* cajeros, int size, int* dineroTotal) {
	for (int i = 0; i < size; i++) {
		int ingreso;
		printf("Ingrese dinero para el cajero %d: ", i + 1);
		scanf_s("%d", &ingreso);
		*(cajeros + i) += ingreso;  
		*dineroTotal += ingreso;    
	}
}
*/

/*
#include <stdio.h>

void PedirNotas(float notass[], int tamano);
void Promedio(float notass[], int tamano, float* media);

int main() {

	float notas[5];
	float promedio = 0;

	PedirNotas(notas, 5);

	Promedio(notas, 5, &promedio);

	printf("El promedio de las notas es de: %.2f\n", promedio);
}

void PedirNotas(float notass[], int tamano) {

	printf("Introduce las notas de los alumnos: \n");

	for (int i = 0; i < tamano; i++) {
		printf("\nAlumno %d: ", i+1);
		scanf_s("%f", &notass[i]);
	}
}

void Promedio(float notass[], int tamano, float* media) {
	float* ptr = notass;

	for (int i = 0; i < tamano; i++) {
		*media += *ptr;
		ptr++;
	}
	*media /= tamano;
}
*/

/*
#include <stdio.h>

void AgregarUnidades(int* productes, int tamano);
void TotalUnidades(int* unidades, int* productes);
void StockFinal(int productes[], int tamano, int* uTienda);

int main() {

	int productos[4] = {0,0,0,0};
	int unidadesTienda = 0;

	AgregarUnidades(productos, 4);

	TotalUnidades(&unidadesTienda, productos);

	StockFinal(productos,4, &unidadesTienda);
}

void AgregarUnidades(int* productes, int tamano) {
	
	for (int i = 0; i < tamano; i++) {
		printf("\nProducto %d: ", i + 1);
		scanf_s("%d", productes+i);
	}
}

void TotalUnidades(int* unidades, int* productes) {

	for (int i = 0; i < 4; i++) {
		*unidades += *(productes + i);
	}
	
}

void StockFinal(int productes[], int tamano, int* uTienda) {
	

	for (int i = 0; i < tamano; i++) {
		printf("\nEl producto %d tiene unas existencias de %d\n", i+1, productes[i]);
	}

	printf("\n En toda la tienda hay: %d", *uTienda);
	
}
*/

/*
#include <stdio.h>

void DineroaCuenta(int* cuentas, int tamano);
void SaldoTotal(int* cuentas, int* saldo);
void Resultados(int* cuentas, int* saldo);

int main() {

	int cuentas[3] = { 0,0,0 };
	int saldo=0;

	DineroaCuenta(cuentas, 3);

	SaldoTotal(cuentas,&saldo);

	Resultados(cuentas,&saldo);
}

void DineroaCuenta(int* cuentas, int tamano) {

	printf("Introduce el dinero de las 3 cuentas: \n");
	
	for (int i = 0; i < tamano; i++) {
		printf("\nCuenta %d: ", i + 1);
		scanf_s("%d", cuentas+i);
	}
}

void SaldoTotal(int* cuentas, int* saldo) {
	
	for (int i = 0; i < 3; i++) {
		*saldo += *(cuentas + i);
	}
}

void Resultados(int* cuentas, int* saldo) {

	for (int i = 0; i < 3; i++) {

		printf("\nEl saldo de la cuenta %d es de: %d\n", i + 1, *(cuentas + i));
	}
	
	printf("\nEl saldo total de las 3 cuentas es de: %d\n", *saldo);
}
*/


/*
#include <stdio.h>

void RecogerEdades(int edades[], int tamano);
void EdadMayor(int edades[], int* mayol);


int main() {
	
	int edades[6];
	

	RecogerEdades(edades, 6);

	int mayor = edades[0];

	EdadMayor(edades, &mayor);

}

void RecogerEdades(int edades[], int tamano) {
	
	printf("Introduce la edad de 6 personas: \n");

	for (int i = 0; i < tamano; i++){
		printf("\nEdad %d: ",i+1);
		scanf_s("%d", &edades[i]);
	}
}

void EdadMayor(int edades[], int* mayol) {
	
	int *edad = edades;
	
	for (int i = 0; i < 6; i++) {
		
		if (*edad > *mayol) {
			*mayol = *edad;
		}
		edad++;
	}

	printf("La edad mas grande es: %d", *mayol);
}
*/

/*
#include <stdio.h>

void GananciaSemana(int ganancia[], int tamano, int* gananciaTotal);
void TotalAcumulado(int * ganancia);

int main() {
	
	int ganancias[7];
	int gananciaTotal = 0;

	GananciaSemana(ganancias,7,&gananciaTotal);

	TotalAcumulado(&gananciaTotal);
}

void GananciaSemana(int ganancia[], int tamano, int* gananciaTotal) {

	printf("Introduce las ganancias de la semana: \n");

	for (int i = 0; i < tamano; i++) {
		scanf_s("%d", &ganancia[i]);
		*gananciaTotal = *gananciaTotal + ganancia[i];
	}

}

void TotalAcumulado(int* ganancia) {
	printf("En la semana hemos ganado: %d\n", *ganancia);
}
*/

/*
#include <stdio.h>

void LeerVentas(int ventass[], int tamano);
void CalcularMaximo(int ventas[], int tamano, int* mayor);

int main() {

	int ventas[10];
	

	LeerVentas(ventas, 10);

	int ventaMayor = ventas[0];
	CalcularMaximo(ventas, 10,&ventaMayor);

	printf("La venta mas alta ha sido de: %d", ventaMayor);
}

void LeerVentas(int ventass[], int tamano) {

	int* recorrer = ventass;

	printf("Introduce las ventas del array: \n");

	for (int i = 0; i < tamano; i++) {
		scanf_s("%d", recorrer + i);
	}
}

void CalcularMaximo(int ventas[], int tamano, int* mayor) {

	int* recorrer = ventas;

	for (int i = 0; i < tamano; i++) {
		if (*recorrer> *mayor) {
			*mayor = *recorrer;
		}
		recorrer++;
	}

}
*/

/*
#include <stdio.h>

int ValidarViaje(int arr[], int size, int max);
void Viajar(int arr[], int size);
void MostrarEstado(int arr[], int size);
void RellanarCapsula(int* x);

int main()
{
	int arr[10] = { 10000,10000,10000,10000,10000,10000,10000,10000,10000,10000 };
	Viajar(arr, 10);
	MostrarEstado(arr, 10);
	RellanarCapsula(&arr[0]);
	MostrarEstado(arr, 10);
}

int ValidarViaje(int arr[], int size, int max)
{
	int distance = 0;
	
	for (int i = 0; i < size; i++)
	{
		distance += arr[i];
	}
	distance *= 10;
	
	if (distance > max)
	{
		printf("Se puede realizar el viaje\n");
		return 1;
	}
	printf("No se puede realizar el viaje\n");

	return 0;

}

void Viajar(int arr[], int size)
{
	int max;
	
	printf("Dime cuantos kilometros quieres realizar?\n");
	scanf_s("%d", &max);
	
	if (ValidarViaje(arr, size, max)) //1 Entra 0 no entra
	{
		for (int i = 0; i < 10; i++)
		{
			if (max > arr[i] * 10)
			{
				max = max - (arr[i] * 10);
				arr[i] = 0;
			}
			else
			{

				arr[i] = arr[i] - (max / 10);
				max = 0;
			}
		}
		
	}
	
}

void MostrarEstado(int arr[], int size)
{
	for (int i = 0; i < 10; i++)
	{
		printf("Capsula %d: %d\n", i, arr[i]);
	}
}

void RellanarCapsula(int* x) {
	printf("Vamos a rellenar la capsula 1\n");
	*x = 10000;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void CargarBaterias(int arr[], int size);
void RealizarMision(int arr[], int size);
void BateriaMaxima(int arr[], int size, int* max);
void RecargarBateria(int arr[],int* bateria);
void MostrarEstado(int arr[], int size);

int main() {

	srand(time(NULL));
	int baterias[10];
	int recarga = 50;

	CargarBaterias(baterias, 10);

	printf("Este es el estado actual de las baterias: \n");

	for (int i = 0; i < 10; i++) {
		printf("\nBateria %d: %d",i+1, baterias[i]);
	}

	int max = baterias[0];

	BateriaMaxima(baterias, 10, &max);

	RealizarMision(baterias,10);
	MostrarEstado(baterias, 10);

	printf("\nSeleciona la bateria que quieres cargar: \n");
	scanf_s("%d", &recarga);

	RecargarBateria(baterias, &recarga);

	MostrarEstado(baterias, 10);
}

void CargarBaterias(int arr[], int size) {
	
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 5000+1;
	}

}

void RealizarMision(int arr[], int size) {

	printf("\n\nVamos a realizar la mision: \n");
	for (int i = 0; i < size; i++) {
		arr[i] = arr[i] - rand() % 500 + 1;
	}

}

void BateriaMaxima(int arr[], int size, int* max) {

	for (int i = 0; i < size; i++) {
		if (arr[i] > *max) {
			*max = arr[i];
		}
	}
}

void RecargarBateria(int arr[],int* bateria) {

	printf("\nHas selecionado la bateria: %d\n", *bateria);
	arr[*bateria-1] = 5000;

}

void MostrarEstado(int arr[], int size) {

	printf("\nEl estado de las baterias es: \n");

	for (int i = 0; i < size; i++) {
		printf("%d\n", arr[i]);
	}


}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InicializarSensores(int* sensoress, int size);
void MostrarSensores(int* sensoress, int size);
int TemperaturaMax(int* sensoress, int size);
void ModificarSensor(int* sensoress, int size, int sensor);

int main() {

	srand(time(NULL));

	int sensores[15];

	InicializarSensores(sensores,15);

	MostrarSensores(sensores, 15);

	int max = TemperaturaMax(sensores, 15);

	int sensor = -20;

	printf("\nLa temperatura mas alta registrada de los sensores es: %d\n", max);

	printf("Que sensor quieres modificar: \n");
	scanf_s("%d", &sensor,1);

	ModificarSensor(sensores, 15,sensor);

	MostrarSensores(sensores, 15);
}

void InicializarSensores(int* sensoress, int size) {

	int min = -10;
	int max = 50;

	for (int i = 0; i < size; i++) {
		*sensoress = min + rand() % (max - min + 1);
		sensoress++;
	}
}

void MostrarSensores(int* sensoress, int size) {

	for (int i = 0; i < size; i++) {
		printf("%d\n", *sensoress);
		sensoress++;
	}
}

int TemperaturaMax(int* sensoress, int size) {

	int tempMax = sensoress[0];

	for (int i = 0; i < size; i++) {
		if (*sensoress > tempMax) {
			tempMax = *sensoress;
		}
		sensoress++;
	}

	return tempMax;

}

void ModificarSensor(int* sensoress, int size, int sensor) {

	int valor;

	printf("Has escogido el sensor: %d\n", sensor);
	printf("Que valor quieres asignarle al sensor %d\n", sensor);
	scanf_s("%d", &valor);

	sensoress[sensor-1] = valor;

}
*/
/*
#include <stdio.h>

void RecogerEdades(int edades[], int tamano);
void EdadMayor(int edades[], int* mayol);


int main() {

	int edades[6];


	RecogerEdades(edades, 6);

	int mayor = edades[0];

	EdadMayor(edades, &mayor);

}

void RecogerEdades(int edades[], int tamano) {

	printf("Introduce la edad de 6 personas: \n");

	for (int i = 0; i < tamano; i++) {
		printf("\nEdad %d: ", i + 1);
		scanf_s("%d", &edades[i]);
	}
}

void EdadMayor(int edades[], int* mayol) {

	int* edad = edades;

	for (int i = 0; i < 6; i++) {

		if (*edad > *mayol) {
			*mayol = *edad;
		}
		edad++;
	}

	printf("La edad mas grande es: %d", *mayol);
}
*/

/*
#include <stdio.h>

void LeerHumedad(int sensores[], int size);
int PromedioHumedad(int sensores[], int size);
void ActualizarSensor(int* sensores, int size);
void Resultado(int sensores[], int size);

int main() {
	
	int sensores[5];

	LeerHumedad(sensores,5);

	int promedio = PromedioHumedad(sensores,5);

	printf("El promedio es de: %d\n", promedio);

	ActualizarSensor(sensores,5);

	Resultado(sensores,5);
	
	promedio = PromedioHumedad(sensores, 5);

	printf("El promedio es de: %d\n", promedio);
}

void LeerHumedad(int sensores[], int size) {

	printf("Dime los valores de humedad de los 5 sensores de la planta: \n");
	
	for (int i = 0; i < size; i++) {
		printf("Sensor %d: ", i + 1);
		scanf_s("%d", &sensores[i]);
	}
}

int PromedioHumedad(int sensores[], int size) {

	int media=0;

	for (int i = 0; i < size; i++) {
		media += sensores[i];
	}

	return media / size;
}

void ActualizarSensor(int* sensores, int size) {

	int sensor = 0;
	int valor = 0;

	printf("Que sensor quieres actualizar: \n");
	scanf_s("%d", &sensor);

	printf("Que valor quieres assignarle: \n");
	scanf_s("%d", &valor);

	sensores[sensor-1] = valor;

}

void Resultado(int sensores[], int size) {
	
	printf("El sensor actual es de: \n");

	for (int i = 0; i < size; i++) {
		printf("%d\n", sensores[i]);
	}
}
*/

/*
//Ejercicio 1
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
//Ejercicio 2

#include <stdio.h>
#include <string.h>

#define tamano 151
int main() {

	char frase[tamano];
	int a=0, e=0, iI=0, o=0, u=0;

	printf("Introduce una frase para determinar la cantidad de vocales que tiene: \n");
	gets_s(frase, tamano);

	int tamanioFrase = strlen(frase);
	printf("La frase es de tamano: %d\n", tamanioFrase);

	for (int i = 0; i < tamano; i++) {

		switch (frase[i]) {

			case 'a': {
				a++;
				break;
			}

			case 'e': {
				e++;
				break;
			}

			case 'i': {
				iI++;
				break;
			}

			case 'o': {
				o++;
				break;
			}

			case 'u': {
				u++;
				break;
			}

			case 'A': {
				a++;
				break;
			}

			case 'E': {
				e++;
				break;
			}

			case 'I': {
				iI++;
				break;
			}

			case 'O': {
				o++;
				break;
			}

			case 'U': {
				u++;
				break;
			}
		}

	}

	if (a > 0) {
		printf("\nEl numero de letras a es: %d\n", a);
	}

	if (e > 0) {
		printf("El numero de letras e es: %d\n", e);
	}

	if (iI > 0) {
		printf("El numero de letras i es: %d\n", iI);
	}

	if (o > 0) {
		printf("El numero de letras o es: %d\n", o);
	}

	if (u > 0) {
		printf("El numero de letras u es: %d\n", u);
	}

	else if(a==0 && e==0 && iI == 0 && o == 0 && u == 0){
		printf("Tu frase no tiene vocales");
	}
}
*/
/*
//Ejercicio 3
#include <stdio.h>
#include <string.h>

#define tamano 151
int main() {

	char palabra[tamano];

	printf("Introduce texto en el que se cambiaran las vocales por .: \n");
	gets_s(palabra);

	int tamanio = strlen(palabra);

	for (int i = 0; i < tamanio; i++) {
		if (palabra[i] == 'a' || palabra[i] == 'A' || palabra[i] == 'e' || palabra[i] == 'E' || palabra[i] == 'i' || palabra[i] == 'I' || palabra[i] == 'o' || palabra[i] == 'O' || palabra[i] == 'u' || palabra[i] == 'U') {
			palabra[i] = '.';
		}
	}
	printf("%s", palabra);
}
*/
/*
//Ejercicio 4

#include <stdio.h>
#include <string.h>

#define tamano 201

int main() {

	char palabra[tamano];

	int consonante = 0;
	int vocales = 0;
	int especiales = 0;

	printf("Introduce un texto para ver la cantidad de consonantes y vocales que tiene: \n");
	gets_s(palabra);

	int tamanio = strlen(palabra);

	for (int i = 0; i < tamanio; i++) {
		if (palabra[i] == 'a' || palabra[i] == 'A' || palabra[i] == 'e' || palabra[i] == 'E' || palabra[i] == 'i' || palabra[i] == 'I' || palabra[i] == 'o' || palabra[i] == 'O' || palabra[i] == 'u' || palabra[i] == 'U') {
			vocales++;
		}

		else if (palabra[i] == ' ' || palabra[i] == ',' || palabra[i] == '.' || palabra[i] == '?' || palabra[i] == '¿' || palabra[i] == '!' || palabra[i] == '¡' || palabra[i] == '-' || palabra[i] == '_' || palabra[i] == ';' || palabra[i] == ':') {
			especiales++;
		}

		else {
			consonante++;
		}
	}

	printf("Tiene %d vocales, y tiene %d consonantes\n", vocales, consonante);

	printf("Tu frase tiene %d caracteres especiales", especiales);
}
*/
/*
//Ejercicio 5
#include <stdio.h>
#include <string.h>

#define tamano 101
int main() {

	char frase[tamano];
	int letras = 0;

	printf("Introduce la frase para ver cada palabra y los caracteres que tiene: \n");
	gets_s(frase);

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
//Ejercicio 6
#include <stdio.h>
#include <string.h>

#define tamano 251
int main() {
	char frase[tamano];
	char resultado[tamano];
	int j = 0;

	printf("Introduce la frase:\n");
	gets_s(frase, tamano);

	int longitud = strlen(frase);

	for (int i = 0; i < longitud; i++) {

		if (frase[i] == ' ') {

			if (i == 0 || frase[i - 1] != ' ') { //solo lo copia si no es un espacio
				resultado[j++] = ' ';
			}
		}

		else {
			resultado[j++] = frase[i]; // si no es un espacio se copia siempre
		}
	}
	resultado[j] = '\0';

	printf("Frase con espacios reducidos:\n%s\n", resultado);
}
*/


/*
//Ejercicio 1
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
//Ejercicio 2

#include <stdio.h>
#include <string.h>

#define tamano 151
int main() {

	char frase[tamano];
	int a=0, e=0, iI=0, o=0, u=0;

	printf("Introduce una frase para determinar la cantidad de vocales que tiene: \n");
	gets_s(frase, tamano);

	int tamanioFrase = strlen(frase);
	printf("La frase es de tamano: %d\n", tamanioFrase);

	for (int i = 0; i < tamano; i++) {

		switch (frase[i]) {

			case 'a': {
				a++;
				break;
			}

			case 'e': {
				e++;
				break;
			}

			case 'i': {
				iI++;
				break;
			}

			case 'o': {
				o++;
				break;
			}

			case 'u': {
				u++;
				break;
			}

			case 'A': {
				a++;
				break;
			}

			case 'E': {
				e++;
				break;
			}

			case 'I': {
				iI++;
				break;
			}

			case 'O': {
				o++;
				break;
			}

			case 'U': {
				u++;
				break;
			}
		}

	}

	if (a > 0) {
		printf("\nEl numero de letras a es: %d\n", a);
	}

	if (e > 0) {
		printf("El numero de letras e es: %d\n", e);
	}

	if (iI > 0) {
		printf("El numero de letras i es: %d\n", iI);
	}

	if (o > 0) {
		printf("El numero de letras o es: %d\n", o);
	}

	if (u > 0) {
		printf("El numero de letras u es: %d\n", u);
	}

	else if(a==0 && e==0 && iI == 0 && o == 0 && u == 0){
		printf("Tu frase no tiene vocales");
	}
}
*/
/*
//Ejercicio 3
#include <stdio.h>
#include <string.h>

#define tamano 151
int main() {

	char palabra[tamano];

	printf("Introduce texto en el que se cambiaran las vocales por .: \n");
	gets_s(palabra);

	int tamanio = strlen(palabra);

	for (int i = 0; i < tamanio; i++) {
		if (palabra[i] == 'a' || palabra[i] == 'A' || palabra[i] == 'e' || palabra[i] == 'E' || palabra[i] == 'i' || palabra[i] == 'I' || palabra[i] == 'o' || palabra[i] == 'O' || palabra[i] == 'u' || palabra[i] == 'U') {
			palabra[i] = '.';
		}
	}
	printf("%s", palabra);
}
*/
/*
//Ejercicio 4

#include <stdio.h>
#include <string.h>

#define tamano 201

int main() {

	char palabra[tamano];

	int consonante = 0;
	int vocales = 0;
	int especiales = 0;

	printf("Introduce un texto para ver la cantidad de consonantes y vocales que tiene: \n");
	gets_s(palabra);

	int tamanio = strlen(palabra);

	for (int i = 0; i < tamanio; i++) {
		if (palabra[i] == 'a' || palabra[i] == 'A' || palabra[i] == 'e' || palabra[i] == 'E' || palabra[i] == 'i' || palabra[i] == 'I' || palabra[i] == 'o' || palabra[i] == 'O' || palabra[i] == 'u' || palabra[i] == 'U') {
			vocales++;
		}

		else if (palabra[i] == ' ' || palabra[i] == ',' || palabra[i] == '.' || palabra[i] == '?' || palabra[i] == '¿' || palabra[i] == '!' || palabra[i] == '¡' || palabra[i] == '-' || palabra[i] == '_' || palabra[i] == ';' || palabra[i] == ':') {
			especiales++;
		}

		else {
			consonante++;
		}
	}

	printf("Tiene %d vocales, y tiene %d consonantes\n", vocales, consonante);

	printf("Tu frase tiene %d caracteres especiales", especiales);
}
*/
/*
//Ejercicio 5
#include <stdio.h>
#include <string.h>

#define tamano 101
int main() {

	char frase[tamano];
	int letras = 0;

	printf("Introduce la frase para ver cada palabra y los caracteres que tiene: \n");
	gets_s(frase);

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
//Ejercicio 6
#include <stdio.h>
#include <string.h>

#define tamano 251
int main() {
	char frase[tamano];
	char resultado[tamano];
	int j = 0;

	printf("Introduce la frase:\n");
	gets_s(frase, tamano);

	int longitud = strlen(frase);

	for (int i = 0; i < longitud; i++) {

		if (frase[i] == ' ') {

			if (i == 0 || frase[i - 1] != ' ') { //solo lo copia si no es un espacio
				resultado[j++] = ' ';
			}
		}

		else {
			resultado[j++] = frase[i]; // si no es un espacio se copia siempre
		}
	}
	resultado[j] = '\0';

	printf("Frase con espacios reducidos:\n%s\n", resultado);
}
*/






















































/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void BucleJuego(int* v, int* p, int* e);
int AccionJ();
int AccionM();
void CondicionJuego(int* v, int* p, int* e, int a, int m);
void MostrarResultados(int v, int p, int e);

int main() {

	int victoria = 0;
	int derrota = 0;
	int empate = 0;
	BucleJuego(&victoria, &derrota, &empate);//Esta linea de dentro de los () es muy importante para el examen
	MostrarResultados(victoria, derrota, empate); //Este es el paso por parametro eso quiere decir que es una copia
}


void BucleJuego(int* v, int* p, int* e) {

	char seguir;
	do
	{
		int a = AccionJ();
		int m = AccionM();
		CondicionJuego(v, p, e, a, m); //Se le pasa victoria, derrota, empate, movimientomaquina y movimientoJugador
		scanf_s(" %c", &seguir, 1);
	} while (seguir=='s');

}

int AccionJ() {
	int jugador;
	do
	{
		printf("Dame un valor del 0 al 2: \n");
		scanf_s("%d", &jugador);

	} while (!(jugador == 0 || jugador == 1 || jugador == 2));

	return jugador;
}

int AccionM() {

	int r = rand() % 3;
	printf("La maquina ha sacado %d\n", r);
	return r;
}

void CondicionJuego(int* v, int* p, int* e, int a, int m) {
	if (a == m) {
		printf("Empate\n");
		*e = *e + 1;
	}

	else if ((a == 0 && m == 1) || (a == 1 && m == 2) || (a == 2 && m == 0)) {
		printf("Derrota!\n");
		*p = *p + 1;
	}

	else {
		printf("Victoria!\n");
		*v = *v + 1;
	}
}

void MostrarResultados(int v, int p, int e) {
	printf("Victorias: %d\n",v );
	printf("Derrotas: %d\n",p );
	printf("Empates: %d\n",e );
}
*/

/*
//Piedra papel y tigera

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void Juego(int* vic, int *derr, int* empa);
int MovimientoJugador();
int MovimientoMaquina();
void Condicion(int* vic, int* derr, int* empa, int moveP, int moveE);


int main() {

	srand(time(NULL));

	int victorias = 0, derrotas = 0, empates = 0;
	int moveplayer;
	int moveEnemy;

	Juego(&victorias, &derrotas, &empates); //Ponemos & aqui para darle la direccion de memoria

	printf("\nHas ganado: %d veces\n", victorias);
	printf("Has perdido: %d veces\n", derrotas);
	printf("Has empatado: %d veces\n", empates);
}

void Juego(int* vic, int* derr, int* empa) {

	char seguir = 's';

	do{
		int moveJugador = MovimientoJugador();
		int moveMaquina = MovimientoMaquina();
		Condicion(vic, derr, empa, moveJugador, moveMaquina);

		printf("Quieres seguir?\n\n\n");
		scanf_s(" %c", &seguir, 1);
	} while (seguir=='s' || seguir=='S');


}

int MovimientoJugador() {

	int movimiento = 0;

	printf("Introduce que accion quieres hacer: 1 Piedra, 2 Papel, 3 Tijeras \n");
	scanf_s("%d", &movimiento);

	return movimiento;

}

int MovimientoMaquina() {
	return (rand() % 3) + 1;
}

void Condicion(int* vic, int* derr, int* empa, int moveP, int moveE) {

	if (moveE == moveP) {
		printf("Empatee!\n");
		*empa = *empa + 1; //Si usamos punteros es mejor hacerlo así
	}

	else if ((moveP == 1 && moveE == 3) || (moveP == 2 && moveE == 1) || (moveP == 3 && moveE == 2)) {
		printf("Victoria!\n");
		*vic = *vic + 1;
	}

	else {
		printf("Derrota\n");
		*derr = *derr + 1;
	}
}
*/
