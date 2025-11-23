
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


#include <stdio.h>


int main() {


}