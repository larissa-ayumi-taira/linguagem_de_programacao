#include <stdio.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL,"Portuguese");
    
    float d, r;
    
    printf("CONVERSÃO DE DÓLARES PARA REAIS\n\n");
    
    printf("Digite um valor em dólares: U$ ");
    scanf("%f", &d);
    r = 2 * d;
    printf("\nU$ %.2f equivale a R$ %.2f.", d, r);
    
}