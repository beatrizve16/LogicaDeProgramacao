
#include <stdio.h>
#include <locale.h>

void main(void){
	
setlocale (LC_ALL, "Portuguese");
	
int a;
float num1;
float num2; 
float soma; 
float sub;
float divi;
float multi;
	
printf("Digite qual das opera��es deseja realizar: \n1-Soma \n2-Subtra��o \n3-Divis�o \n4-Multiplica��o\n"); 
scanf ("%d", &a); 
	 
printf ("Digite os dois valores na ordem que deseja que a opera��o seja conluida: \n");
scanf ("%f%f", &num1, &num2);
	   
	soma= num1+num2;
	sub= num1-num2; 
	divi=num1/num2; 
	multi= num1*num2; 
		
switch (a) { 

case 1: printf("A soma de %. 2f e  %.2f �: %.2f  " , num1, num2, soma);
break;
		 
case 2: printf("A subtr��o de %.2f e %.2f �: %.2f " , num1, num2, sub); 
break;	
	  
case 3: 
printf("A divis�o de %.2f e %.2f �: " , num1, num2, divi); 
break; 

case 4:
printf("A multiplica��o de %.2f e %.2f �: %.2f ", num1, num2, multi); 
break;
}
}

