#include <stdio.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL,"Portuguese");
    
    float a, b, A, P;
    
    printf("CÁLCULO DAS INFORMAÇÕES DO RETÂNGULO\n\n");
    printf("Digite o tamanho do menor lado: ");
    scanf("%f", &a);
    printf("Digite o tamanho do maior lado: ");
    scanf("%f", &b);
    
    A = a * b;
    P = 2 * (a + b);
    
    printf("\nInformações:\nÁrea: %.2f\nPerímetro: %.2f", A, P);
}