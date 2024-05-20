//5. Somar uma matriz por coluna, ou seja, 
//obter o total de cada coluna da matriz. 
//No final gere uma tela de saída mostrando 
//esses valores e o total geral de toda a matriz. 
//Use uma matriz 4 x 5.


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {


    int i, j;
    int matriz1[4][5];

    int soma1 = 0;
    int soma2 = 0;
    int soma3 = 0;
    int soma4 = 0;
    int soma5 = 0;

    printf("Matriz 1\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("\nDigite o numero da linha  %d coluna %d: ", i, j);
            scanf("%d", &matriz1[i][j]);

            if (j == 0)
            {
                soma1 += matriz1[i][j];
            }

            if (j == 1)
            {
                soma2 += matriz1[i][j];
            }

            if (j == 2)
            {
                soma3 += matriz1[i][j];
            }

            if (j == 3)
            {
                soma4 += matriz1[i][j];
            }

            if (j == 4)
            {
                soma5 += matriz1[i][j];
            }
       
        }
    }

   

    printf("Soma da coluna 0=%d\n", soma1);
    printf("Soma da coluna 1=%d\n", soma2);
    printf("Soma da coluna 2=%d\n", soma3);
    printf("Soma da coluna 3=%d\n", soma4);
    printf("Soma da coluna 3=%d\n", soma5);

return 0;
}
