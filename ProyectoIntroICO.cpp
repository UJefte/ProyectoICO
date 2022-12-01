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
	printf("\nLa suma de los polinomios es: ");
	sumaPolinomio(Polinomio1, Polinomio2, grado1, grado2);
	return 0;
}
int pedir_grado() {
	int grado;
	printf("\nPedir grado del polinomio");
	scanf_s("%d", &grado);
	return grado;
}
void ingresarValo(float* Polinomio, int grado) {
	int posicion = 0;
	float coeficiente;
	for (int i = grado; i >= 0; i--) {
		printf("Dame el coeficiente de x^%d: ", i);
		scanf_s("%f", &coeficiente);
		Polinomio[posicion] = coeficiente;
		posicion++;
	}
}
void mostrarPoli(float* Polinomio, int grado) {
	int posicion = grado, i = 0;
	for (i; i < grado; i++) {
		if (Polinomio[i] < 0) {
			printf("%.1fx^%d", Polinomio[i], posicion);
		}
		else {
			if (i == 0) {
				printf("%.1fx^%d", Polinomio[i], posicion);
			}
			else {
				printf("+%.1fx^%d", Polinomio[i], posicion);
			}
		}
		posicion--;
	}
	if (Polinomio[i] < 0) {
		printf("%.1fx", Polinomio[i]);
	}
	else {
		printf("+%.1fx", Polinomio[i]);
	}
}