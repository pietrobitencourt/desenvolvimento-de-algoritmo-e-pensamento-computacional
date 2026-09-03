<div align="center">

# 🧮 Calculadora Universal em C

[![Linguagem](https://img.shields.io/badge/Linguagem-C-00599C?logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Compilador](https://img.shields.io/badge/Compilador-GCC-blue)]()
[![Status](https://img.shields.io/badge/Status-Conclu%C3%ADdo-brightgreen)]()
[![Disciplina](https://img.shields.io/badge/Disciplina-Programa%C3%A7%C3%A3o%20de%20Computadores-orange)]()
[![Licença](https://img.shields.io/badge/Licen%C3%A7a-MIT-lightgrey)](LICENSE)

[![GitHub](https://img.shields.io/badge/GitHub-pietrobitencourt-181717?logo=github)](https://github.com/pietrobitencourt)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-piiettrosz-0A66C2?logo=linkedin&logoColor=white)](https://linkedin.com/in/piiettrosz)
[![Instagram](https://img.shields.io/badge/Instagram-%40Piiettrosz-E4405F?logo=instagram&logoColor=white)](https://instagram.com/Piiettrosz)

**[🇧🇷 Português](#-português)** | **[🇺🇸 English](#-english)**

</div>

---

## 🇧🇷 Português

### 📋 Descrição do Projeto

Calculadora universal desenvolvida em linguagem C como atividade prática da disciplina de **Programação de Computadores**. O programa reúne **23 operações matemáticas e utilitárias**, organizadas em **13 funções modulares**, acessadas por meio de um menu principal interativo em loop.

### 🎯 Objetivo

Aplicar de forma integrada os conceitos de variáveis e tipos de dados, entrada e saída de dados, estruturas condicionais, estruturas de repetição, funções, modularização e uso da biblioteca `math.h`, construindo um programa organizado de maneira semelhante a um pequeno projeto de desenvolvimento de software.

### ⚙️ Funcionalidades Implementadas

O programa possui **13 funções**, que juntas implementam **23 operações**:

| # | Função (C) | Operações | Qtd. |
|---|------------|-----------|:---:|
| 1 | `calcularIMC` | Índice de Massa Corporal, com classificação (abaixo do peso, normal, sobrepeso, obesidade I/II/III) | 1 |
| 2 | `calcularArea` | Área do quadrado, triângulo, círculo e losango | 4 |
| 3 | `calcularTabuada` | Soma, subtração, multiplicação, divisão e potenciação | 5 |
| 4 | `parOuImpar` | Verifica se um número é par ou ímpar | 1 |
| 5 | `compararValores` | Compara dois valores e indica o maior, menor ou igual | 1 |
| 6 | `calcularMedia` | Média aritmética de 3 notas (0–10, com validação de faixa) | 1 |
| 7 | `calcularPorcentagem` | Calcula X% de um valor | 1 |
| 8 | `calcularRegraDeTres` | Regra de três simples (X = B·C / A) | 1 |
| 9 | `calcularJurosSimples` | Juros simples e montante final | 1 |
| 10 | `calcularDesconto` | Valor final de um produto após desconto percentual | 1 |
| 11 | `converterTemperatura` | Celsius → Fahrenheit e Fahrenheit → Celsius | 2 |
| 12 | `converterUnidades` | Conversão de unidades de área (mm², cm², dm², m², hectare, km²) | 1 |
| 13 | `calcularTrigonometria` | Seno, cosseno e tangente de um ângulo em graus | 3 |
| | | **Total** | **23** |

> Operações que compartilham a mesma natureza (ex: as 4 áreas, as 5 operações da tabuada) foram agrupadas em uma função com submenu e `switch` interno, em vez de uma função por operação isolada — uma escolha de modularização que evita duplicação de código sem abrir mão de nenhuma operação exigida.

### 📚 Bibliotecas Utilizadas

- **`stdio.h`** — entrada (`scanf`) e saída (`printf`) de dados.
- **`math.h`** — `pow()` (potência e área do círculo), `sin()`, `cos()`, `tan()` (trigonometria), `fabs()` (valor absoluto, usado na checagem de domínio da tangente).

### 🧩 Organização do Código

- **`main()`** exibe o menu principal em um loop `do...while` e usa um `switch` para chamar a função correspondente à opção escolhida, até o usuário digitar `0`.
- Cada categoria do menu é **uma função `void`** independente, o que mantém o `main()` enxuto e isola a lógica de cada operação.
- Funções com mais de uma operação (`calcularArea`, `calcularTabuada`, `converterTemperatura`, `converterUnidades`) implementam um **submenu com `switch` interno**, seguindo o mesmo padrão do menu principal.
- Duas funções auxiliares — `lerInteiro()` e `limparBufferEntrada()` — centralizam a leitura seletiva de números inteiros, evitando repetir a mesma validação em cada função.

### 🛡️ Tratamento de Erros

| Situação | Onde | Tratamento |
|---|---|---|
| Divisão por zero | Tabuada (divisão) | `while` que repete a leitura do denominador até ser diferente de zero |
| Denominador zero em regra de três | Regra de três (valor de A) | `while` que impede A = 0 antes de prosseguir |
| Restrição de domínio | Trigonometria (tangente) | Verifica se `cos(ângulo)` é praticamente zero antes de calcular a tangente |
| Opção fora do menu | Todos os menus/submenus | `default` do `switch` avisa e, nos submenus, o `do/while` pede novamente |
| Entrada não numérica (ex: letra em vez de número) | Todos os menus/submenus | `lerInteiro()` verifica o retorno do `scanf` e limpa o buffer antes de repetir |

### 🧠 Conceitos de Programação Utilizados

- **Funções**: 13 funções `void` sem retorno, cada uma encapsulando uma categoria de cálculo, chamadas a partir do `main()`.
- **Estruturas condicionais**: `switch...case` para navegação de menus/submenus (valores discretos); `if...else` para faixas de valores (classificação do IMC, comparação de números, checagem de domínio).
- **Estruturas de repetição**: `do...while` no menu principal e em cada submenu, garantindo que o programa repita até o usuário optar por sair; `while` para revalidar entradas (notas fora da faixa, denominador zero, valor de A zero).
- **Entrada e saída de dados**: `scanf()` para todos os dados numéricos, `printf()` formatado (`%.2lf`, `%.4lf`, `%.6lf`) para resultados.
- **Biblioteca `math.h`**: usada em área do círculo, potenciação e nas três funções trigonométricas.

### 🚀 Como Compilar e Executar

```bash
gcc calculadora.c -o calculadora -lm
./calculadora
```

> O `-lm` vincula a biblioteca matemática (`math.h`) — sem ele, o linker não encontra `pow`, `sin`, `cos`, `tan` e `fabs`.

No Windows (Dev-C++ ou VS Code com MinGW), o executável gerado é `calculadora.exe`, executado com `.\calculadora.exe` ou clicando duas vezes.

### 💻 Exemplo de Uso

```
===== CALCULADORA UNIVERSAL =====
1  - IMC
2  - Area (quadrado, triangulo, circulo, losango)
...
0  - Sair
Escolha: 1
Digite o seu peso (Kg): 70
Digite a sua altura (m): 1.75
O IMC para o peso 70.00 e para a altura 1.75 eh de: 22.86
Classificacao: Peso Normal
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
- **Disciplina:** Programação de Computadores
- **GitHub:** [pietrobitencourt](https://github.com/pietrobitencourt)
- **LinkedIn:** [in/piiettrosz](https://linkedin.com/in/piiettrosz)
- **Instagram:** [@Piiettrosz](https://instagram.com/Piiettrosz)

---

## 🇺🇸 English

### 📋 Project Description

A universal calculator built in C as a practical assignment for the **Computer Programming** course. The program brings together **23 mathematical and utility operations**, organized into **13 modular functions**, accessed through an interactive, looping main menu.

### 🎯 Objective

To apply, in an integrated way, the concepts of variables and data types, input/output, conditional structures, loop structures, functions, modularization, and the `math.h` library, building a program organized similarly to a small software development project.

### ⚙️ Implemented Features

The program has **13 functions**, which together implement **23 operations**:

| # | Function (C) | Operations | Qty. |
|---|------------|-----------|:---:|
| 1 | `calcularIMC` | Body Mass Index, with classification (underweight, normal, overweight, obesity I/II/III) | 1 |
| 2 | `calcularArea` | Area of square, triangle, circle, and rhombus | 4 |
| 3 | `calcularTabuada` | Addition, subtraction, multiplication, division, and exponentiation | 5 |
| 4 | `parOuImpar` | Checks whether a number is even or odd | 1 |
| 5 | `compararValores` | Compares two values and reports the larger, smaller, or equal | 1 |
| 6 | `calcularMedia` | Arithmetic mean of 3 grades (0–10, with range validation) | 1 |
| 7 | `calcularPorcentagem` | Calculates X% of a value | 1 |
| 8 | `calcularRegraDeTres` | Simple rule of three (X = B·C / A) | 1 |
| 9 | `calcularJurosSimples` | Simple interest and final amount | 1 |
| 10 | `calcularDesconto` | Final price of a product after a percentage discount | 1 |
| 11 | `converterTemperatura` | Celsius → Fahrenheit and Fahrenheit → Celsius | 2 |
| 12 | `converterUnidades` | Area unit conversion (mm², cm², dm², m², hectare, km²) | 1 |
| 13 | `calcularTrigonometria` | Sine, cosine, and tangent of an angle in degrees | 3 |
| | | **Total** | **23** |

> Operations that share the same nature (e.g., the 4 area shapes, the 5 arithmetic operations) were grouped into a single function with an internal submenu and `switch`, rather than one function per isolated operation — a modularization choice that avoids code duplication without dropping any required operation.

### 📚 Libraries Used

- **`stdio.h`** — input (`scanf`) and output (`printf`).
- **`math.h`** — `pow()` (exponentiation and circle area), `sin()`, `cos()`, `tan()` (trigonometry), `fabs()` (absolute value, used in the tangent's domain check).

### 🧩 Code Organization

- **`main()`** displays the main menu in a `do...while` loop and uses a `switch` to call the function matching the chosen option, until the user enters `0`.
- Each menu category is an independent **`void` function**, keeping `main()` lean and isolating each operation's logic.
- Functions with more than one operation (`calcularArea`, `calcularTabuada`, `converterTemperatura`, `converterUnidades`) implement an **internal submenu with `switch`**, following the same pattern as the main menu.
- Two helper functions — `lerInteiro()` and `limparBufferEntrada()` — centralize safe integer reading, avoiding repeated validation code in every function.

### 🛡️ Error Handling

| Situation | Where | Handling |
|---|---|---|
| Division by zero | Arithmetic table (division) | `while` loop re-reads the denominator until it's non-zero |
| Zero denominator in rule of three | Rule of three (value A) | `while` loop prevents A = 0 before proceeding |
| Domain restriction | Trigonometry (tangent) | Checks whether `cos(angle)` is practically zero before computing tangent |
| Out-of-range menu option | All menus/submenus | `switch`'s `default` warns, and submenus loop back via `do/while` |
| Non-numeric input (e.g., a letter instead of a number) | All menus/submenus | `lerInteiro()` checks `scanf`'s return value and clears the buffer before retrying |

### 🧠 Programming Concepts Used

- **Functions**: 13 `void` functions with no return value, each encapsulating one calculation category, called from `main()`.
- **Conditional structures**: `switch...case` for menu/submenu navigation (discrete values); `if...else` for value ranges (BMI classification, value comparison, domain checks).
- **Loop structures**: `do...while` in the main menu and every submenu, ensuring the program repeats until the user opts to exit; `while` to revalidate input (out-of-range grades, zero denominator, A = 0).
- **Input and output**: `scanf()` for all numeric input, formatted `printf()` (`%.2lf`, `%.4lf`, `%.6lf`) for results.
- **`math.h` library**: used in circle area, exponentiation, and the three trigonometric functions.

### 🚀 How to Compile and Run

```bash
gcc calculadora.c -o calculadora -lm
./calculadora
```

> The `-lm` flag links the math library (`math.h`) — without it, the linker won't find `pow`, `sin`, `cos`, `tan`, or `fabs`.

On Windows (Dev-C++ or VS Code with MinGW), the generated executable is `calculadora.exe`, run via `.\calculadora.exe` or by double-clicking it.

### 💻 Usage Example

```
===== CALCULADORA UNIVERSAL =====
1  - IMC
2  - Area (quadrado, triangulo, circulo, losango)
...
0  - Sair
Escolha: 1
Digite o seu peso (Kg): 70
Digite a sua altura (m): 1.75
O IMC para o peso 70.00 e para a altura 1.75 eh de: 22.86
Classificacao: Peso Normal
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
- **Course:** Computer Programming
- **GitHub:** [pietrobitencourt](https://github.com/pietrobitencourt)
- **LinkedIn:** [in/piiettrosz](https://linkedin.com/in/piiettrosz)
- **Instagram:** [@Piiettrosz](https://instagram.com/Piiettrosz)

</div>
