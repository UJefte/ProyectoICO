#include <stdio.h>
int pedir_grado();
void ingresarValo(float* Polinomio, int grado);
void sumaPolinomio(float* Polinomio1, float* polinomio2, int grado1, int grado2);
void mostrarPoli(float* Polinomio, int grado);
int main() {
	int grado1;
	int grado2;
	printf("Polinomio 1: ");
	grado1 = pedir_grado();
	printf("\nPolinomio 2: ");
	grado2 = pedir_grado();
}