#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void) {
	setlocale (LC_ALL, "Portuguese"); 
	float pe;
	float metro;
	float conversao ;
	
		printf ("digite o valor em pe \n");
	scanf ("%f" , &pe);
	conversao = pe*0.3048;
	printf ("\n o resultado em metros e: %.2f", conversao);
}
