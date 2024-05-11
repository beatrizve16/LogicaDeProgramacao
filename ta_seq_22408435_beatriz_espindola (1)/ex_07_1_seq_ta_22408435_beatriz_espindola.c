#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void) {
		setlocale (LC_ALL, "Portuguese"); 
	float comprimento;
	float raio;
	
	printf ("digite o raio \n");
	scanf ("%f" , &raio);
	comprimento = 2*raio*3,1415;
	printf ("\n o comprimento é: %.2f", comprimento);
	 
}
