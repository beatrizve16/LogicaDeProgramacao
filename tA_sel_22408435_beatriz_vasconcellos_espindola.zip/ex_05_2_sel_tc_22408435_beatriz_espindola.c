
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void){
    setlocale (LC_ALL, "Portuguese");
 
int num;

printf ("Digite o número \n");
scanf ("%d" , &num);

if (num % 2 == 0)
    printf("\n O número é par ");
    else
  printf ("\n O número é impar");
    

}

