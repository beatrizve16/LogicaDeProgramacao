#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(void) {
    int matriz[3][3];
    int i;
    int j;
    int k;

    printf("Digite os numeros da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("numero [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz digitada:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Digite um número para multiplicar a matriz: ");
    scanf("%d", &k);

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz[i][j] *= k;
        }
    }

    printf("Matriz multiplicada por %d:\n" , k);
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

}
