#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(void){ 

int i, j;
int matriz[3][4];

for (j=0;j<4;j++){
    for (i=0;i<3;i++){ 
 printf("\nDigite o numero da coluna  %d linha %d: ",j,i);
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
