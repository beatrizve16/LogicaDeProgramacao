#include <stdio.h>

int main() {
    int numero, quantidade_numeros = 0;

    printf("Digite os n�meros (digite -1 para sair):\n");

    while (1) {
        printf("Digite um n�mero: ");
        scanf("%d", &numero);

        if (numero == -1) {
            break;
        }

        quantidade_numeros++;
    }

    printf("Quantidade de n�meros digitados: %d\n", quantidade_numeros);

    return 0;
}
