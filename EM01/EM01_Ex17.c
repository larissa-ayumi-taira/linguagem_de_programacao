#include <stdio.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL,"Portuguese");
    
    float P1, P2, Ativ, m;
    
    printf("MÉDIA SEMESTRAL\n\n");
    printf("Nota da primeira avaliação do semestre: ");
    scanf("%f", &P1);
    printf("Nota da segunda avaliação do semestre: ");
    scanf("%f", &P2);
    printf("Nota das atividades do semestre: ");
    scanf("%f", &Ativ);
    
    m = (P1 * 4 + P2 * 4 + Ativ * 2) / 10;
    
    printf("\nMédia final do semestre: %.2f", m);
}