#include <stdio.h>

int main() {
    int numero;
    int soma = 0;

    printf("Digite números positivos (digite um número negativo para parar):\n");

    do {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero >= 0) {
            soma += numero;
        }
    } while (numero >= 0);

    printf("A soma dos números positivos é: %d\n", soma);

    return 0;
}

