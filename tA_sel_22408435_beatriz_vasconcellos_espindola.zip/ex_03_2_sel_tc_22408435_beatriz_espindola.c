#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void) {
	setlocale (LC_ALL, "Portuguese"); 
	int num;
	int dobro;
	int triplo;
	
	printf ("\n Digite um numero:");
	scanf ("%d", &num);
	
	dobro= 2*num;
	triplo=3*num;
	
	if (num==0)
	printf ("\n numero nulo: %.2d", num);
	
	else
     if (num>0)
	 printf ("\n numero positivo: %.2d e o dobro do numero e: %.2d", num, dobro);
	else
	printf ("\n numero negativo: %.2d e o triplo do numero e: %.2d", num, triplo);
	
	
}
