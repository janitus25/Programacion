#include <stdio.h>

#define PRECIO_GASOLINA 1.38

void InicializarSurtidores(int surtidores[], int tam);
void RegistrarGasolina(int surtidores[], int tam);
void MostrarSurtidores(int surtidores[], int tam);
void CalcularTotal(int surtidores[], int tam, int* totalLitros);
void CalcularDinero(int totalLitros, float* dineroTotal);
int MostrarMenu(int surtidores[], int tam);
void RellenarSurtidor(int* s, int cantidad);
void Gestor(int surtidores[], int* totalLitros, float* dineroTotal);

int main() {
    int surtidores[3];
    int totalLitros = 0;
    float dineroTotal = 0.0f;

    Gestor(surtidores, &totalLitros, &dineroTotal);
}

void InicializarSurtidores(int surtidores[], int tam) {
    for (int i = 0; i < tam; i++) {
        surtidores[i] = 0;
    }
}

void RegistrarGasolina(int surtidores[], int tam) {
    int surtidor, cantidad;

    printf("Que surtidor quieres utilizar (0-2): ");
    scanf_s("%d", &surtidor);

    if (surtidor < 0 || surtidor >= tam) {
        printf("Surtidor no valido!\n");
        return;
    }

    printf("Que cantidad quieres llenar: ");
    scanf_s("%d", &cantidad);

    RellenarSurtidor(&surtidores[surtidor], cantidad);
}

void MostrarSurtidores(int surtidores[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("Surtidor %d = %d litros\n", i, surtidores[i]);
    }
}

void CalcularTotal(int surtidores[], int tam, int* totalLitros) {
    *totalLitros = 0;
    for (int i = 0; i < tam; i++) {
        *totalLitros += surtidores[i];
    }
}

void CalcularDinero(int totalLitros, float* dineroTotal) {
    *dineroTotal = totalLitros * PRECIO_GASOLINA;
    printf("Dinero: %.2f€\n", *dineroTotal);
}

int MostrarMenu(int surtidores[], int tam) {
    printf("\n--- MENU ---\n");
    printf("0 = Inicializar Surtidores\n");
    printf("1 = Mostrar Surtidores\n");
    printf("2 = Calcular total\n");
    printf("3 = Calcular Dinero\n");
    printf("4 = Registrar Gasolina\n");
    printf("5 = Salir\n");
    printf("Elige opcion: ");

    int temp;
    scanf_s("%d", &temp);
    return temp;
}

void RellenarSurtidor(int* s, int cantidad) {
    *s += cantidad;
}

void Gestor(int surtidores[], int* totalLitros, float* dineroTotal) {
    int seguir = 1;

    while (seguir == 1) {
        switch (MostrarMenu(surtidores, 3)) {
        case 0:
            InicializarSurtidores(surtidores, 3);
            break;
        case 1:
            MostrarSurtidores(surtidores, 3);
            break;
        case 2:
            CalcularTotal(surtidores, 3, totalLitros);
            printf("Total Litros = %d\n", *totalLitros);
            break;
        case 3:
            CalcularDinero(*totalLitros, dineroTotal);
            break;
        case 4:
            RegistrarGasolina(surtidores, 3);
            break;
        case 5:
            seguir = 0;
            break;
        default:
            printf("Opcion incorrecta!\n");
            break;
        }
    }
}
