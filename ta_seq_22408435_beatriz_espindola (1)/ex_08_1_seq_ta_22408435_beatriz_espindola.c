#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define pi 3.141516

void main (void) {
		setlocale (LC_ALL, "Portuguese"); 
	float area;
	float raio;
	float altura;
	
	printf ("digite o raio e a altura \n");
	scanf ("%f%f" , &raio, &altura);
	area = 2*3.1415*raio*altura;
	printf ("\n A area final é: %.2f", area);
}
