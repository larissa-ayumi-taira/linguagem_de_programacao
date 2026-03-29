#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

// titulo e declaraùùo de variùveis
    printf("CALCULAR O VALOR DE UMA DÕVIDA\n\n");
    float valorDivida, juros, valorJuros, valorFinal;
    int numeroParcelas;
// input
    printf("Digite o valor da dÌvida (em reais):");
    scanf(" %f", &valorDivida);
    printf("Digite o n˙mero de parcelas:");
    scanf(" %d", &numeroParcelas);
    printf("Digite o valor do juros (em %%):");
    scanf(" %f", &juros);
// cùlculos
    valorJuros = valorDivida * (juros / 100) * numeroParcelas;
    valorFinal = valorDivida + valorJuros;

// resultados
    printf("\n\nO valor final da dÌvida È: %.2f (para %d parcelas, foram somados %.2f reais de juros)", valorFinal, numeroParcelas, valorJuros);
    return 0;
}
