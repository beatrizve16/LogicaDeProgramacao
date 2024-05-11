#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main (void){
    setlocale (LC_ALL, "Portuguese");
 
 float a;
 float b;
 float c;
 float x;
 float raiz1; 
 float raiz2;
 float delta;
 

printf ("Digite os valores de a, b e c \n");
scanf ("%f%f%f" , &a, &b, &c);

delta=(b*b-4*a*c);
raiz1 = ((-b -sqrt(delta))/(2*a));
raiz2=((-b+ sqrt(delta))/(2*a));

if (delta==0)
    printf("\n Existem 2 raizes reais: %f, %f" , raiz1, raiz2);
else
if (delta<0)
    printf ("\n Não existem raizes reais" );
else 
  printf ("\n Existem duas raizes diferentes: %f, %f" , raiz1, raiz2);
  
}

