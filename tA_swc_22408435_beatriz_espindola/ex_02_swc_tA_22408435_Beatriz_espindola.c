
#include <stdio.h>
#include <locale.h>

void main(void){
	
setlocale (LC_ALL, "Portuguese");
	
  int a; 
  
  printf("Escolha uma das op��es a seguir: \n1-Fazer check-in \n2-Chamar servi�o de quarto \n3-Fazer pedido\n"); 
  scanf ("%d", &a);
  
   switch (a) { 
   
   case 1: printf("Fazer check-in ");
   break; 
   
   case 2: 
   printf("Chamar servi�o de quarto"); 
   break;
   
   case 3: 
   printf("Fazer pedido"); 
   break; 
   }
}
