#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main (void) {
	setlocale (LC_ALL, "Portuguese"); 
	float notaA1;
	float notaA2;
	float media; 
	
	printf ("digite as duas notas \n");
	scanf ("%f%f" , &notaA1, &notaA2);
	media = (notaA1+notaA2 )/2;
	printf ("\n A media final é: %.2f", media);
}
