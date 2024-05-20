// 3. Construa um programa que efetue a leitura, 
// a soma posicional e a impressão do resultado,
//  entre duas matrizes inteiras que comportem 25 elementos.
//   Use uma terceira matriz para armazenar o resultado.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(void){ 

int i, j;
int matriz1[5][5];
int matriz2[5][5];
int soma[5][5];

printf("Matriz 1\n");

for (j=0;j<5;j++){
    for (i=0;i<5;i++){ 
 printf("\nDigite o numero da coluna  %d linha %d: ",j,i);
 scanf("%d", &matriz1[i][j]);
		}
	}

    printf("Matriz 2\n");

for (j=0;j<5;j++){
    for (i=0;i<5;i++){ 
 printf("\nDigite o numero da coluna  %d linha %d: ",j,i);
 scanf("%d", &matriz2[i][j]);
		}
	}

       for (i = 0; i < 5; i++) {
            for (j=0;j<5;j++){
        soma[i][j] = (matriz1[i][j] + matriz2[i][j]);
    }
       }

for (i=0;i<5;i++){ 
    for (j=0;j<5;j++){
 printf("[%d]", soma[i][j]);
		}
        printf("\n");
	}



}

