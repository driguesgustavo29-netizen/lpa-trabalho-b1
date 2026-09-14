#include <stdio.h>

int main() {
    double distancia;
    double peso;
    double valorBase;
    double subtotal;
    double percentualPeso;
    double adicionalPeso;

    printf("=== Simulador de Entregas ===\n\n");

    printf("Digite a distancia da entrega em km: ");
    scanf("%lf", &distancia);

    while (distancia <= 0) {
        printf("Distancia invalida. Digite um valor maior que zero: ");
        scanf("%lf", &distancia);
    }

    printf("Digite o peso da entrega em kg: ");
    scanf("%lf", &peso);

    while (peso <= 0) {
        printf("Peso invalido. Digite um valor maior que zero: ");
        scanf("%lf", &peso);
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

    if (peso <= 2) {
        percentualPeso = 0.00;
    } else if (peso <= 5) {
        percentualPeso = 0.05;
    } else if (peso <= 10) {
        percentualPeso = 0.10;
    } else {
        percentualPeso = 0.20;
    }

    adicionalPeso = subtotal * percentualPeso;

    printf("\nDistancia informada: %.2f km\n", distancia);
    printf("Peso informado: %.2f kg\n", peso);
    printf("Valor base: R$ %.2f\n", valorBase);
    printf("Subtotal inicial: R$ %.2f\n", subtotal);
    printf("Adicional de peso: R$ %.2f\n", adicionalPeso);

    return 0;
}
