#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("CALCULAR A POSICAO S DE UM CORPO.\n\n");
    float s0, v0, t, a, S;
    printf("Digite a posição inicial do corpo (em metros):\n");
    scanf(" %f", &s0);
    printf("Digite a velocidade inicial do corpo (em metros/segundo):\n");
    scanf(" %f", &v0);
    printf("Digite o tempo (em segundos):\n");
    scanf(" %f", &t);
    printf("Digite a aceleração do corpo (em metros/segundo²):\n");
    scanf(" %f", &a);
    S = s0 + v0 * t + (a/2) * t * t;
    printf("\n\nA posição final do corpo é: %.2f metros\n\n", S);

    return 0;
}
