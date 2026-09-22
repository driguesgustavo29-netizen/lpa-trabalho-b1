# Simulador de Entregas

## Identificação

- Aluno: Gustavo da Silva
- Curso: Análise e Desenvolvimento de Sistemas
- Disciplina: [NOME DA DISCIPLINA]
- Professor(a): [NOME DO PROFESSOR]
- Trabalho: Trabalho do 1º Bimestre

## Sobre o projeto

O projeto consiste no desenvolvimento de um Simulador de Entregas em linguagem C, executado no terminal.

O sistema permite cadastrar várias entregas durante uma sessão e calcular o valor de cada entrega de acordo com a distância, peso, modalidade, proteção e quantidade de tentativas adicionais.

Ao final da sessão, o programa apresenta um resumo com informações acumuladas das entregas realizadas.

## Funcionalidades implementadas

O sistema possui as seguintes funcionalidades:

- Entrada e validação da distância da entrega.
- Entrada e validação do peso da entrega.
- Escolha e validação da modalidade:
  - Econômica;
  - Express;
  - Prioridade.
- Escolha e validação da contratação de proteção.
- Entrada e validação da quantidade de tentativas adicionais.
- Cálculo do valor base de acordo com a distância.
- Cálculo do adicional de peso.
- Cálculo do adicional da modalidade.
- Cálculo do valor da proteção.
- Cálculo do valor das tentativas adicionais.
- Cálculo do valor total da entrega.
- Cadastro de várias entregas na mesma sessão.
- Contagem da quantidade de entregas por modalidade.
- Cálculo do valor total da sessão.
- Cálculo da média por entrega.
- Identificação do maior valor de entrega.
- Identificação do menor valor de entrega.
- Validação da opção de continuar ou encerrar a sessão.

## Organização das funções

O programa foi organizado em funções com responsabilidades específicas, deixando a função `main()` responsável principalmente pela coordenação do fluxo do programa.

### Funções de cálculo

- `calcularValorBase()`
  - Calcula o valor base de acordo com a distância informada.

- `calcularAdicionalPeso()`
  - Calcula o adicional de acordo com o peso da entrega e o subtotal inicial.

- `calcularAdicionalModalidade()`
  - Calcula o adicional de acordo com a modalidade escolhida.

- `calcularValorTentativas()`
  - Calcula o valor das tentativas adicionais.

### Funções de validação

- `validarDistancia()`
  - Garante que a distância seja maior que zero.

- `validarPeso()`
  - Garante que o peso seja maior que zero.

- `validarModalidade()`
  - Aceita somente as modalidades 1, 2 ou 3.

- `validarProtecao()`
  - Aceita somente as opções 0 ou 1.

- `validarTentativas()`
  - Garante que a quantidade de tentativas adicionais seja maior ou igual a zero.

- `validarContinuacao()`
  - Aceita somente as opções 0 ou 1 para continuar ou encerrar a sessão.

## Estrutura do projeto

```text
lpa-trabalho-b1/
├── README.md
└── src/
    └── main.c
