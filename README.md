# 📦 Simulador de Entregas

> **Trabalho do 1º Bimestre — Linguagem de Programação**

Um simulador desenvolvido em linguagem C para calcular o valor de entregas a partir de distância, peso, modalidade, proteção e tentativas adicionais.

---

## 👨‍💻 Identificação

- **Aluno:** [Gustavo Da silva Rodrigues]
- **Curso:** [Analise e desenvolvimento de sistemas]
- **Disciplina:** [LÓGICA DE PROGRAMAÇÃO E ALGORITMOS]
- **Professor:** [JESSICA SOUSA OLIVEIRA]

---

## 📋 Sobre o projeto

O projeto consiste no desenvolvimento de um **Simulador de Entregas**, executado pelo terminal, capaz de processar várias entregas durante uma mesma sessão.

Para cada entrega, o programa recebe informações como:

- 📍 Distância da entrega;
- ⚖️ Peso da encomenda;
- 🚚 Modalidade de entrega;
- 🛡️ Contratação de proteção;
- 🔄 Quantidade de tentativas adicionais.

A partir dessas informações, o sistema calcula automaticamente o valor final da entrega e apresenta um resumo da operação.

Ao finalizar a sessão, o programa apresenta um resumo geral contendo os principais dados acumulados durante o processamento.

---

## ⚙️ Funcionalidades implementadas

### 💰 Cálculo do valor da entrega

O sistema calcula o valor da entrega seguindo as regras definidas no enunciado:

- Valor base de acordo com a distância;
- Acréscimo por quilômetro;
- Adicional de acordo com o peso;
- Adicional de acordo com a modalidade;
- Valor fixo de proteção;
- Valor das tentativas adicionais.

Os adicionais percentuais são calculados sobre o **subtotal inicial**, sem aplicação de juros compostos entre os adicionais.

### ✅ Validação dos dados

O programa verifica se os valores informados estão dentro das regras estabelecidas.

São validados:

- Distância maior que zero;
- Peso maior que zero;
- Modalidade entre 1 e 3;
- Proteção igual a 0 ou 1;
- Tentativas adicionais maiores ou iguais a zero;
- Continuação da sessão igual a 0 ou 1.

Quando um valor inválido é informado, o programa solicita uma nova entrada.

### 📊 Resumo da sessão

Ao finalizar o cadastro das entregas, o programa apresenta:

- Total de entregas;
- Valor total da sessão;
- Média por entrega;
- Quantidade de entregas Econômicas;
- Quantidade de entregas Express;
- Quantidade de entregas Prioridade;
- Maior valor de entrega;
- Menor valor de entrega.

---

## 🧩 Organização das funções

O programa foi dividido em funções para evitar que toda a lógica fique concentrada na função `main()`.

### Funções de cálculo

| Função | Responsabilidade |
|---|---|
| `calcularValorBase()` | Calcula o valor base de acordo com a distância |
| `calcularAdicionalPeso()` | Calcula o adicional referente ao peso |
| `calcularAdicionalModalidade()` | Calcula o adicional da modalidade escolhida |
| `calcularValorTentativas()` | Calcula o valor das tentativas adicionais |

### Funções de validação

| Função | Responsabilidade |
|---|---|
| `validarDistancia()` | Valida a distância informada |
| `validarPeso()` | Valida o peso informado |
| `validarModalidade()` | Valida a modalidade escolhida |
| `validarProtecao()` | Valida a opção de proteção |
| `validarTentativas()` | Valida o número de tentativas adicionais |
| `validarContinuacao()` | Valida se o usuário deseja cadastrar outra entrega |

A função `main()` é responsável por coordenar o fluxo geral do programa, utilizando as funções para realizar validações e cálculos.

---

## 🗂️ Estrutura do projeto

```text
lpa-trabalho-b1/
│
├── README.md
│
└── src/
    └── main.c
