#include <stdio.h>
#include <locale.h>

int main() {
// liberar acentos pt/br
    setlocale(LC_ALL, "Portuguese");

// titulo e declaraùùo de variùveis
    printf("CALCULADORA DE CALOR SENSIVEL\n\n");
    float massa, calorSensivel, temperaturaInicial,calorEspecifico, temperaturaFinal, deltaTemperatura;

//input
    printf("Digite a massa do corpo (em g):\n");
    scanf(" %f", &massa);
    printf("Digite a temperatura inicial do corpo (em ∞C):\n");
    scanf(" %f", &temperaturaInicial);
    printf("Digite a temperatura final do corpo (em ∞C):\n");
    scanf(" %f", &temperaturaFinal);
    printf("Digite o calor especÌfico do corpo (em cal/g∞C, com vÌrgula como separador decimal):\n");
    scanf(" %f", &calorEspecifico);

// cùlculos
    deltaTemperatura = temperaturaFinal - temperaturaInicial;
    calorSensivel = massa * deltaTemperatura * calorEspecifico;

// resultados
    printf("\nMassa do corpo: %.3f g", massa);
    printf("\nCalor especÌfico: %.4f cal/g∞C", calorEspecifico);
    printf("\nVariaÁ„o de temperatura (delta T): %.2f ∞C", deltaTemperatura);
    printf("\n\nO calor sensÌvel (Q) que um corpo de massa m (%.3f g) recebe È de: %.2f calorias\n\n", massa, calorSensivel);

    return 0;
}