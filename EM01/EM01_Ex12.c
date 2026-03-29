#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("CONVERSOR DE REAL EM DÓLAR\n\n");
    float valorReais, valorDolares;
    printf("Digite o valor em reais (utilizando vírgula como separador decimal):\n");
    scanf(" %f", &valorReais);
    valorDolares = valorReais / 2.00; // R$ 2,00 = US$ 1,00
    printf("\nValor em reais: %.2f", valorReais);
    printf("\nR$ %.2f equivalem a US$ %.2f (considerando que R$ 2,00 = US$ 1,00)\n\n", valorReais, valorDolares);
    return 0;
}
