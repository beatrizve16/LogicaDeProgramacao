
#include <stdio.h>
#include <locale.h>

void main(void){
	
setlocale (LC_ALL, "Portuguese");
	
int a; 

printf("Digite o c�digo do produto que quer saber o pre�o/valor\n"); 
scanf ("%d", &a); 

switch (a) {
case 100: 
printf ("nome:Detergente \nPre�o:$1,59"); 
break;

case 101:
printf ("nome:Esponja \nPre�o:$4,59 ");
break;
 
case 3:
printf ("nome:L� de a�o \nPre�o: $1,79 "); 
break; 
   } 
}

