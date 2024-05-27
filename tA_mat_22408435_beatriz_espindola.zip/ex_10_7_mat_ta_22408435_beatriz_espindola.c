#include <stdio.h>

int main() {
    // Definindo a matriz de tempos entre as cidades
    int tempos[7][7] = {
        {0, 2, 11, 6, 15, 11, 1},
        {2, 0, 7, 12, 4, 2, 15},
        {11, 7, 0, 11, 8, 3, 13},
        {6, 12, 11, 0, 10, 2, 1},
        {15, 4, 8, 10, 0, 5, 13},
        {11, 2, 3, 2, 5, 0, 14},
        {1, 15, 13, 1, 13, 14, 0}
    };

    char *cidades[7] = {
        "Osgliath",
        "Minas Tirith",
        "Edoras",
        "Isengard",
        "Esgaroth",
        "Edoras", // Mantendo a duplicação conforme a tabela fornecida
        "Valfenda"
    };

    int origem, destino;

    printf("Selecione a cidade de origem pelo número correspondente:\n");
    for (int i = 0; i < 7; i++) {
        printf("%d - %s\n", i, cidades[i]);
    }
    printf("Digite o número da cidade de origem: ");
    scanf("%d", &origem);

    if (origem < 0 || origem >= 7) {
        printf("Cidade de origem inválida.\n");
        return 1;
    }

    printf("Selecione a cidade de destino pelo número correspondente:\n");
    for (int i = 0; i < 7; i++) {
        printf("%d - %s\n", i, cidades[i]);
    }
    printf("Digite o número da cidade de destino: ");
    scanf("%d", &destino);

    // Validar entrada da cidade de destino
    if (destino < 0 || destino >= 7) {
        printf("Cidade de destino inválida.\n");
        return 1;
    }

    printf("O tempo necessário para percorrer de %s para %s é de %d horas.\n",
           cidades[origem], cidades[destino], tempos[origem][destino]);

    return 0;
}

