#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void) {
	
	setlocale (LC_ALL, "Portuguese"); 
		
	float base;
	float altura;
	float area; 
	
	printf ("digite a base e a altura \n");
	scanf ("%f%f" , &base, &altura);
	area = (base*altura)/2;
	printf ("\n A área é: %.3f", area);
	printf ("\n A base é: %.3f", base);
	printf ("\n A altura é: %.3f", altura);	

}
