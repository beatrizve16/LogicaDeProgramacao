#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (void){
    setlocale (LC_ALL, "Portuguese");
 
float nota1;
float nota2;
float media;
float p1;
float p2;

printf ("Digite as duas notas\n");
scanf ("%f%f" , &nota1,&nota2);

printf ("Digite os dois pesos \n");
scanf ("%f%f" , &p1,&p2);

media= ((p1*nota1) + (p2*nota2))/(p1+p2);

if (media>=5)
    printf("\n A media final e : %.2f e o aluno foi aprovado", media);
    else
  printf ("\n A media final e: %.2f e o aluno foi reprovado", media);
}
