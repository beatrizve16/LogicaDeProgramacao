
#include <stdio.h>
#include <locale.h>

void main(void){
	
setlocale (LC_ALL, "Portuguese");
	
char genero; 
char m; 
char f; 
float altura; 
float pm; 
float pf; 
 
printf("Digite o seu gênero: m ou f\n");
scanf ("%c", &genero); 
 
printf("Digite a sua altura em cm:\n");
scanf("%f", &altura); 
  
pm= (52 + 10.75 * (altura - 152.4));
pf=(52 + 10.67 * (altura - 152.4));
   
switch (genero) {
case 'm':
printf("O seu peso ideal é: %.2f", pm);
break; 
	   
case 'f': 
printf("O seu peso ideal é: %.2f", pf);
break;

	}
}

