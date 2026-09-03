<div align="center">

# 🧮 Calculadora Universal em C

[![Linguagem](https://img.shields.io/badge/Linguagem-C-00599C?logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Compilador](https://img.shields.io/badge/Compilador-GCC-blue)]()
[![Status](https://img.shields.io/badge/Status-Conclu%C3%ADdo-brightgreen)]()
[![Disciplina](https://img.shields.io/badge/Disciplina-Programa%C3%A7%C3%A3o%20de%20Computadores-orange)]()
[![Funções](https://img.shields.io/badge/Funções-18-blueviolet)]()
[![Operações](https://img.shields.io/badge/Operações-32-9cf)]()
[![Licença](https://img.shields.io/badge/Licença-MIT-lightgrey)](LICENSE)

[![GitHub](https://img.shields.io/badge/GitHub-pietrobitencourt-181717?logo=github)](https://github.com/pietrobitencourt)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-piiettrosz-0A66C2?logo=linkedin&logoColor=white)](https://linkedin.com/in/piiettrosz)
[![Instagram](https://img.shields.io/badge/Instagram-%40Piiettrosz-E4405F?logo=instagram&logoColor=white)](https://instagram.com/Piiettrosz)

**[🇧🇷 Português](#-português)** | **[🇺🇸 English](#-english)**

</div>

---

## 🇧🇷 Português

### 📋 Descrição do Projeto

Calculadora universal desenvolvida em linguagem C como atividade prática da disciplina de **Programação de Computadores**. O programa reúne **32 operações matemáticas e utilitárias**, organizadas em **18 funções modulares**, acessadas por meio de um menu principal interativo em loop.

### 🎯 Objetivo

Aplicar de forma integrada os conceitos de variáveis e tipos de dados, entrada e saída de dados, estruturas condicionais, estruturas de repetição, funções, modularização e uso da biblioteca `math.h`, construindo um programa organizado de maneira semelhante a um pequeno projeto de desenvolvimento de software.

### ✅ Cobertura da lista sugerida pelo enunciado

Todas as 20 operações sugeridas no enunciado estão implementadas:

| Sugestão do enunciado | Função responsável |
|---|---|
| Soma | `calcularTabuada` |
| Subtração | `calcularTabuada` |
| Multiplicação | `calcularTabuada` |
| Divisão | `calcularTabuada` |
| Potenciação | `calcularTabuada` |
| Raiz quadrada | `calcularRaizes` |
| Raiz cúbica | `calcularRaizes` |
| Seno | `calcularTrigonometria` |
| Cosseno | `calcularTrigonometria` |
| Tangente | `calcularTrigonometria` |
| Logaritmo natural | `calcularLogaritmo` |
| Logaritmo na base 10 | `calcularLogaritmo` |
| Valor absoluto | `calcularValorAbsoluto` |
| Cálculo de porcentagem | `calcularPorcentagem` |
| Média aritmética | `calcularMedia` |
| Conversão graus → radianos | `converterAngulo` |
| Conversão radianos → graus | `converterAngulo` |
| Área do círculo | `calcularArea` |
| Área do retângulo | `calcularArea` |
| Hipotenusa | `calcularHipotenusa` |

Além dessas, o programa inclui operações adicionais de livre escolha: IMC, área do quadrado/triângulo/losango, par ou ímpar, comparação entre valores, regra de três simples, juros simples, desconto e conversor de unidades de área.

### ⚙️ Funcionalidades Implementadas

| # | Função (C) | Operações | Qtd. |
|---|------------|-----------|:---:|
| 1 | `calcularIMC` | Índice de Massa Corporal, com classificação | 1 |
| 2 | `calcularArea` | Área do quadrado, triângulo, círculo, losango e retângulo | 5 |
| 3 | `calcularTabuada` | Soma, subtração, multiplicação, divisão e potenciação | 5 |
| 4 | `parOuImpar` | Verifica se um número é par ou ímpar | 1 |
| 5 | `compararValores` | Compara dois valores | 1 |
| 6 | `calcularMedia` | Média aritmética de 3 notas (0–10) | 1 |
| 7 | `calcularPorcentagem` | Calcula X% de um valor | 1 |
| 8 | `calcularRegraDeTres` | Regra de três simples | 1 |
| 9 | `calcularJurosSimples` | Juros simples e montante final | 1 |
| 10 | `calcularDesconto` | Valor final após desconto percentual | 1 |
| 11 | `converterTemperatura` | Celsius → Fahrenheit e Fahrenheit → Celsius | 2 |
| 12 | `converterUnidades` | Conversão de unidades de área | 1 |
| 13 | `calcularTrigonometria` | Seno, cosseno e tangente | 3 |
| 14 | `calcularRaizes` | Raiz quadrada e raiz cúbica | 2 |
| 15 | `calcularLogaritmo` | Logaritmo natural e logaritmo base 10 | 2 |
| 16 | `calcularValorAbsoluto` | Valor absoluto | 1 |
| 17 | `converterAngulo` | Graus → radianos e radianos → graus | 2 |
| 18 | `calcularHipotenusa` | Hipotenusa (teorema de Pitágoras) | 1 |
| | | **Total** | **32** |

> Operações que compartilham a mesma natureza (ex: as 5 áreas, as 5 operações da tabuada, raiz quadrada/cúbica) foram agrupadas em uma função com submenu e `switch` interno, em vez de uma função por operação isolada — uma escolha de modularização que evita duplicação de código sem abrir mão de nenhuma operação exigida.

### 📚 Bibliotecas Utilizadas

- **`stdio.h`** — entrada (`scanf`) e saída (`printf`) de dados.
- **`math.h`** — `pow()`, `sqrt()`, `cbrt()`, `log()`, `log10()`, `sin()`, `cos()`, `tan()`, `fabs()`.

### 🧩 Organização do Código

- **`main()`** exibe o menu principal em um loop `do...while` e usa um `switch` para chamar a função correspondente à opção escolhida, até o usuário digitar `0`.
- Cada categoria do menu é **uma função `void`** independente, mantendo o `main()` enxuto e isolando a lógica de cada operação.
- Funções com mais de uma operação (`calcularArea`, `calcularTabuada`, `converterTemperatura`, `converterUnidades`, `calcularRaizes`, `calcularLogaritmo`, `converterAngulo`) implementam um **submenu com `switch` interno**, seguindo o mesmo padrão do menu principal.
- Duas funções auxiliares — `lerInteiro()` e `limparBufferEntrada()` — centralizam a leitura segura de números inteiros em todos os menus e submenus.

### 🛡️ Tratamento de Erros

| Situação | Onde | Tratamento |
|---|---|---|
| Divisão por zero | Tabuada (divisão) | `while` repete a leitura do denominador até ser diferente de zero |
| Denominador zero em regra de três | Regra de três (valor de A) | `while` impede A = 0 antes de prosseguir |
| Raiz quadrada de número negativo | Raízes | Verifica `valor < 0` antes de calcular |
| Logaritmo de valor não positivo | Logaritmo | Verifica `valor <= 0` antes de calcular (ln e log10) |
| Tangente indefinida (90°, 270°...) | Trigonometria | Verifica se `cos(ângulo)` é praticamente zero antes de calcular |
| Opção fora do menu | Todos os menus/submenus | `default` do `switch` avisa e o `do/while` pede novamente |
| Entrada não numérica | Todos os menus/submenus | `lerInteiro()` verifica o retorno do `scanf` e limpa o buffer antes de repetir |

### 🧠 Conceitos de Programação Utilizados

- **Funções**: 18 funções `void`, cada uma encapsulando uma categoria de cálculo.
- **Estruturas condicionais**: `switch...case` para navegação de menus/submenus; `if...else` para faixas de valores e checagens de domínio.
- **Estruturas de repetição**: `do...while` no menu principal e em cada submenu; `while` para revalidar entradas.
- **Entrada e saída de dados**: `scanf()` e `printf()` formatado (`%.2lf`, `%.4lf`, `%.6lf`).
- **Biblioteca `math.h`**: usada em áreas, potenciação, raízes, logaritmos e trigonometria.

### 🚀 Como Compilar e Executar

```bash
gcc calculadora.c -o calculadora -lm
./calculadora
```

> O `-lm` vincula a biblioteca matemática — sem ele, o linker não encontra `pow`, `sqrt`, `cbrt`, `log`, `log10`, `sin`, `cos`, `tan` e `fabs`.

No Windows (Dev-C++ ou VS Code com MinGW), o executável gerado é `calculadora.exe`.

### 💻 Exemplo de Uso

```
===== CALCULADORA UNIVERSAL =====
1  - IMC
...
18 - Hipotenusa
0  - Sair
Escolha: 18
Digite o valor do primeiro cateto: 3
Digite o valor do segundo cateto: 4
A hipotenusa eh: 5.00
```

### 📂 Estrutura no Repositório

```
Desenvolvimento_de_Algoritmos_e_Pensamento_Computacional/
└── Calculadora_em_C/
    ├── calculadora.c
    └── README.md
```

### 👤 Identificação do Estudante

- **Nome:** Piêtro Bitencourt Nunes
- **Disciplina:** Algoritmo e Pensamento Computacional
- **GitHub:** [pietrobitencourt](https://github.com/pietrobitencourt)
- **LinkedIn:** [in/piiettrosz](https://linkedin.com/in/piiettrosz)
- **Instagram:** [@Piiettrosz](https://instagram.com/Piiettrosz)

---

## 🇺🇸 English

### 📋 Project Description

A universal calculator built in C as a practical assignment for the **Computer Programming** course. The program brings together **32 mathematical and utility operations**, organized into **18 modular functions**, accessed through an interactive, looping main menu.

### 🎯 Objective

To apply, in an integrated way, the concepts of variables and data types, input/output, conditional structures, loop structures, functions, modularization, and the `math.h` library, building a program organized similarly to a small software development project.

### ✅ Coverage of the Assignment's Suggested List

All 20 operations suggested in the assignment brief are implemented:

| Suggested operation | Responsible function |
|---|---|
| Addition | `calcularTabuada` |
| Subtraction | `calcularTabuada` |
| Multiplication | `calcularTabuada` |
| Division | `calcularTabuada` |
| Exponentiation | `calcularTabuada` |
| Square root | `calcularRaizes` |
| Cube root | `calcularRaizes` |
| Sine | `calcularTrigonometria` |
| Cosine | `calcularTrigonometria` |
| Tangent | `calcularTrigonometria` |
| Natural logarithm | `calcularLogaritmo` |
| Base-10 logarithm | `calcularLogaritmo` |
| Absolute value | `calcularValorAbsoluto` |
| Percentage calculation | `calcularPorcentagem` |
| Arithmetic mean | `calcularMedia` |
| Degrees → radians | `converterAngulo` |
| Radians → degrees | `converterAngulo` |
| Circle area | `calcularArea` |
| Rectangle area | `calcularArea` |
| Hypotenuse | `calcularHipotenusa` |

In addition, the program includes freely-chosen extra operations: BMI, square/triangle/rhombus area, even-or-odd check, value comparison, simple rule of three, simple interest, discount, and area unit conversion.

### ⚙️ Implemented Features

| # | Function (C) | Operations | Qty. |
|---|------------|-----------|:---:|
| 1 | `calcularIMC` | Body Mass Index, with classification | 1 |
| 2 | `calcularArea` | Square, triangle, circle, rhombus, and rectangle area | 5 |
| 3 | `calcularTabuada` | Addition, subtraction, multiplication, division, exponentiation | 5 |
| 4 | `parOuImpar` | Checks whether a number is even or odd | 1 |
| 5 | `compararValores` | Compares two values | 1 |
| 6 | `calcularMedia` | Arithmetic mean of 3 grades (0–10) | 1 |
| 7 | `calcularPorcentagem` | Calculates X% of a value | 1 |
| 8 | `calcularRegraDeTres` | Simple rule of three | 1 |
| 9 | `calcularJurosSimples` | Simple interest and final amount | 1 |
| 10 | `calcularDesconto` | Final price after a percentage discount | 1 |
| 11 | `converterTemperatura` | Celsius → Fahrenheit and Fahrenheit → Celsius | 2 |
| 12 | `converterUnidades` | Area unit conversion | 1 |
| 13 | `calcularTrigonometria` | Sine, cosine, and tangent | 3 |
| 14 | `calcularRaizes` | Square root and cube root | 2 |
| 15 | `calcularLogaritmo` | Natural logarithm and base-10 logarithm | 2 |
| 16 | `calcularValorAbsoluto` | Absolute value | 1 |
| 17 | `converterAngulo` | Degrees → radians and radians → degrees | 2 |
| 18 | `calcularHipotenusa` | Hypotenuse (Pythagorean theorem) | 1 |
| | | **Total** | **32** |

> Operations sharing the same nature (e.g., the 5 area shapes, the 5 arithmetic operations, square/cube root) were grouped into a single function with an internal submenu and `switch`, rather than one function per isolated operation — a modularization choice that avoids code duplication without dropping any required operation.

### 📚 Libraries Used

- **`stdio.h`** — input (`scanf`) and output (`printf`).
- **`math.h`** — `pow()`, `sqrt()`, `cbrt()`, `log()`, `log10()`, `sin()`, `cos()`, `tan()`, `fabs()`.

### 🧩 Code Organization

- **`main()`** displays the main menu in a `do...while` loop and uses a `switch` to call the matching function, until the user enters `0`.
- Each menu category is an independent **`void` function**, keeping `main()` lean.
- Functions with more than one operation (`calcularArea`, `calcularTabuada`, `converterTemperatura`, `converterUnidades`, `calcularRaizes`, `calcularLogaritmo`, `converterAngulo`) implement an **internal submenu with `switch`**.
- Two helper functions — `lerInteiro()` and `limparBufferEntrada()` — centralize safe integer reading across every menu and submenu.

### 🛡️ Error Handling

| Situation | Where | Handling |
|---|---|---|
| Division by zero | Arithmetic table (division) | `while` loop re-reads the denominator until non-zero |
| Zero denominator in rule of three | Rule of three (value A) | `while` loop prevents A = 0 |
| Square root of a negative number | Roots | Checks `value < 0` before computing |
| Logarithm of a non-positive value | Logarithm | Checks `value <= 0` before computing (ln and log10) |
| Undefined tangent (90°, 270°...) | Trigonometry | Checks whether `cos(angle)` is practically zero |
| Out-of-range menu option | All menus/submenus | `switch`'s `default` warns and the `do/while` retries |
| Non-numeric input | All menus/submenus | `lerInteiro()` checks `scanf`'s return value and clears the buffer |

### 🧠 Programming Concepts Used

- **Functions**: 18 `void` functions, each encapsulating one calculation category.
- **Conditional structures**: `switch...case` for menu/submenu navigation; `if...else` for value ranges and domain checks.
- **Loop structures**: `do...while` in the main menu and every submenu; `while` to revalidate input.
- **Input and output**: `scanf()` and formatted `printf()` (`%.2lf`, `%.4lf`, `%.6lf`).
- **`math.h` library**: used across areas, exponentiation, roots, logarithms, and trigonometry.

### 🚀 How to Compile and Run

```bash
gcc calculadora.c -o calculadora -lm
./calculadora
```

> The `-lm` flag links the math library — without it, the linker won't find `pow`, `sqrt`, `cbrt`, `log`, `log10`, `sin`, `cos`, `tan`, or `fabs`.

On Windows (Dev-C++ or VS Code with MinGW), the generated executable is `calculadora.exe`.

### 💻 Usage Example

```
===== CALCULADORA UNIVERSAL =====
1  - IMC
...
18 - Hipotenusa
0  - Sair
Escolha: 18
Digite o valor do primeiro cateto: 3
Digite o valor do segundo cateto: 4
A hipotenusa eh: 5.00
```

### 📂 Repository Structure

```
Desenvolvimento_de_Algoritmos_e_Pensamento_Computacional/
└── Calculadora_em_C/
    ├── calculadora.c
    └── README.md
```

### 👤 Student Identification

- **Name:** Piêtro Bitencourt Nunes
- **Course:** Algorithms and Computational Thinking
- **GitHub:** [pietrobitencourt](https://github.com/pietrobitencourt)
- **LinkedIn:** [in/piiettrosz](https://linkedin.com/in/piiettrosz)
- **Instagram:** [@Piiettrosz](https://instagram.com/Piiettrosz)

</div>
