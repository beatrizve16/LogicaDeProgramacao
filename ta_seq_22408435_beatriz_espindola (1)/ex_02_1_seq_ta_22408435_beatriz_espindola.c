#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void) {
	setlocale (LC_ALL, "Portuguese"); 
	
	float v1;
	float v2;
	float soma;
	float sub;
	float mult;
	
	printf ("digite os dois valores \n");
	scanf ("%f%f" , &v1, &v2);
	
	soma = (v1+v2);
	printf ("\n A soma final é: %.2f", soma);
	
	sub = (v1-v2);
	printf ("\n A subração final é: %.2f", sub);
	
    mult = (v1*v2);
	printf ("\n A multiplicação final é: %.2f", mult);
}


