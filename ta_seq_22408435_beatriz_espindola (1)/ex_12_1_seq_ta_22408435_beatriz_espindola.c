#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 2

void main (void) {
	setlocale (LC_ALL, "Portuguese"); 
	
	int v1;
	int v2;
	int soma;
	int sub;
	
	printf ("digite os dois valores \n");
	scanf ("%d%d" , &v1, &v2);
	soma = (v1+v2);
	printf ("\n A soma final é: %.2d", soma);
	
	printf ("\n digite os dois valores \n");
	scanf ("%d%d" , &v1, &v2);
	sub = (v1-v2);
	printf ("\n A subtracao final é: %.2d", sub);
	
}
