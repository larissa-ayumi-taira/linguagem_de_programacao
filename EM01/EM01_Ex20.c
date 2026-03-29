#include <stdio.h>
#include <locale.h>
#define valorConstruido 5.00
#define valorNaoConstruido 3.80

int main() {
    setlocale(LC_ALL, "Portuguese");
    // tùtulo e variùveis
    printf("CALCULADORA DE IMPOSTO SOBRE A PROPRIEDADE.\n\n");
    float areaTotal, areaConstruida, areaNaoConstruida, impostoConstruido, impostoNaoConstruido, impostoTotal;

    // input
    printf("Digite a ·rea total do terreno (em metros quadrados): \n");
    scanf("%f", &areaTotal);
    printf("Digite a ·rea construÌda (em metros quadrados): \n");
    scanf("%f", &areaConstruida);

    // calcular ·rea n„o construÌda
    areaNaoConstruida = areaTotal - areaConstruida;

    // calcular imposto
    impostoConstruido = areaConstruida * valorConstruido;
    impostoNaoConstruido = areaNaoConstruida * valorNaoConstruido;
    impostoTotal = impostoConstruido + impostoNaoConstruido;

    // resultados
    printf("\n¡rea total do terreno: %.2f m≤\n", areaTotal);
    printf("¡rea construÌda (R$%.2f/m≤): %.2f m≤ (imposto: R$%.2f)\n", valorConstruido, areaConstruida, impostoConstruido);
    printf("¡rea n„o construÌda (R$%.2f/m≤): %.2f m≤ (imposto: R$%.2f)\n", valorNaoConstruido, areaNaoConstruida, impostoNaoConstruido);

    printf("\n\nO imposto total sobre a propriedade È de: R$ %.2f\n\n", impostoTotal);

    return 0;
}
