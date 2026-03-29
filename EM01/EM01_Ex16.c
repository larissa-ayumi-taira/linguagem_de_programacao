#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("CALCULADORA DE MEDIA FINAL BIMESTRAL\n\n");
    float nota1, nota2, nota3, nota4, media;
    printf("Digite a primeira nota (utilizando vírgula como separador decimal):\n");
    scanf(" %f", &nota1);
    printf("Digite a segunda nota (utilizando vírgula como separador decimal):\n");
    scanf(" %f", &nota2);
    printf("Digite a terceira nota (utilizando vírgula como separador decimal):\n");
    scanf(" %f", &nota3);
    printf("Digite a quarta nota (utilizando vírgula como separador decimal):\n");
    scanf(" %f", &nota4);
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("\n\nA média final das quatro notas bimestrais é: %.2f\n\n", media);

    return 0;
}
