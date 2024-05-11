#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void) {
	setlocale (LC_ALL, "Portuguese"); 
	float N1;
	float N2;
	float N3;
	float media; 
	
	printf ("digite os 3 numeros \n");
	scanf ("%f%f%f" , &N1, &N2, &N3);
	media = (N1+N2+N3 ) /3;
	printf ("\n A media final é: %.2f", media);
	 
}
