#include <stdio.h>

int main() {
    int N, count = 0;
    float num, soma = 0.0, media;

    printf("Quantos números você irá digitar? ");
    scanf("%d", &N);

    while (count < N) {
        printf("Insira o próximo número real: ");
        scanf("%f", &num);
       
        soma += num;
        count++;
    }

    media = soma / N;

    printf("A média dos %d números inseridos é: %.2f\n", N, media);

    return 0;
}
