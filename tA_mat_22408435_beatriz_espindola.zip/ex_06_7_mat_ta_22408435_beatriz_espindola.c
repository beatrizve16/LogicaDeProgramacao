//6. Refaça o problema quatro
// para obter a média aritmética dos
// valores de cada linha. No final exiba um 
//relatório com o número da linha e o correspondente
// valor calculado.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(void)
{

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
 int media1 = 0;
int media2 = 0;
 int media3 = 0;
 int media4 = 0;

media1 = soma1/5;
media2 = soma2/5;
media3 = soma3/5;
media4 = soma4/5;

   

    printf("Soma da linha 0=%d\n", media1);
    printf("Soma da linha 1=%d\n", media2);
    printf("Soma da linha 2=%d\n", media3);
    printf("Soma da linha 3=%d\n", media4);

}