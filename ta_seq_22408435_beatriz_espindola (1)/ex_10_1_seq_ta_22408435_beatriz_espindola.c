#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void) {
	float a;
	float b;
	float raiz; 
	
	printf ("digite a e b\n");
	scanf ("%f%f" , &a, &b);
	raiz = -b/a;
	printf ("\n A raiz E: %.3f", raiz);

}
