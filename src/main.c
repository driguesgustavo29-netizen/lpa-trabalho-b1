#include <stdio.h>

int main() {
    double distancia;
    double valorBase;
    double subtotal;

    printf("=== Simulador de Entregas ===\n\n");

    printf("Digite a distancia da entrega em km: ");
    scanf("%lf", &distancia);

    while (distancia <= 0) {
        printf("Distancia invalida. Digite um valor maior que zero: ");
        scanf("%lf", &distancia);
    }

    if (distancia <= 5) {
        valorBase = 8.00;
    } else if (distancia <= 15) {
        valorBase = 12.00;
    } else if (distancia <= 30) {
        valorBase = 18.00;
    } else {
        valorBase = 25.00;
    }

    subtotal = valorBase + (distancia * 1.20);

    printf("\nDistancia informada: %.2f km\n", distancia);
    printf("Valor base: R$ %.2f\n", valorBase);
    printf("Subtotal: R$ %.2f\n", subtotal);

    return 0;
}
