
#include <stdio.h>
#include <locale.h>

void main(void){
	
setlocale (LC_ALL, "Portuguese");

int a; 

printf("Digite o c�digo do produto que quer saber a classifica��o:\n");
 scanf ("%d", &a);
 
  switch (a) { 
  
case 1:
printf("Alimento n�o perec�vel"); 
break; 

case 101: 
printf("alimento perec�vel"); 
break; 

case 3: 
printf("vestu�rio"); 
break; 

case 4: 
printf ("limpeza"); 
break; 
}
}

