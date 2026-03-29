#include <stdio.h>
#include <locale.h> 

int main () {
    
    setlocale(LC_ALL,"Portuguese");
    
    float c, f;
    
    printf("CONVERSÃO DE CELSIUS PARA FARENHEIT\n\n");
    printf("Digite um valor em °C: ");
    scanf("%f", &c);
    f = (c * 1.8) + 32;
    
    printf("O valor de %.2f°C corresponde a %.2f°F", c, f);
    
}