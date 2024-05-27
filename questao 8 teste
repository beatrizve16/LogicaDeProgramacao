// Crie um Algoritmo para ler 25 nomes digitados
// pelo usuário e imprimir o nome caso este
// seja 'maria', informando que posição (linha)
// este se encontra dentro da matriz.
// a) Converta todos os caracteres digitados para
// maiúsculas sem utilizar uma função
// para isso. Observe a tabela ASCII.
// b) Conte o total de caracteres convertidos
// para maiúsculos e apresente o valor no final.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(void)

{
    int i, j;
    char matriz[25][20];
    int convertidos = 0;
    int resposta;
    int contadorMaria;
    int indiceLinha=-1;

    for (i = 0; i < 25; i++)
    {
        printf("\nDigite um nome\n");
        for (j = 0; j < 20; j++)
        {
            matriz[i][j] = getche();

            if (matriz[i][j] > 96 && matriz[i][j] < 123)
            {
                matriz[i][j] -= 32;
                convertidos++;
            }

            if (matriz[i][j] == 'M' && j == 0)
            {
                contadorMaria++;
            }
            if (matriz[i][j] == 'A' && j == 1)
            {
                contadorMaria++;
            }
            if (matriz[i][j] == 'R' && j == 2)
            {
                contadorMaria++;
            }
            if (matriz[i][j] == 'I' && j == 3)
            {
                contadorMaria++;
            }
            if (matriz[i][j] == 'A' && j == 4)
            {
                contadorMaria++;
            }
            if (matriz[i][j] == 13 && j == 5)
            {
                contadorMaria++;
            }

            if (contadorMaria == 6)
            {
                indiceLinha = i;
            }

        

            if (matriz[i][j] == 13)
            {
                break;
            }
        }

        contadorMaria = 0;
    }

    if (indiceLinha!=-1)
    {
        printf("Maria linha=%d", indiceLinha);
    }
    else
    {
        printf("o nome Maria nao foi digitado");
    }
    printf("A quantidade de caracteres convertidos foi: %d", convertidos);
}
