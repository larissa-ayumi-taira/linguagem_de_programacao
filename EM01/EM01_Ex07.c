#include <stdio.h>
#include <locale.h> 
#include <math.h>

int main() {
    
    setlocale(LC_ALL,"Portuguese");
    
    float co, ca, hip, sen, cos;
    
    printf("SENO E COSSENO DO ÂNGULO\n\n");
    printf("Digite a medida do cateto oposto: ");
    scanf("%f", &co);

    printf("Digite a medida do cateto adjacente: ");
    scanf("%f", &ca);

    printf("Digite a medida da hipotenusa: ");
    scanf("%f", &hip);
    
    if (co == 0 || ca == 0 || hip == 0){
        printf("\nNao é um triângulo.\n");
    } else {
        if (hip != 0) {
            sen = co / hip;
            cos = ca / hip;
    
            printf("\nResultados:\n");
            printf("Seno: %.2f\n", sen);
            printf("Cosseno: %.2f\n", cos);
        } else {
            printf("\nErro: A hipotenusa não pode ser zero.\n");
        }
    }
}