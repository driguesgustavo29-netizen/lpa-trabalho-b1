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

Como compilar

O programa pode ser compilado utilizando o GCC com o seguinte comando:

gcc src/main.c -o simulador
Como executar

Após a compilação, execute:

./simulador

No Windows, também pode ser executado o arquivo gerado:

simulador.exe
Testes realizados

Foram realizados os testes previstos no enunciado do trabalho, incluindo os casos oficiais de cálculo:

Teste	Distância	Peso	Modalidade	Proteção	Tentativas	Resultado
1	3 km	1 kg	Econômica	Não	0	R$ 11,60
2	5 km	2 kg	Express	Sim	0	R$ 23,60
3	8 km	3 kg	Express	Sim	2	R$ 41,42
4	15 km	5 kg	Prioridade	Não	1	R$ 44,50
5	20 km	7 kg	Econômica	Sim	0	R$ 53,70
6	35 km	12 kg	Prioridade	Sim	3	R$ 120,00

Também foram realizados testes de validação para:

Distância igual a zero;
Peso igual a zero;
Modalidade inválida;
Proteção inválida;
Número negativo de tentativas adicionais;
Opção inválida para continuar a sessão.
Versionamento

O desenvolvimento foi realizado de forma incremental utilizando GitHub, com commits representando etapas reais de evolução do programa.

Entre as etapas desenvolvidas estão:

Criação da estrutura inicial;
Entrada e validação da distância;
Cálculo do valor por distância;
Cálculo do adicional por peso;
Cálculo da modalidade;
Cálculo do valor total;
Implementação dos contadores e acumuladores da sessão;
Implementação do maior e menor valor;
Modularização das funções de cálculo;
Modularização das validações;
Implementação da média da sessão;
Organização dos valores fixos por meio de constantes.
Uso de Inteligência Artificial

Foi utilizada a ferramenta ChatGPT como apoio durante o desenvolvimento do trabalho.

Finalidade do uso

A ferramenta foi utilizada principalmente para:

Auxiliar na compreensão dos requisitos do enunciado;
Explicar conceitos de linguagem C;
Sugerir formas de organizar o código em funções;
Auxiliar na identificação e correção de erros de compilação;
Sugerir testes para verificar o funcionamento do programa;
Revisar se as funcionalidades implementadas estavam de acordo com os requisitos do trabalho.
Exemplos de prompts utilizados

Alguns exemplos de solicitações feitas durante o desenvolvimento foram:

"Explique o que essa parte do código em C está fazendo."
"Me ajude a modularizar esse código em funções."
"Esse resultado está de acordo com o enunciado?"
"Me ajude a identificar por que esse código não está compilando."
"Quais testes preciso fazer para validar essa função?"
Sugestões adotadas e alterações realizadas

As sugestões apresentadas pela ferramenta foram analisadas durante o desenvolvimento e adaptadas ao projeto.

Entre as sugestões utilizadas estão a divisão do programa em funções de cálculo e validação, a organização dos contadores e acumuladores da sessão, a implementação do cálculo da média e a utilização de constantes para valores fixos.

As alterações foram realizadas e testadas no ambiente de desenvolvimento antes de serem incorporadas ao projeto.

O código final foi revisado e os testes previstos no enunciado foram executados para verificar os resultados.
