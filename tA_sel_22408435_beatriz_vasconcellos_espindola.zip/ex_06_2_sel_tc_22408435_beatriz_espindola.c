#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void){
    setlocale (LC_ALL, "Portuguese");
 
int compra;
int venda;

printf ("Digite o pre�o de compra \n");
scanf ("%d" , &compra);

printf ("Digite o pre�o de venda \n");
scanf ("%d" , &venda);

if (compra == venda)
printf ("\n Os valores s�o iguais");
else
if(compra < venda)
printf("\n Teve lucro");
else
  printf ("\n Teve preju�zo");
    
}
