#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("CONVERSÃO DE FARENHEIT PARA CELSIUS\n\n");
    float fahrenheit, celsius;
    printf("Digite a temperatura em Fahrenheit (°F):");
    scanf(" %f", &fahrenheit);
    celsius = (fahrenheit - 32) / 1.8;
    printf("%.2f° Fahrenheit corresponde a %.2f° Celsius.", fahrenheit, celsius);

    return 0;
}
