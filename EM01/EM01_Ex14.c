// liberar funùùes matemùticas
#define _USE_MATH_DEFINES 
// #includes
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
// liberar acentos pt/br
    setlocale(LC_ALL, "Portuguese");

// titulo e declaraùùo de variùveis
    printf ("CALCULADORA DE AREA E COMPRIMENTO DE UM CÕRCULO\n\n");
    float raio, area, comprimento;

// input
    printf("Digite o valor do raio do cÌrculo (em cm, utilizando vÌrgula como separador decimal):\n");
    scanf(" %f", &raio);

// c¡lculos 
    area = M_PI * raio * raio;
    comprimento = 2 * M_PI * raio;

// resultados
    printf("\nRaio do cÌrculo: %.2f cm", raio);
    printf("\n¡rea do cÌrculo: %.2f cm≤", area);
    printf("\nComprimento do cÌrculo: %.2f cm\n\n", comprimento);

    return 0;
}
