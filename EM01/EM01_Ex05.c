#include <stdio.h>
#include <locale.h> 

int main() {
    
    setlocale(LC_ALL,"Portuguese");
    
    float B, h, S;
    
    printf("CALCULE A ÁREA DO TRIÂNGULO\n\n");
    printf("Digite a base: ");
    scanf("%f", &B);
    printf("Digite a altura: ");
    scanf("%f", &h);
    
    S = (B * h) / 2;
    
    printf("\nA área do triângulo é igual a %.2f.", S);
    
}