#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void) {
	setlocale (LC_ALL, "Portuguese"); 
	float celsius;
	float fahrenheit;
	float graufahrenheit;
	float conversao ;
	
		printf ("digite os graus em fahrenheit \n");
	scanf ("%f" , &graufahrenheit);
	conversao = (graufahrenheit-32)/1.8;
	printf ("\n o resultado em celsius e: %.2f", conversao);
}
