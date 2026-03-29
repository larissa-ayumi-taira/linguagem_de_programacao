#define _USE_MATH_DEFINES 

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    
    setlocale(LC_ALL,"Portuguese");
    
    float V, A, R;
    
    printf("CALCULAR ÁREA E VOLUME DE UMA ESFERA\n\n");

    printf("Digite o valor do raio da esfera (em cm): ");
    scanf("%f", &R);

    V = (4.0/3.0) * M_PI * pow(R,3);
    A = 4 * M_PI * pow(R,2);

    printf("\nInformações:\nVolume: %.2f cm³\nÁrea: %.2f cm²", V, A);
}
