#include <stdio.h>
#include <locale.h> 

int main() {
    
    float a, b, soma, dif, prod;
    
    setlocale(LC_ALL,"Portuguese");
    
    printf("PROGRAMA DE SOMA, DIFERENÇA E PRODUTO ENTRE 2 VALORES REAIS");
    printf("\n\nDigite o primeiro valor: ");
    scanf("%f", &a);
    printf("\nDigite o segundo valor: ");
    scanf("%f", &b);
    
    soma = a + b;
    dif = a - b;
    prod = a * b;
    
    printf("\nA soma é %.2f.\nA diferença é %.2f\nO produto é %.2f", soma, dif, prod);
}