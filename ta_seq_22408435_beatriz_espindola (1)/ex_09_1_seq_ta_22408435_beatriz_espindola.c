#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void) {
		setlocale (LC_ALL, "Portuguese"); 
	float volume;
	float R;
	
	printf ("digite o raio \n");
	scanf ("%f" , &R);
	volume = 3.1415 * R * R * R * 4/3;
	printf ("\n O volume final é: %.2f", volume);
	 
}
