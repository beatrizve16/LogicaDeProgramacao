#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main (void){
    setlocale (LC_ALL, "Portuguese");
 
 int senha; 
 
 printf ("Digite a senha");
 scanf ("%d",&senha);
 
 if (senha==123)
 printf ("\nAcesso liberado");
 else 
 printf ("\nSenha incorreta");
}
