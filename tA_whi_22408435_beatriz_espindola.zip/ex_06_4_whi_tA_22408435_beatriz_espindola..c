#include <stdio.h>

int main() {
    int numero;
    int soma = 0;

    printf("Digite n�meros positivos (digite um n�mero negativo para parar):\n");

    do {
        printf("Digite um n�mero: ");
        scanf("%d", &numero);

        if (numero >= 0) {
            soma += numero;
        }
    } while (numero >= 0);

    printf("A soma dos n�meros positivos �: %d\n", soma);

    return 0;
}

