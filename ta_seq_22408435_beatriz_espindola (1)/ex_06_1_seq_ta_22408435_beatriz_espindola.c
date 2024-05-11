#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void) {
		setlocale (LC_ALL, "Portuguese"); 
	float area;
	float raio;
	
	printf ("digite o raio \n");
	scanf ("%f" , &raio);
	area = 3.1415*raio*raio;
	printf ("\n A area final é: %.2f", area);
	 
}
