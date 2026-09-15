#include <stdio.h>

int main() {
    double distancia;
    double peso;
    double valorBase;
    double subtotal;
    double percentualPeso;
    double adicionalPeso;
    int modalidade;
    double percentualModalidade;
    double adicionalModalidade;
    int protecao;
    double valorProtecao;
    int tentativasAdicionais;
    double valorTentativas;
    double valorTotal;

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

    printf("Digite a modalidade (1-Economica, 2-Express, 3-Prioridade): ");
    scanf("%d", &modalidade);

    while (modalidade < 1 || modalidade > 3) {
        printf("Modalidade invalida. Digite 1, 2 ou 3: ");
        scanf("%d", &modalidade);
    }

    printf("Deseja protecao? (1-Sim, 0-Nao): ");
    scanf("%d", &protecao);

    while (protecao != 0 && protecao != 1) {
        printf("Opcao invalida. Digite 1 para Sim ou 0 para Nao: ");
        scanf("%d", &protecao);
    }

    printf("Digite o numero de tentativas adicionais: ");
    scanf("%d", &tentativasAdicionais);

    while (tentativasAdicionais < 0) {
        printf("Numero invalido. Digite 0 ou mais: ");
        scanf("%d", &tentativasAdicionais);
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

    if (modalidade == 1) {
        percentualModalidade = 0.00;
    } else if (modalidade == 2) {
        percentualModalidade = 0.15;
    } else {
        percentualModalidade = 0.30;
    }

    adicionalModalidade = subtotal * percentualModalidade;

    if (protecao == 1) {
        valorProtecao = 7.50;
    } else {
        valorProtecao = 0.00;
    }

    valorTentativas = tentativasAdicionais * 4.00;
    valorTotal = subtotal + adicionalPeso + adicionalModalidade + valorProtecao + valorTentativas;

    printf("\n=== RESUMO DA ENTREGA ===\n");
    printf("Distancia informada: %.2f km\n", distancia);
    printf("Peso informado: %.2f kg\n", peso);
    printf("Modalidade: %d\n", modalidade);
    printf("Valor base: R$ %.2f\n", valorBase);
    printf("Subtotal inicial: R$ %.2f\n", subtotal);
    printf("Adicional de peso: R$ %.2f\n", adicionalPeso);
    printf("Adicional de modalidade: R$ %.2f\n", adicionalModalidade);
    printf("Valor da protecao: R$ %.2f\n", valorProtecao);
    printf("Valor das tentativas adicionais: R$ %.2f\n", valorTentativas);
    printf("Valor total da entrega: R$ %.2f\n", valorTotal);

    return 0;
}
