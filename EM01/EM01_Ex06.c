#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("CALCULAR A ÁREA DE UM TRAPÉZIO\n\n");
    float baseMaior, baseMenor, altura, area;
    printf("Digite a base maior do trapézio:");
    scanf(" %f", &baseMaior);
    printf("Digite a base menor do trapézio:");
    scanf(" %f", &baseMenor);
    printf("Digite a altura do trapézio:");
    scanf(" %f", &altura);
    area = altura * (baseMaior + baseMenor) / 2;
    printf("\n\nA área do trapézio é: %.2f", area);
    return 0;
}
