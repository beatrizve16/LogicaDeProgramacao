#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void){
    setlocale (LC_ALL, "Portuguese");
 
float valor;

printf ("Digite o valor \n");
scanf ("%f" , &valor);

if (valor>= 100)
    printf("\n Valor maior ou igual a 100 : %.2f", valor);
    else
      printf ("\n Valor menor que 100 : %.2f", valor);
}


