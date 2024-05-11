
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void) {
	setlocale (LC_ALL, "Portuguese"); 
	
	char M;
	char F;
	float pesoM;
	float pesoF;
	float altura;
	char genero;
	
	printf ("\nDigite seu gênero M ou F e sua altura:");
	scanf ("%c%f", &genero, &altura);

	
	pesoM= ((72.7*altura)-58.0);
	pesoF= ((62.1*altura)-44.7);
	
	if (genero == 'M')
	printf ("\nO seu peso ideal é: %.2f", pesoM);
	else
	printf ("\nO seu peso ideal é: %.2f", pesoF);
	
}
