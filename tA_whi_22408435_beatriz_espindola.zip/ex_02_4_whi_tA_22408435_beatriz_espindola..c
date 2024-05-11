#include <stdio.h>

int main() {
    int fahrenheit = 32;
    float celsius;

    printf("CONVERSAO FAHRENHEIT - CELSIUS\n");
    printf("CELSIUS        FAHRENHEIT\n");

    while (fahrenheit < 52) {
        celsius = (5.0 / 9.0) * (fahrenheit - 32);
        printf("%.2fC          %dF\n", celsius, fahrenheit);
        fahrenheit++;
    }

    return 0;
}
