#include <stdio.h>

int main() {
    int N, count = 0;
    float num, soma = 0.0, media;

    printf("Quantos n�meros voc� ir� digitar? ");
    scanf("%d", &N);

    while (count < N) {
        printf("Insira o pr�ximo n�mero real: ");
        scanf("%f", &num);
       
        soma += num;
        count++;
    }

    media = soma / N;

    printf("A m�dia dos %d n�meros inseridos �: %.2f\n", N, media);

    return 0;
}
