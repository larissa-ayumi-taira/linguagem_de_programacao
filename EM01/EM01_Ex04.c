#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("MÉDIA DE TRÊS NOTAS\n\n");
    float nota1, nota2, nota3, media;
    printf("Digite a primeira nota:");
    scanf(" %f", &nota1);
    printf("Digite a segunda nota:");
    scanf(" %f", &nota2);
    printf("Digite a terceira nota:");
    scanf(" %f", &nota3);
    media = (nota1 + nota2 + nota3) / 3;
    printf("\n\nA média das notas %.2f, %.2f e %.2f é: %.2f", nota1, nota2, nota3, media);

    return 0;
}
