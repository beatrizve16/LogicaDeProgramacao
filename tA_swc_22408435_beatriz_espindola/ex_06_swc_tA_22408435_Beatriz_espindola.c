
#include <stdio.h>
#include <locale.h>

void main(void){
	
setlocale (LC_ALL, "Portuguese");

int a; 

printf("Digite o código do produto que quer saber a classificação:\n");
 scanf ("%d", &a);
 
  switch (a) { 
  
case 1:
printf("Alimento não perecível"); 
break; 

case 101: 
printf("alimento perecível"); 
break; 

case 3: 
printf("vestuário"); 
break; 

case 4: 
printf ("limpeza"); 
break; 
}
}

