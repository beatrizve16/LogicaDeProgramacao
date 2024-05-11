#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void){
    setlocale (LC_ALL, "Portuguese");
 
int compra;
int venda;

printf ("Digite o preço de compra \n");
scanf ("%d" , &compra);

printf ("Digite o preço de venda \n");
scanf ("%d" , &venda);

if (compra == venda)
printf ("\n Os valores são iguais");
else
if(compra < venda)
printf("\n Teve lucro");
else
  printf ("\n Teve prejuízo");
    
}
