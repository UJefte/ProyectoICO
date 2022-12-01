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
	float Polinomio1[grado1 + 1];
	float Polinomio2[grado2 + 1];
	printf("\nLlenando el polinomio 1: ");
	ingresarValo(Polinomio1, grado1);
	printf("\nLlenando el polinomio 2: ");
	ingresarValo(Polinomio2, grado2);
	printf("\nPolinomio 1: ");
	mostrarPoli(Polinomio1, grado1);
	printf("\nPolinomio 2: ");
	mostrarPoli(Polinomio2, grado2);
	return 0;
}