#include <stdio.h>

double calcularValorBase(double distancia) {
    double valorBase;

    if (distancia <= 5) {
        valorBase = 8.00;
    } else if (distancia <= 15) {
        valorBase = 12.00;
    } else if (distancia <= 30) {
        valorBase = 18.00;
    } else {
        valorBase = 25.00;
    }

    return valorBase;
}

double calcularAdicionalPeso(double peso, double subtotal) {
    double percentualPeso;

    if (peso <= 2) {
        percentualPeso = 0.00;
    } else if (peso <= 5) {
        percentualPeso = 0.05;
    } else if (peso <= 10) {
        percentualPeso = 0.10;
    } else {
        percentualPeso = 0.20;
    }

    return subtotal * percentualPeso;
}

double calcularAdicionalModalidade(int modalidade, double subtotal) {
    double percentualModalidade;

    if (modalidade == 1) {
        percentualModalidade = 0.00;
    } else if (modalidade == 2) {
        percentualModalidade = 0.15;
    } else {
        percentualModalidade = 0.30;
    }

    return subtotal * percentualModalidade;
}

double calcularValorTentativas(int tentativasAdicionais) {
    return tentativasAdicionais * 4.00;
}

double validarDistancia() {
    double distancia;

    printf("Digite a distancia da entrega em km: ");
    scanf("%lf", &distancia);

    while (distancia <= 0) {
        printf("Distancia invalida. Digite um valor maior que zero: ");
        scanf("%lf", &distancia);
    }

    return distancia;
}

double validarPeso() {
    double peso;

    printf("Digite o peso da entrega em kg: ");
    scanf("%lf", &peso);

    while (peso <= 0) {
        printf("Peso invalido. Digite um valor maior que zero: ");
        scanf("%lf", &peso);
    }

    return peso;
}

int validarModalidade() {
    int modalidade;

    printf("Digite a modalidade (1-Economica, 2-Express, 3-Prioridade): ");
    scanf("%d", &modalidade);

    while (modalidade < 1 || modalidade > 3) {
        printf("Modalidade invalida. Digite 1, 2 ou 3: ");
        scanf("%d", &modalidade);
    }

    return modalidade;
}

int validarProtecao() {
    int protecao;

    printf("Deseja protecao? (1-Sim, 0-Nao): ");
    scanf("%d", &protecao);

    while (protecao != 0 && protecao != 1) {
        printf("Opcao invalida. Digite 1 para Sim ou 0 para Nao: ");
        scanf("%d", &protecao);
    }

    return protecao;
}

int validarTentativas() {
    int tentativasAdicionais;

    printf("Digite o numero de tentativas adicionais: ");
    scanf("%d", &tentativasAdicionais);

    while (tentativasAdicionais < 0) {
        printf("Numero invalido. Digite 0 ou mais: ");
        scanf("%d", &tentativasAdicionais);
    }

    return tentativasAdicionais;
}

int validarContinuacao() {
    int continuar;

    printf("\nDeseja cadastrar outra entrega? (1-Sim, 0-Nao): ");
    scanf("%d", &continuar);

    while (continuar != 0 && continuar != 1) {
        printf("Opcao invalida. Digite 1 para Sim ou 0 para Nao: ");
        scanf("%d", &continuar);
    }

    return continuar;
}

int main() {
    double distancia;
    double peso;
    double valorBase;
    double subtotal;
    double adicionalPeso;
    int modalidade;
    double adicionalModalidade;
    int protecao;
    double valorProtecao;
    int tentativasAdicionais;
    double valorTentativas;
    double valorTotal;
    int continuar;
    int totalEntregas;
    double totalSessao;
    double mediaEntrega;
    int quantidadeEconomica;
    int quantidadeExpress;
    int quantidadePrioridade;
    double maiorEntrega;
    double menorEntrega;

    printf("=== Simulador de Entregas ===\n\n");

    totalEntregas = 0;
    totalSessao = 0.00;
    quantidadeEconomica = 0;
    quantidadeExpress = 0;
    quantidadePrioridade = 0;
    maiorEntrega = 0.00;
    menorEntrega = 0.00;

    do {
        distancia = validarDistancia();
        peso = validarPeso();
        modalidade = validarModalidade();
        protecao = validarProtecao();
        tentativasAdicionais = validarTentativas();

        valorBase = calcularValorBase(distancia);

        subtotal = valorBase + (distancia * 1.20);

        adicionalPeso = calcularAdicionalPeso(peso, subtotal);

        adicionalModalidade = calcularAdicionalModalidade(modalidade, subtotal);

        if (protecao == 1) {
            valorProtecao = 7.50;
        } else {
            valorProtecao = 0.00;
        }

        valorTentativas = calcularValorTentativas(tentativasAdicionais);

        valorTotal = subtotal + adicionalPeso + adicionalModalidade
                   + valorProtecao + valorTentativas;


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

        totalEntregas++;
        totalSessao += valorTotal;

        if (modalidade == 1) {
            quantidadeEconomica++;
        } else if (modalidade == 2) {
            quantidadeExpress++;
        } else {
            quantidadePrioridade++;
        }

        if (totalEntregas == 1) {
            maiorEntrega = valorTotal;
            menorEntrega = valorTotal;
        } else {
            if (valorTotal > maiorEntrega) {
                maiorEntrega = valorTotal;
            }

            if (valorTotal < menorEntrega) {
                menorEntrega = valorTotal;
            }
        }

        continuar = validarContinuacao();

    } while (continuar == 1);
mediaEntrega = totalSessao / totalEntregas;
    printf("\n=== RESUMO DA SESSAO ===\n");
    printf("Total de entregas: %d\n", totalEntregas);
    printf("Valor total da sessao: R$ %.2f\n", totalSessao);
    printf("Media por entrega: R$ %.2f\n", mediaEntrega);
    printf("Quantidade Economica: %d\n", quantidadeEconomica);
    printf("Quantidade Express: %d\n", quantidadeExpress);
    printf("Quantidade Prioridade: %d\n", quantidadePrioridade);
    printf("Maior valor de entrega: R$ %.2f\n", maiorEntrega);
    printf("Menor valor de entrega: R$ %.2f\n", menorEntrega);

    return 0;
}
