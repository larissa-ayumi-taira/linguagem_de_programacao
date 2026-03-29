#define _USE_MATH_DEFINES 

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    
    setlocale(LC_ALL,"Portuguese");
    
    float r, t, v;
    
    printf("CALCULE A VELOCIDADE MÉDIA\n\n");
    printf("Digite o raio da roda: ");
    scanf("%f", &r);
    printf("Digite o intervalo de tempo do percurso: ");
    scanf("%f", &t);
    v = (2.0 * M_PI * r) / t;
    printf("\nA velocidade média é igual a %.2f.", v);
}