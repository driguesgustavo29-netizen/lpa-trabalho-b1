# 📦 Simulador de Entregas

> **Trabalho do 1º Bimestre — Linguagem de Programação**

Um simulador desenvolvido em linguagem C para calcular o valor de entregas a partir de distância, peso, modalidade, proteção e tentativas adicionais.

---

## 👨‍💻 Identificação

* **Aluno:** Gustavo da Silva Rodrigues
* **Curso:** Análise e Desenvolvimento de Sistemas
* **Disciplina:** Lógica de Programação e Algoritmos
* **Professor:** Jessica Sousa Oliveira

---

## 📋 Sobre o projeto

O projeto consiste no desenvolvimento de um **Simulador de Entregas**, executado pelo terminal, capaz de processar várias entregas durante uma mesma sessão.

Para cada entrega, o programa recebe:

* 📍 Distância da entrega;
* ⚖️ Peso da encomenda;
* 🚚 Modalidade de entrega;
* 🛡️ Contratação de proteção;
* 🔄 Quantidade de tentativas adicionais.

A partir dessas informações, o sistema calcula automaticamente o valor final da entrega e apresenta um resumo da operação.

Ao finalizar a sessão, o programa apresenta um resumo geral contendo os principais dados acumulados durante o processamento.

---

## ⚙️ Funcionalidades implementadas

### 💰 Cálculo do valor da entrega

O sistema calcula o valor da entrega seguindo as regras definidas no enunciado:

* Valor base de acordo com a distância;
* Acréscimo por quilômetro;
* Adicional de acordo com o peso;
* Adicional de acordo com a modalidade;
* Valor fixo de proteção;
* Valor das tentativas adicionais.

Os adicionais percentuais são calculados sobre o **subtotal inicial**, sem aplicação de um adicional sobre o outro.

### ✅ Validação dos dados

O programa verifica se os valores informados estão dentro das regras estabelecidas.

São validados:

* Distância maior que zero;
* Peso maior que zero;
* Modalidade entre 1 e 3;
* Proteção igual a 0 ou 1;
* Tentativas adicionais maiores ou iguais a zero;
* Continuação da sessão igual a 0 ou 1.

Quando um valor inválido é informado, o programa solicita uma nova entrada.

### 📊 Resumo da sessão

Ao finalizar o cadastro das entregas, o programa apresenta:

* Total de entregas;
* Valor total da sessão;
* Média por entrega;
* Quantidade de entregas Econômicas;
* Quantidade de entregas Express;
* Quantidade de entregas Prioridade;
* Maior valor de entrega;
* Menor valor de entrega.

---

## 🧩 Organização das funções

O programa foi dividido em funções para evitar que toda a lógica fique concentrada na função `main()`.

### Funções de cálculo

| Função                          | Responsabilidade                               |
| ------------------------------- | ---------------------------------------------- |
| `calcularValorBase()`           | Calcula o valor base de acordo com a distância |
| `calcularAdicionalPeso()`       | Calcula o adicional referente ao peso          |
| `calcularAdicionalModalidade()` | Calcula o adicional da modalidade escolhida    |
| `calcularValorTentativas()`     | Calcula o valor das tentativas adicionais      |

### Funções de validação

| Função                 | Responsabilidade                                   |
| ---------------------- | -------------------------------------------------- |
| `validarDistancia()`   | Valida a distância informada                       |
| `validarPeso()`        | Valida o peso informado                            |
| `validarModalidade()`  | Valida a modalidade escolhida                      |
| `validarProtecao()`    | Valida a opção de proteção                         |
| `validarTentativas()`  | Valida o número de tentativas adicionais           |
| `validarContinuacao()` | Valida se o usuário deseja cadastrar outra entrega |

A função `main()` é responsável por coordenar o fluxo geral do programa, utilizando as funções para realizar as validações e os cálculos.

---

## 🗂️ Estrutura do projeto

```text
lpa-trabalho-b1/
│
├── README.md
│
└── src/
    └── main.c
```

---

## 🛠️ Tecnologias utilizadas

| Tecnologia       | Utilização               |
| ---------------- | ------------------------ |
| **C**            | Linguagem de programação |
| **GCC**          | Compilação do programa   |
| **Terminal**     | Execução do programa     |
| **Git / GitHub** | Versionamento do projeto |

---

## ▶️ Como compilar

O programa pode ser compilado utilizando o GCC.

