
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
	
printf("Digite qual das operações deseja realizar: \n1-Soma \n2-Subtração \n3-Divisão \n4-Multiplicação\n"); 
scanf ("%d", &a); 
	 
printf ("Digite os dois valores na ordem que deseja que a operação seja conluida: \n");
scanf ("%f%f", &num1, &num2);
	   
	soma= num1+num2;
	sub= num1-num2; 
	divi=num1/num2; 
	multi= num1*num2; 
		
switch (a) { 

case 1: printf("A soma de %. 2f e  %.2f é: %.2f  " , num1, num2, soma);
break;
		 
case 2: printf("A subtrção de %.2f e %.2f é: %.2f " , num1, num2, sub); 
break;	
	  
case 3: 
printf("A divisão de %.2f e %.2f é: " , num1, num2, divi); 
break; 

case 4:
printf("A multiplicação de %.2f e %.2f é: %.2f ", num1, num2, multi); 
break;
}
}

