
#include <stdio.h>
#include <locale.h>

void main(void){
	
setlocale (LC_ALL, "Portuguese");
	
int a; 

printf("Digite o código do produto que quer saber o preço/valor\n"); 
scanf ("%d", &a); 

switch (a) {
case 100: 
printf ("nome:Detergente \nPreço:$1,59"); 
break;

case 101:
printf ("nome:Esponja \nPreço:$4,59 ");
break;
 
case 3:
printf ("nome:Lã de aço \nPreço: $1,79 "); 
break; 
   } 
}

