<div align="center">

# 🧮 Calculadora Universal — Flowgorithm

[![Flowgorithm](https://img.shields.io/badge/Flowgorithm-4.2-2EA44F?style=flat-square)](http://www.flowgorithm.org/)
![Status](https://img.shields.io/badge/status-conclu%C3%ADdo-success?style=flat-square)
![Funções](https://img.shields.io/badge/opera%C3%A7%C3%B5es-27-blue?style=flat-square)
[![License: MIT](https://img.shields.io/badge/license-MIT-yellow?style=flat-square)](./LICENSE)
![Made with](https://img.shields.io/badge/feito%20com-l%C3%B3gica%20de%20programa%C3%A7%C3%A3o-purple?style=flat-square)

**[🇧🇷 Português](#-português)** • **[🇺🇸 English](#-english)**

</div>

---

## 🇧🇷 Português

**Disciplina:** Algoritmos e Pensamento Computacional
**Aluno:** Piêtro Bitencourt Nunes

### Objetivo

Desenvolver, utilizando o Flowgorithm, uma calculadora com no mínimo 20 funções diferentes, aplicando conceitos de lógica de programação, entrada e saída de dados, variáveis, operadores e estruturas de decisão. Este projeto implementa **27 operações**, superando o requisito mínimo.

### Descrição do funcionamento

O programa apresenta um **menu principal** com 13 opções de calculadora (algumas delas contendo submenus internos, totalizando **27 operações diferentes**). O usuário:

1. Escolhe o número da calculadora desejada;
2. Informa os dados solicitados (ex.: peso e altura, valores numéricos, ângulo, etc.);
3. O programa processa os dados e exibe o resultado formatado na tela.

O menu funciona em looping (estrutura `Enquanto`), retornando sempre à tela inicial após cada cálculo, até que o usuário escolha a opção `[0] Sair`. Toda entrada de opção fora do intervalo permitido é validada e o programa solicita um novo valor.

### Relação das funções implementadas

| Opção | Calculadora | Operações internas |
|---|---|---|
| **1** | **Cálculo de IMC** ⭐ *(obrigatória)* | Cálculo do IMC + classificação (Abaixo do peso, Peso normal, Excesso de peso, Obesidade Grau I/II/Mórbida) |
| **2** | **Cálculo de Área** ⭐ *(obrigatória)* | Área do quadrado, triângulo, círculo e losango (4 operações) |
| 3 | Calculadora de Tabuada | Soma, subtração, multiplicação, divisão (com tratamento de divisão por zero) e potência (5 operações) |
| 4 | Par ou Ímpar | Identificação de número par ou ímpar |
| 5 | Comparação entre Valores | Compara dois valores (maior, menor ou igual) |
| 6 | Média Aritmética | Média de 3 notas |
| 7 | Porcentagem | Cálculo de X% de um valor |
| 8 | Regra de Três Simples | Cálculo de regra de três direta |
| 9 | Juros Simples | Cálculo de juros e montante final |
| 10 | Desconto | Cálculo de valor de desconto e preço final |
| 11 | Conversão de Temperatura | Celsius → Fahrenheit e Fahrenheit → Celsius (2 operações) |
| 12 | Conversor de Unidades | Comprimento, Área, Volume, Massa e Capacidade (5 tipos, cada um com várias unidades) |
| 13 | Trigonometria | Seno, cosseno e tangente de um ângulo (3 operações) |

**Total: 27 operações distintas**, superando o mínimo de 20 exigido pela atividade.

### Instruções básicas de execução

1. Baixe e instale o [Flowgorithm](http://www.flowgorithm.org/) (gratuito).
2. Abra o arquivo `Calculadora_Universal.fprg` no programa.
3. Clique em **Executar** (▶) ou pressione `F5` para rodar o fluxograma.
4. No console que abrir, digite o número da calculadora desejada e siga as instruções exibidas na tela.
5. Para encerrar o programa a qualquer momento, digite `0` no menu principal.

### Funções obrigatórias

Conforme exigido pela atividade, o projeto contém:
- ✅ **Cálculo de IMC** (opção 1 do menu)
- ✅ **Cálculo de Área de figuras geométricas** (opção 2 do menu — quadrado, triângulo, círculo e losango)

---

## 🇺🇸 English

**Course:** Algorithms and Computational Thinking
**Student:** Piêtro Bitencourt Nunes

### Objective

Develop, using Flowgorithm, a calculator with at least 20 different functions, applying concepts of programming logic, data input/output, variables, operators, and decision structures. This project implements **27 operations**, exceeding the minimum requirement.

### How it works

The program shows a **main menu** with 13 calculator options (some containing internal submenus, totaling **27 different operations**). The user:

1. Chooses the number of the desired calculator;
2. Enters the requested data (e.g., weight and height, numeric values, angle, etc.);
3. The program processes the data and displays the formatted result on screen.

The menu runs in a loop (`While` structure), always returning to the main screen after each calculation, until the user chooses option `[0] Exit`. Any option entered outside the valid range is caught and the program asks for a new value.

### List of implemented functions

| Option | Calculator | Internal operations |
|---|---|---|
| **1** | **BMI Calculator** ⭐ *(required)* | BMI calculation + classification (Underweight, Normal weight, Overweight, Obesity Class I/II/Morbid) |
| **2** | **Area Calculator** ⭐ *(required)* | Area of square, triangle, circle, and rhombus (4 operations) |
| 3 | Arithmetic Calculator | Addition, subtraction, multiplication, division (with divide-by-zero handling), and exponentiation (5 operations) |
| 4 | Even or Odd | Determines whether a number is even or odd |
| 5 | Value Comparison | Compares two values (greater, smaller, or equal) |
| 6 | Arithmetic Mean | Average of 3 grades |
| 7 | Percentage | Calculates X% of a value |
| 8 | Simple Rule of Three | Direct rule-of-three calculation |
| 9 | Simple Interest | Calculates interest and final amount |
| 10 | Discount | Calculates discount amount and final price |
| 11 | Temperature Conversion | Celsius → Fahrenheit and Fahrenheit → Celsius (2 operations) |
| 12 | Unit Converter | Length, Area, Volume, Mass, and Capacity (5 types, each with several units) |
| 13 | Trigonometry | Sine, cosine, and tangent of an angle (3 operations) |

**Total: 27 distinct operations**, exceeding the minimum of 20 required by the assignment.

### Basic run instructions

1. Download and install [Flowgorithm](http://www.flowgorithm.org/) (free).
2. Open the `Calculadora_Universal.fprg` file in the program.
3. Click **Execute** (▶) or press `F5` to run the flowchart.
4. In the console that opens, type the number of the desired calculator and follow the on-screen prompts.
5. To exit the program at any time, type `0` in the main menu.

### Required functions

As required by the assignment, this project includes:
- ✅ **BMI Calculation** (menu option 1)
- ✅ **Area calculation of geometric shapes** (menu option 2 — square, triangle, circle, and rhombus)

---

## Licença / License

Este projeto está sob a licença [MIT](./LICENSE) — sinta-se livre para usar, estudar e adaptar.
This project is licensed under the [MIT License](./LICENSE) — feel free to use, study, and adapt it.
