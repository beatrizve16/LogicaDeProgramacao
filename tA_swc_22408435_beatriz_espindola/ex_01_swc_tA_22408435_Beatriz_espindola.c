
#include <stdio.h>
#include <locale.h>

void main(void){
	
setlocale (LC_ALL, "Portuguese");
	
int dias;

printf("Escolha um dos dias da semana: \n1-Domingo \n2-Segunda \n3-Ter�a \n4-Quarta \n5-Quinta \n6-Sexta \n7-S�bado\n"); 
scanf ("%d", &dias); 

switch (dias) { 
case 1: printf("Final de semana"); 
break; 

case 2: printf("Dia �til");
break;

case 3: printf ("Dia �til");
break; 

case 4: printf ("Dia �til");
break;

case 5: printf("Dia �til"); 
break; 

case 6: printf ("Dia �til"); 
break;

case 7: printf ("Final de semana"); 
break;
	}
}
