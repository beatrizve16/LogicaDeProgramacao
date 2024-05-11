#include <stdio.h>

int main() {
    int numero, quantidade_numeros = 0;

    printf("Digite os números (digite -1 para sair):\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero == -1) {
            break;
        }

        quantidade_numeros++;
    }

    printf("Quantidade de números digitados: %d\n", quantidade_numeros);

    return 0;
}
