
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void){
    setlocale (LC_ALL, "Portuguese");
 
int num;

printf ("Digite o n�mero \n");
scanf ("%d" , &num);

if (num % 2 == 0)
    printf("\n O n�mero � par ");
    else
  printf ("\n O n�mero � impar");
    

}

