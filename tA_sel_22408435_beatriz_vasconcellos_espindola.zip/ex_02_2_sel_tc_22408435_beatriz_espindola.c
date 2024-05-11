#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void) {
	setlocale (LC_ALL, "Portuguese"); 
	
	int v1;
	int v2;
	
	printf ("digite os dois valores \n");
	scanf ("%d%d" , &v1,&v2);
	
	if (v1==v2)
	printf ("\n os valores sao iguais: %.2d", v1);
	else
     if (v1>v2)
	 printf ("\n O valor maior e V1: %.2d", v1);
	else
	printf ("\n O valor maior e V2: %.2d", v2);
	
}
