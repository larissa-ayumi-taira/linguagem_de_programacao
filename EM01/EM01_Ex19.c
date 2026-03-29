#include <stdio.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL,"Portuguese");
    
    float AP, LP, AA, LA, areaP, areaA;
    int qtd;
    
    printf("CÁLCULO DA QUANTIDADE DE AZULEJOS\n\n");
    
    printf("Digite a altura da parede: ");
    scanf("%f", &AP);
    printf("Digite o comprimento da parede: ");
    scanf("%f", &LP);
    printf("\nDigite a altura do azulejo: ");
    scanf("%f", &AA);
    printf("Digite a largura do azulejo: ");
    scanf("%f", &LA);
    
    areaP = AP * LP;
    areaA = AA * LA;
    qtd = areaP / areaA;
    
    printf("\n\nQuantidade de azulejos: %d", qtd);
}