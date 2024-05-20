//Elabore um programa, utilizando laços encadeados, 
//para armazenar doze valores numéricos inteiros numa matriz 3 x 4,
//ou seja, numa matriz com 3 linhas e 4 colunas. No final
//mostre os valores armazenados na matriz

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(void){ 

int i, j;
int matriz[3][4];

for (i=0;i<3;i++){
    for (j=0;j<4;j++){ 
 printf("\nDigite o numero da linha  %d coluna %d: ",i,j);
 scanf("%d", &matriz[i][j]);
		}
	}

for (i=0;i<3;i++){
    for (j=0;j<4;j++){ 
 printf("[%d]", matriz[i][j]);
		}
        printf("\n");
	}
}