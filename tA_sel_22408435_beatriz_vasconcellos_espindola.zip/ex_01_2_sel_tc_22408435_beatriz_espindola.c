#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void) {
	setlocale (LC_ALL, "Portuguese"); 
	
	float ano;
	float idade;
	float votar ;
	
	printf ("digite o ano de nascimento \n");
	scanf ("%f" , &ano);
	
	idade=2024-ano;
	
	if (idade >16)
	printf ("\n A idade e: %.2f e ja pode votar e o ano de nascimento e:  %.2f", idade, ano);
	else
	printf ("\n A idade e: %.2f e nao pode votar e o ano de nascimento e:  %.2f", idade, ano);
}
