<div align="center">

# 📊 Análise de Vetor em C

![C](https://img.shields.io/badge/language-C-00599C?style=flat-square&logo=c&logoColor=white)
![GCC](https://img.shields.io/badge/compiler-GCC-4EAA25?style=flat-square&logo=gnu&logoColor=white)
![Status](https://img.shields.io/badge/status-conclu%C3%ADdo-brightgreen?style=flat-square)
![License](https://img.shields.io/badge/license-MIT-blue?style=flat-square)
![Course](https://img.shields.io/badge/disciplina-Algoritmos%20%26%20Pensamento%20Computacional-orange?style=flat-square)

**[🇧🇷 Português](#-português)** • **[🇺🇸 English](#-english)**

</div>

---

## 🇧🇷 Português

### 1. Identificação

- **Aluno:** Piêtro Bitencourt Nunes
- **Disciplina:** Algoritmos e Pensamento Computacional
- **Professora:** Profa. Karla Sartin
- **Título do projeto:** Atividade: Array (Vetor)

### 2. Objetivo

O programa tem como objetivo aplicar, em linguagem C, os conceitos de **arrays (vetores)**, estruturas de repetição, estruturas condicionais, entrada de dados e operações matemáticas. Ele lê **20 números inteiros** digitados pelo usuário, armazena todos em um vetor e, a partir dele, calcula a soma dos múltiplos de 3, a média dos números pares, a quantidade de números positivos e negativos, o maior e o menor valor. Ao final, exibe na tela todos os elementos armazenados.

### 3. Funcionamento do programa

**Como os números são lidos e armazenados:**
Um vetor de 20 posições (`int numeros[20]`) guarda os valores digitados. Um laço `for` percorre as posições de 0 a 19, pedindo um número por vez ao usuário, com a mensagem identificando qual é a entrada atual (de 1 a 20).

**Como valores inválidos são tratados:**
Cada leitura é validada pelo valor de retorno do `scanf`. Se o usuário digitar algo que não seja um número inteiro (como `abcd`), o programa exibe uma mensagem de erro, limpa o que sobrou no buffer de entrada com `getchar()` e pede o número novamente, sem avançar para a próxima posição do vetor.

**Como o vetor é processado:**
Depois da leitura, um segundo laço `for` percorre o vetor uma única vez e aplica quatro verificações independentes a cada elemento:

- **Múltiplo de 3:** se o resto da divisão por 3 for zero, o valor é somado em `somaMultiplos3`.
- **Par:** se o resto da divisão por 2 for zero, o valor é somado em `somaPares` e o contador `qtdPares` é incrementado.
- **Positivo ou negativo:** valores maiores que zero incrementam `qtdPositivos` e valores menores que zero incrementam `qtdNegativos`. O valor **zero não é contabilizado em nenhum dos dois**, conforme exigido no enunciado.
- **Maior e menor:** `maior` e `menor` começam com o primeiro elemento do vetor e são atualizados sempre que um valor superior ou inferior é encontrado.

**Como a média dos pares é calculada:**
A média é a soma dos pares dividida pela quantidade de pares, com conversão para `float` para não perder as casas decimais. Antes de dividir, o programa verifica se existe pelo menos um número par: se `qtdPares` for zero, ele exibe uma mensagem informando que não há pares, evitando a **divisão por zero**.

**Como os resultados são exibidos:**
Os resultados aparecem identificados e organizados, seguidos da listagem de todos os elementos do vetor (`numeros[0]` até `numeros[19]`).

### 4. Estruturas utilizadas

**Estruturas de repetição:**

- `for` (leitura): preenche as 20 posições do vetor.
- `do...while` (validação): repete a leitura de uma posição enquanto a entrada não for um número inteiro válido.
- `for` (processamento): percorre o vetor para calcular somas, contadores, maior e menor.
- `for` (exibição): percorre o vetor para mostrar todos os elementos.

O `for` foi escolhido para percorrer o vetor porque o número de repetições é conhecido de antemão (20 posições). Já o `do...while` é adequado na validação porque a leitura precisa acontecer **antes** de haver algo para testar.

**Estruturas condicionais:** `if` independentes para múltiplo de 3, par, maior e menor, e `if / else if` para positivo e negativo (que são mutuamente exclusivos), além do `if / else` que protege a média dos pares contra divisão por zero.

### 5. Como executar

Compile o programa com o GCC:

```bash
gcc array_vetor.c -o array_vetor
```

Em seguida, execute:

```bash
./array_vetor
```

> No Windows, o executável pode ser rodado com `.\array_vetor.exe` no PowerShell.

### 6. Testes realizados

O teste utilizou uma lista de 20 números pensada para cobrir todos os casos do enunciado: valores positivos e negativos, o zero, números pares, múltiplos de 3 e valores extremos. A evidência está na pasta [`evidencias/`](./evidencias).

| Teste | Cenário | Resultado |
|---|---|---|
| [Teste 1](./evidencias/01-execucao-programa.png) | Lista com positivos, negativos, zero, pares e múltiplos de 3 | Soma dos múltiplos de 3: 90; média dos pares: 3,64; 12 positivos; 7 negativos; maior 100; menor -100 |

**Exemplo de entrada:**

```
15 -8 7 0 22 -3 9 4 -12 6 11 -20 30 1 -5 18 27 -1 100 -100
```

**Exemplo de saída:**

```
=== Resultados ===
Soma dos multiplos de 3: 90
Media dos numeros pares: 3.64
Quantidade de positivos: 12
Quantidade de negativos: 7
Maior valor: 100
Menor valor: -100
```

**Conferência dos resultados:** os múltiplos de 3 (15, 0, -3, 9, -12, 6, 30, 18 e 27) somam 90. Os pares (-8, 0, 22, 4, -12, 6, -20, 30, 18, 100 e -100) são 11 números que somam 40, resultando na média 40 ÷ 11 ≈ 3,64. Com 12 positivos, 7 negativos e 1 zero (que não entra em nenhuma contagem), o total fecha em 20 elementos.

**Captura de tela da execução:**

![Execução do programa](./evidencias/01-execucao-programa.png)

### Autor

- **Nome:** Piêtro Bitencourt Nunes
- **GitHub:** [pietrobitencourt](https://github.com/pietrobitencourt)
- **LinkedIn:** [in/piiettrosz](https://linkedin.com/in/piiettrosz)

Esta atividade faz parte do repositório [Algoritmos e Pensamento Computacional](../), licenciado sob [MIT](../LICENSE).

<div align="right">

[⬆️ voltar ao topo](#-análise-de-vetor-em-c)

</div>

---

## 🇺🇸 English

### 1. Identification

- **Student:** Piêtro Bitencourt Nunes
- **Course:** Algorithms and Computational Thinking
- **Instructor:** Prof. Karla Sartin
- **Project title:** Assignment: Array (Vector)

### 2. Objective

The goal of this program is to apply, in C, the concepts of **arrays**, loops, conditional structures, data input, and mathematical operations. It reads **20 integers** entered by the user, stores them all in an array, and from it calculates the sum of the multiples of 3, the average of the even numbers, the count of positive and negative numbers, and the highest and lowest values. At the end, it displays every element stored in the array.

### 3. How the program works

**How the numbers are read and stored:**
A 20-position array (`int numeros[20]`) holds the values entered. A `for` loop goes through positions 0 to 19, asking for one number at a time, with a message identifying the current entry (1 to 20).

**How invalid values are handled:**
Each reading is validated through `scanf`'s return value. If the user enters something that is not an integer (such as `abcd`), the program displays an error message, clears the leftover input from the buffer with `getchar()`, and asks for the number again, without moving on to the next array position.

**How the array is processed:**
After reading, a second `for` loop goes through the array once and applies four independent checks to each element:

- **Multiple of 3:** if the remainder of the division by 3 is zero, the value is added to `somaMultiplos3`.
- **Even:** if the remainder of the division by 2 is zero, the value is added to `somaPares` and the `qtdPares` counter is incremented.
- **Positive or negative:** values greater than zero increment `qtdPositivos` and values lower than zero increment `qtdNegativos`. The value **zero is not counted as either**, as required by the assignment.
- **Highest and lowest:** `maior` and `menor` start with the first element of the array and are updated whenever a higher or lower value is found.

**How the average of the even numbers is calculated:**
The average is the sum of the even numbers divided by how many there are, cast to `float` so decimal places are not lost. Before dividing, the program checks that at least one even number exists: if `qtdPares` is zero, it displays a message saying there are no even numbers, avoiding **division by zero**.

**How the results are displayed:**
The results are shown labeled and organized, followed by the listing of every array element (`numeros[0]` to `numeros[19]`).

### 4. Structures used

**Loop structures:**

- `for` (reading): fills the 20 array positions.
- `do...while` (validation): repeats the reading of a position while the input is not a valid integer.
- `for` (processing): goes through the array to compute sums, counters, highest and lowest.
- `for` (display): goes through the array to show every element.

`for` was chosen to traverse the array because the number of iterations is known in advance (20 positions). `do...while` fits the validation because the reading has to happen **before** there is anything to test.

**Conditional structures:** independent `if` statements for multiple of 3, even, highest, and lowest, and `if / else if` for positive and negative (which are mutually exclusive), plus the `if / else` that protects the even-number average against division by zero.

### 5. How to run

Compile the program with GCC:

```bash
gcc array_vetor.c -o array_vetor
```

Then run it:

```bash
./array_vetor
```

> On Windows, the executable can be run with `.\array_vetor.exe` in PowerShell.

### 6. Tests performed

The test used a list of 20 numbers designed to cover every case in the assignment: positive and negative values, zero, even numbers, multiples of 3, and extreme values. The evidence is in the [`evidencias/`](./evidencias) folder.

| Test | Scenario | Result |
|---|---|---|
| [Test 1](./evidencias/01-execucao-programa.png) | List with positives, negatives, zero, evens, and multiples of 3 | Sum of multiples of 3: 90; average of evens: 3.64; 12 positives; 7 negatives; highest 100; lowest -100 |

**Example input:**

```
15 -8 7 0 22 -3 9 4 -12 6 11 -20 30 1 -5 18 27 -1 100 -100
```

**Example output:**

```
=== Resultados ===
Soma dos multiplos de 3: 90
Media dos numeros pares: 3.64
Quantidade de positivos: 12
Quantidade de negativos: 7
Maior valor: 100
Menor valor: -100
```

**Result check:** the multiples of 3 (15, 0, -3, 9, -12, 6, 30, 18, and 27) add up to 90. The even numbers (-8, 0, 22, 4, -12, 6, -20, 30, 18, 100, and -100) are 11 values summing to 40, giving an average of 40 ÷ 11 ≈ 3.64. With 12 positives, 7 negatives, and 1 zero (which is not counted in either), the total comes to 20 elements.

**Execution screenshot:**

![Program execution](./evidencias/01-execucao-programa.png)

### Author

- **Name:** Piêtro Bitencourt Nunes
- **GitHub:** [pietrobitencourt](https://github.com/pietrobitencourt)
- **LinkedIn:** [in/piiettrosz](https://linkedin.com/in/piiettrosz)

This assignment is part of the [Algorithms and Computational Thinking](../) repository, licensed under [MIT](../LICENSE).

<div align="right">

[⬆️ back to top](#-análise-de-vetor-em-c)

</div>

---

<div align="center">

Projeto individual desenvolvido para a disciplina de Algoritmos e Pensamento Computacional.
*Individual project developed for the Algorithms and Computational Thinking course.*

</div>