Dentro da pasta principal do projeto, execute:

```bash
gcc src/main.c -o simulador
```

Se a compilação for realizada corretamente, será gerado o executável `simulador`.

---

## 🚀 Como executar

Após a compilação, execute:

```bash
./simulador
```

No Windows, também é possível executar o arquivo:

```text
simulador.exe
```

---

## 🧪 Testes realizados

Foram realizados os testes previstos no enunciado do trabalho.

| Teste | Distância |  Peso | Modalidade | Proteção | Tentativas |     Resultado |
| ----- | --------: | ----: | ---------- | -------- | ---------: | ------------: |
| 1     |      3 km |  1 kg | Econômica  | Não      |          0 |  **R$ 11,60** |
| 2     |      5 km |  2 kg | Express    | Sim      |          0 |  **R$ 23,60** |
| 3     |      8 km |  3 kg | Express    | Sim      |          2 |  **R$ 41,42** |
| 4     |     15 km |  5 kg | Prioridade | Não      |          1 |  **R$ 44,50** |
| 5     |     20 km |  7 kg | Econômica  | Sim      |          0 |  **R$ 53,70** |
| 6     |     35 km | 12 kg | Prioridade | Sim      |          3 | **R$ 120,00** |

### 🔎 Testes de validação

Também foram realizados testes com valores inválidos para verificar o funcionamento das validações:

* Distância igual a zero;
* Distância negativa;
* Peso igual a zero;
* Peso negativo;
* Modalidade fora do intervalo de 1 a 3;
* Proteção diferente de 0 ou 1;
* Número negativo de tentativas;
* Opção de continuação diferente de 0 ou 1.

Os valores inválidos foram rejeitados e o programa solicitou uma nova entrada.

---

## 📈 Versionamento

O desenvolvimento foi realizado de forma progressiva utilizando commits no GitHub.

Durante a implementação foram adicionados gradualmente:

* Estrutura inicial do programa;
* Entrada e validação da distância;
* Cálculo do valor por distância;
* Cálculo do adicional por peso;
* Cálculo da modalidade;
* Cálculo do valor total;
* Contadores e acumuladores da sessão;
* Controle de maior e menor entrega;
* Modularização dos cálculos;
* Modularização das validações;
* Cálculo da média da sessão;
* Organização das constantes utilizadas pelo sistema.

Os commits representam etapas reais da evolução do projeto.

---

## 🤖 Uso de Inteligência Artificial

Foi utilizada Inteligência Artificial como ferramenta de apoio durante o desenvolvimento do projeto.

### Ferramenta utilizada

**ChatGPT — OpenAI**

### Finalidades

A ferramenta foi utilizada principalmente para:

* Auxiliar na compreensão dos conceitos de programação em C;
* Explicar erros de compilação;
* Sugerir formas de organizar o código;
* Auxiliar na criação e organização de funções;
* Revisar cálculos e regras do sistema;
* Auxiliar na elaboração da documentação do projeto;
* Sugerir casos de teste.

### Exemplos de prompts utilizados

Alguns exemplos de solicitações realizadas:

> "Explique esse código em C de forma simples."

> "Me ajude a criar uma função para calcular o adicional por peso."

> "Verifique se esse cálculo está de acordo com as regras do trabalho."

> "Me ajude a testar o programa com os casos exigidos pelo enunciado."

### Alterações realizadas pelo aluno

As sugestões fornecidas pela Inteligência Artificial foram analisadas e adaptadas ao projeto. O código foi testado, corrigido e executado pelo aluno durante o desenvolvimento.

A utilização da ferramenta teve como objetivo auxiliar o aprendizado e o desenvolvimento do projeto, não substituindo a compreensão e verificação do código.

---

## 📚 Fontes externas

Não foram utilizados códigos de terceiros ou bibliotecas externas além dos recursos padrão da linguagem C.

---

## ✅ Status do projeto

**Projeto concluído e testado.**

* ✔️ Cálculos implementados
* ✔️ Validações implementadas
* ✔️ Repetição de entregas implementada
* ✔️ Contadores e acumuladores implementados
* ✔️ Maior e menor entrega implementados
* ✔️ Média da sessão implementada
* ✔️ Funções e modularização implementadas
* ✔️ Testes oficiais realizados
* ✔️ Testes de valores inválidos realizados
* ✔️ Documentação criada
* ✔️ Versionamento realizado no GitHub
