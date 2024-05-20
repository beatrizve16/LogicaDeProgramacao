//. Na matriz 4 x 5 do problema quatro, selecione a 
//linha que tem o maior total, ou seja, soma
//dos valores da linha. No final mostre o 
//maior total encontrado e em qual linha ele se encontra.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(void)
{
    int i, j;
    int matriz1[4][5];
    int soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0;
    int maior = 0;
    int linhaMaior = 0;

    printf("Matriz 1\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("\nDigite o numero da linha %d coluna %d: ", i, j);
            scanf("%d", &matriz1[i][j]);

            if (i == 0)
            {
                soma1 += matriz1[i][j];
            }

            if (i == 1)
            {
                soma2 += matriz1[i][j];
            }

            if (i == 2)
            {
                soma3 += matriz1[i][j];
            }

            if (i == 3)
            {
                soma4 += matriz1[i][j];
            }
        }
    }

    printf("Soma da linha 0 = %d\n", soma1);
    printf("Soma da linha 1 = %d\n", soma2);
    printf("Soma da linha 2 = %d\n", soma3);
    printf("Soma da linha 3 = %d\n", soma4);

    maior = soma1;
    linhaMaior = 0;

    if (soma2 > maior)
    {
        maior = soma2;
        linhaMaior = 1;
    }

    if (soma3 > maior)
    {
        maior = soma3;
        linhaMaior = 2;
    }

    if (soma4 > maior)
    {
        maior = soma4;
        linhaMaior = 3;
    }

    printf("A maior soma e %d,  na linha %d.\n", maior, linhaMaior);
}
