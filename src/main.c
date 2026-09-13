#include <stdio.h>

int main() {
    double distancia;
    printf("=== Simulador de Entregas ===\n\n");
    printf("Digite a distancia da entrega em km: ");
    scanf("%lf", &distancia);
    while (distancia <= 0) {
        printf("Distancia invalida. Digite um valor maior que zero: ");
        scanf("%lf", &distancia);
    }
    printf("\nDistancia informada: %.2f km\n", distancia);
    return 0;
}
