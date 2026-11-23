<div align="center">

# 📂 Algoritmos e Pensamento Computacional

**Atividades avaliativas em lógica de programação, fluxogramas e linguagem C** <br>
*Graded assignments in programming logic, flowcharts and the C language*

![Lógica de Programação](https://img.shields.io/badge/l%C3%B3gica%20de%20programa%C3%A7%C3%A3o-2EA44F?style=flat-square)
[![Flowgorithm](https://img.shields.io/badge/Flowgorithm-4.2-blue?style=flat-square)](http://www.flowgorithm.org/)
![C](https://img.shields.io/badge/C-A8B9CC?style=flat-square&logo=c&logoColor=white)
![GCC](https://img.shields.io/badge/GCC-A42E2B?style=flat-square&logo=gnu&logoColor=white)
![VS Code](https://img.shields.io/badge/VS%20Code-007ACC?style=flat-square&logo=visualstudiocode&logoColor=white)
![Atividades](https://img.shields.io/badge/atividades-6-informational?style=flat-square)
![Status](https://img.shields.io/badge/status-conclu%C3%ADdo-success?style=flat-square)
[![License: MIT](https://img.shields.io/badge/license-MIT-yellow?style=flat-square)](./LICENSE)

**[🇧🇷 Português](#-português)** • **[🇺🇸 English](#-english)**

</div>

---

## 🇧🇷 Português

### 📖 Sobre este repositório

Este repositório reúne as **atividades avaliativas** da disciplina de **Algoritmos e Pensamento Computacional**. Cada atividade fica em sua própria subpasta, com código-fonte e um README explicando o que foi feito, as funções implementadas, como compilar e executar e, quando há, as evidências dos testes.

### 🗂️ Atividades

| Pasta | Atividade | Linguagem | Descrição |
|---|---|:---:|---|
| [`calculadora-flowgorithm/`](./calculadora-flowgorithm) | Calculadora Universal (Flowgorithm) | Flowgorithm | Calculadora com 27 funções/operações (mínimo de 20 exigido), incluindo cálculo de IMC e de área de figuras geométricas — [ver README da atividade](./calculadora-flowgorithm/README.md) |
| [`Calculadora_em_C/`](./Calculadora_em_C) | Calculadora Universal (C) | C | Reimplementação em C com 32 operações organizadas em 18 funções, cobrindo toda a lista sugerida no enunciado (raízes, logaritmos, trigonometria, conversões, entre outras) — [ver README da atividade](./Calculadora_em_C/README.md) |
| [`desafio-monitoramento/`](./desafio-monitoramento) | Sistema de Monitoramento de Temperatura | C | Programa com `do...while` que monitora temperaturas de uma máquina industrial, valida entradas, calcula estatísticas e encerra automaticamente após 3 leituras consecutivas acima do limite — [ver README da atividade](./desafio-monitoramento/README.md) |
| [`array-vetor/`](./array-vetor) | Análise de Vetor (Array) | C | Programa que lê 20 números inteiros em um vetor e calcula a soma dos múltiplos de 3, a média dos pares, a quantidade de positivos e negativos e o maior e o menor valor, com validação de entrada — [ver README da atividade](./array-vetor/README.md) |
| [`cadastro-equipamentos/`](./cadastro-equipamentos) | Cadastro de Equipamentos | C | Programa com menu (cadastrar, listar e sair) que grava o nome, o código e a localização de cada equipamento no arquivo `equipamentos.txt`, preservando os registros existentes, e exibe todos na tela, usando `fopen()`, `fprintf()`, `fgets()` e `fclose()` — [ver README da atividade](./cadastro-equipamentos/README.md) |
| [`clinica-senhas/`](./clinica-senhas) | Sistema de Senhas de Atendimento — **Prova final** | C | Sistema modular (`.c` e `.h`) que gerencia as senhas de uma clínica de especialidades médicas: cadastra o paciente, classifica a senha em Urgente, Preferencial ou Normal, mantém **filas circulares** respeitando prioridade e ordem de chegada, registra chamadas e finalizações de atendimento e exibe um painel de chamada em tempo real — [ver README da atividade](./clinica-senhas/README.md) |

> Novas atividades da disciplina serão adicionadas aqui como novas subpastas, cada uma com seu próprio README.

### 🧠 Conteúdos praticados

| Atividade | O que foi praticado |
|---|---|
| Calculadora Universal (Flowgorithm) | Lógica sequencial, estruturas de decisão, menus e fluxogramas |
| Calculadora Universal (C) | Funções, operações matemáticas e menu interativo |
| Monitoramento de Temperatura | Estruturas de repetição (`do...while`), validação de entradas e estatísticas |
| Análise de Vetor | Vetores (arrays), validação de entrada com `scanf` e cálculos agregados |
| Cadastro de Equipamentos | Manipulação de arquivos de texto (`fopen`, `fprintf`, `fgets`, `fclose`) |
| Sistema de Senhas de Atendimento | `struct`, ponteiros, modularização com `.c` e `.h`, fila circular e regras de prioridade |

### 🛠️ Tecnologias e ferramentas

| Ferramenta | Uso |
|---|---|
| **C** (compilador GCC) | Implementação dos programas |
| **Flowgorithm** | Fluxogramas e lógica visual |
| **VS Code** | Edição, terminal integrado e captura das evidências |
| **Git e GitHub** | Versionamento e entrega das atividades |

### ▶️ Como executar

```bash
git clone https://github.com/pietrobitencourt/desenvolvimento-de-algoritmo-e-pensamento-computacional.git
cd desenvolvimento-de-algoritmo-e-pensamento-computacional
```

- **Programas em C de um só arquivo:** entre na pasta da atividade e compile com `gcc -Wall -Wextra arquivo.c -o programa`. O nome do arquivo `.c` e as instruções detalhadas estão no README de cada atividade. Em Linux e macOS, programas que usam `math.h` (como a calculadora em C) precisam do parâmetro `-lm` no final do comando de compilação.
- **Atividade em Flowgorithm:** abra o arquivo `.fprg` no [Flowgorithm](http://www.flowgorithm.org/).
- **`clinica-senhas/`:** projeto com vários arquivos, compilado com `-Iinclude`. O passo a passo para Windows, Linux e macOS está no [README da atividade](./clinica-senhas/README.md).

### 🌳 Estrutura

```
desenvolvimento-de-algoritmo-e-pensamento-computacional/
├── LICENSE
├── README.md
├── calculadora-flowgorithm/
│   ├── Calculadora_Universal.fprg
│   └── README.md
├── Calculadora_em_C/
│   ├── calculadora.c
│   └── README.md
├── desafio-monitoramento/
│   ├── monitoramento.c
│   ├── README.md
│   └── evidencias/
│       ├── teste01.png
│       ├── teste02.png
│       └── teste03.png
├── array-vetor/
│   ├── array_vetor.c
│   ├── README.md
│   └── evidencias/
│       └── 01-execucao-programa.png
├── cadastro-equipamentos/
│   ├── cadastro_equipamentos.c
│   ├── equipamentos.txt
│   ├── README.md
│   └── evidencias/
│       ├── cadastrarEquipamento.png
│       └── listarEquipamento.png
└── clinica-senhas/
    ├── include/          (arquivos de cabeçalho .h)
    ├── src/              (código-fonte .c)
    ├── evidencias/       (capturas de tela dos testes)
    └── README.md
```

A licença [MIT](./LICENSE) na raiz vale para todas as atividades deste repositório.

### 👤 Autor

**Piêtro Bitencourt Nunes**

[![GitHub](https://img.shields.io/badge/GitHub-pietrobitencourt-181717?style=flat-square&logo=github)](https://github.com/pietrobitencourt)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-in%2Fpiiettrosz-0A66C2?style=flat-square&logo=linkedin&logoColor=white)](https://linkedin.com/in/piiettrosz)

---

## 🇺🇸 English

### 📖 About this repository

This repository gathers the **graded assignments** for the **Algorithms and Computational Thinking** course. Each assignment lives in its own subfolder, with source code and a README explaining what was done, the implemented functions, how to build and run it and, where available, the test evidence.

### 🗂️ Assignments

| Folder | Assignment | Language | Description |
|---|---|:---:|---|
| [`calculadora-flowgorithm/`](./calculadora-flowgorithm) | Universal Calculator (Flowgorithm) | Flowgorithm | A 27-function/operation calculator (minimum of 20 required), including BMI and geometric area calculations — [see assignment README](./calculadora-flowgorithm/README.md#-english) |
| [`Calculadora_em_C/`](./Calculadora_em_C) | Universal Calculator (C) | C | C reimplementation with 32 operations across 18 functions, covering the entire list suggested in the assignment brief (roots, logarithms, trigonometry, conversions, and more) — [see assignment README](./Calculadora_em_C/README.md#-english) |
| [`desafio-monitoramento/`](./desafio-monitoramento) | Temperature Monitoring System | C | A `do...while`-driven program that monitors an industrial machine's temperature, validates input, calculates statistics, and automatically shuts down after 3 consecutive readings above the limit — [see assignment README](./desafio-monitoramento/README.md#-english) |
| [`array-vetor/`](./array-vetor) | Array Analysis | C | A program that reads 20 integers into an array and calculates the sum of the multiples of 3, the average of the even numbers, the count of positive and negative numbers, and the highest and lowest values, with input validation — [see assignment README](./array-vetor/README.md#-english) |
| [`cadastro-equipamentos/`](./cadastro-equipamentos) | Equipment Registry | C | A menu-driven program (register, list and exit) that saves each item's name, ID code and location to `equipamentos.txt`, keeping existing records, and displays them all on screen, using `fopen()`, `fprintf()`, `fgets()` and `fclose()` — [see assignment README](./cadastro-equipamentos/README.md#-english) |
| [`clinica-senhas/`](./clinica-senhas) | Clinic Queue Ticket System — **Final exam** | C | A modular (`.c` and `.h`) system that manages the queue tickets of a medical specialties clinic: it registers the patient, classifies the ticket as Urgent, Priority or Regular, keeps **circular queues** that respect priority and arrival order, records calls and finished appointments, and shows a live call panel — [see assignment README](./clinica-senhas/README.md#en) |

> New assignments for this course will be added here as new subfolders, each with its own README.

### 🧠 Concepts practiced

| Assignment | What was practiced |
|---|---|
| Universal Calculator (Flowgorithm) | Sequential logic, decision structures, menus and flowcharts |
| Universal Calculator (C) | Functions, math operations and an interactive menu |
| Temperature Monitoring | Loops (`do...while`), input validation and statistics |
| Array Analysis | Arrays, `scanf` input validation and aggregate calculations |
| Equipment Registry | Text file handling (`fopen`, `fprintf`, `fgets`, `fclose`) |
| Clinic Queue Ticket System | `struct`, pointers, modular design with `.c` and `.h`, circular queue and priority rules |

### 🛠️ Technologies and tools

| Tool | Use |
|---|---|
| **C** (GCC compiler) | Program implementation |
| **Flowgorithm** | Flowcharts and visual logic |
| **VS Code** | Editing, integrated terminal and evidence capture |
| **Git and GitHub** | Version control and assignment delivery |

### ▶️ How to run

```bash
git clone https://github.com/pietrobitencourt/desenvolvimento-de-algoritmo-e-pensamento-computacional.git
cd desenvolvimento-de-algoritmo-e-pensamento-computacional
```

- **Single-file C programs:** enter the assignment folder and build with `gcc -Wall -Wextra file.c -o program`. The `.c` file name and detailed instructions are in each assignment's README. On Linux and macOS, programs that use `math.h` (such as the C calculator) need the `-lm` flag at the end of the build command.
- **Flowgorithm assignment:** open the `.fprg` file in [Flowgorithm](http://www.flowgorithm.org/).
- **`clinica-senhas/`:** a multi-file project, built with `-Iinclude`. Step-by-step instructions for Windows, Linux and macOS are in the [assignment README](./clinica-senhas/README.md#en).

### 🌳 Structure

```
desenvolvimento-de-algoritmo-e-pensamento-computacional/
├── LICENSE
├── README.md
├── calculadora-flowgorithm/
│   ├── Calculadora_Universal.fprg
│   └── README.md
├── Calculadora_em_C/
│   ├── calculadora.c
│   └── README.md
├── desafio-monitoramento/
│   ├── monitoramento.c
│   ├── README.md
│   └── evidencias/
│       ├── teste01.png
│       ├── teste02.png
│       └── teste03.png
├── array-vetor/
│   ├── array_vetor.c
│   ├── README.md
│   └── evidencias/
│       └── 01-execucao-programa.png
├── cadastro-equipamentos/
│   ├── cadastro_equipamentos.c
│   ├── equipamentos.txt
│   ├── README.md
│   └── evidencias/
│       ├── cadastrarEquipamento.png
│       └── listarEquipamento.png
└── clinica-senhas/
    ├── include/          (header files .h)
    ├── src/              (source files .c)
    ├── evidencias/       (test screenshots)
    └── README.md
```

The [MIT](./LICENSE) license at the root applies to all assignments in this repository.

### 👤 Author

**Piêtro Bitencourt Nunes**

[![GitHub](https://img.shields.io/badge/GitHub-pietrobitencourt-181717?style=flat-square&logo=github)](https://github.com/pietrobitencourt)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-in%2Fpiiettrosz-0A66C2?style=flat-square&logo=linkedin&logoColor=white)](https://linkedin.com/in/piiettrosz)