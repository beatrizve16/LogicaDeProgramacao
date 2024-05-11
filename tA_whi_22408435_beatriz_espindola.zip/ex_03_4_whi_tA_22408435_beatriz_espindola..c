#include <stdio.h>

int main() {
    int inicio, fim;
    float celsius;

    printf("CONVERSAO FAHRENHEIT - CELSIUS\n");
    printf("CELSIUS\t\t\tFAHRENHEIT\n");

    printf("Digite o valor inicial do intervalo em Fahrenheit: ");
    scanf("%d", &inicio);

    printf("Digite o valor final do intervalo em Fahrenheit: ");
    scanf("%d", &fim);

    while (inicio <= fim) {
        celsius = (5.0 / 9.0) * (inicio - 32);
        printf("%.2f°C\t\t\t%d°F\n", celsius, inicio);
        inicio++;
    }

    return 0;
}
