#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void) {
	int x;
	int y ;
	int trocar ;
	
	printf ("digite um valor para x \n");
	scanf ("%d" , &x);
	
	printf ("digite um valor para y \n");
	scanf ("%d" , &y);
	
	int troca = x ;
	x= y;
	y = troca;
	
	printf ("\n o valor de x e %.2d \n" , x);
	printf ("\n o valor de y e %.2d \n", y);
}
