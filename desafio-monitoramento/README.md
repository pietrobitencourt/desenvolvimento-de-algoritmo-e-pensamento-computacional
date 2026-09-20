<div align="center">

# 🌡️ Sistema Inteligente de Monitoramento Industrial

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
- **Título do projeto:** Sistema de Monitoramento de Temperatura

### 2. Objetivo

O programa resolve o problema de monitorar, em tempo real, a temperatura de uma máquina industrial a partir de leituras sucessivas de um sensor. O sistema permite que o usuário defina um limite de temperatura considerado seguro e, a partir daí, acompanha cada nova leitura verificando se ela ultrapassa esse limite. Caso a máquina apresente **três leituras consecutivas** acima do limite de segurança, o programa entende que há um risco real de superaquecimento e encerra o monitoramento automaticamente, emitindo um alerta. Ao final, é apresentado um relatório com as principais estatísticas do período monitorado.

### 3. Funcionamento do programa

**Como o limite de temperatura é definido:**
O usuário informa o limite logo no início da execução. O valor precisa ser numérico e estar dentro da faixa de 0 a 200 °C, considerada uma faixa realista para uma máquina industrial. Enquanto o valor informado não for válido, o programa continua pedindo um novo limite.

**Como as leituras são realizadas:**
Após o limite ser definido, o programa entra em um laço de monitoramento contínuo, pedindo uma temperatura por vez, como se estivesse recebendo os dados de um sensor a cada novo ciclo.

**Como valores inválidos são tratados:**
Toda entrada (tanto do limite quanto das temperaturas) passa por validação de tipo, verificando se o valor digitado é realmente numérico. Entradas fora da faixa aceitável (para as temperaturas, de -50 °C a 300 °C) também são rejeitadas. Em ambos os casos, o programa exibe uma mensagem de erro específica, limpa o restante da entrada digitada (para evitar que caracteres residuais afetem a próxima leitura) e solicita o valor novamente, sem contabilizar a leitura inválida em nenhuma estatística.

**Como o programa identifica temperaturas acima do limite:**
Cada leitura válida é comparada diretamente com o limite definido. Se a temperatura for maior que o limite, ela é registrada como uma leitura "acima do limite", tanto no contador geral quanto no contador de sequência consecutiva.

**Como funciona a contagem de temperaturas consecutivas:**
O programa mantém dois contadores independentes: um contador geral, que soma todas as vezes que uma leitura ultrapassou o limite ao longo de todo o monitoramento, e um contador de sequência, que soma apenas enquanto as leituras acima do limite acontecem em sequência ininterrupta. Assim que uma leitura dentro do limite normal é registrada, o contador de sequência é reiniciado (zerado), pois a sequência foi quebrada.

**Qual condição encerra o monitoramento:**
O monitoramento pode ser encerrado de duas formas: manualmente, quando o usuário digita o valor sentinela **-999** em qualquer momento (inclusive já na definição do limite, o que interrompe o programa antes mesmo de iniciar as leituras), ou automaticamente, quando o contador de sequência atinge 3 leituras consecutivas acima do limite, indicando uma situação crítica.

### 4. Estruturas de repetição utilizadas

O programa utiliza exclusivamente a estrutura **do...while**, em dois pontos:

- Na validação do limite de temperatura, repetindo a pergunta enquanto o valor informado não for válido.
- No laço principal de monitoramento, repetindo a leitura de temperaturas enquanto a variável de controle `monitorando` indicar que o programa deve continuar.

A escolha do `do...while` se justifica porque, nos dois casos, a ação (pedir e ler um valor) precisa necessariamente acontecer **antes** de existir algo a testar. Não é possível avaliar se uma entrada é válida sem primeiro lê-la, e não é possível saber se o monitoramento deve continuar sem antes processar pelo menos uma leitura. Se fosse usado um `while` tradicional, seria necessário duplicar o trecho de leitura fora do laço apenas para "alimentar" a condição inicial, o que tornaria o código repetitivo e menos organizado.

### 5. Como executar

Compile o programa com o GCC:

```bash
gcc monitoramento.c -o monitoramento
```

Em seguida, execute:

```bash
./monitoramento
```

> No Windows, o executável pode ser rodado com `.\monitoramento.exe` no PowerShell.

### 6. Testes realizados

Todos os testes foram realizados com o limite de temperatura definido em **35 °C**, para facilitar a comparação entre os cenários. As evidências completas estão na pasta [`evidencias/`](./evidencias).

| Teste | Cenário | Resultado |
|---|---|---|
| [Teste 1](./evidencias/teste01.png) | Validação de entradas inválidas | Entradas não numéricas rejeitadas (limite e temperatura); relatório final com 1 leitura válida (15 °C), 0% acima do limite |
| [Teste 2](./evidencias/teste02.png) | Acima do limite, não consecutivas | Sequência 40, 20, 41, 19, 42 °C; contador de consecutivas reiniciado a cada intercalação; **sem** encerramento automático; 5 leituras, média 32,40 °C, 60% acima do limite |
| [Teste 3](./evidencias/teste03.png) | Três consecutivas acima do limite | Sequência 40, 41, 42 °C; encerramento automático na terceira leitura; 3 leituras, média 41,00 °C, 100% acima do limite |

**Teste 1 — Validação de entradas inválidas:** foram testadas entradas não numéricas tanto na definição do limite (`abc`, `//44`) quanto nas leituras de temperatura (`test`, `/33/33/3`), além de uma leitura válida (`15`) e do encerramento manual com `-999`. Todas as entradas inválidas foram corretamente rejeitadas, com mensagem de erro, sem contaminar as leituras seguintes.

**Teste 2 — Temperaturas acima do limite, porém não consecutivas:** a sequência 40, 20, 41, 19 e 42 °C intercalou leituras acima e dentro do limite, reiniciando o contador de sequência a cada vez. Como resultado, o programa não encerrou automaticamente, confirmando que o contador de consecutivas funciona corretamente.

**Teste 3 — Três temperaturas consecutivas acima do limite:** a sequência 40, 41 e 42 °C, todas consecutivamente acima do limite, provocou o alerta crítico e o encerramento automático na terceira leitura, sem solicitar uma quarta.

### Questão final de reflexão

Escolhi utilizar exclusivamente a estrutura **do...while** em todo o programa, tanto na validação do limite quanto no laço principal de monitoramento. Essa escolha se justifica pela natureza dos dois problemas: em ambos os casos, a ação de ler um valor precisa acontecer **antes** de existir uma condição para testar. Não é possível verificar se uma entrada é válida sem primeiro lê-la, e não é possível decidir se o monitoramento deve parar sem antes processar pelo menos uma leitura de temperatura.

A diferença entre testar a condição antes ou depois da execução foi especialmente importante na validação do limite: se eu tivesse usado um `while` tradicional (que testa a condição antes de executar o bloco), seria necessário escrever o trecho de leitura do valor duas vezes — uma vez fora do laço, apenas para ter um valor inicial a testar, e outra vez dentro do laço, para repetir a leitura caso o valor fosse inválido. Com o `do...while`, a primeira leitura já acontece naturalmente dentro do próprio laço, e o teste só é feito depois, evitando código duplicado e tornando a lógica mais direta.

<div align="right">

[⬆️ voltar ao topo](#-sistema-inteligente-de-monitoramento-industrial)

</div>

---

## 🇺🇸 English

### 1. Identification

- **Student:** Piêtro Bitencourt Nunes
- **Course:** Algorithms and Computational Thinking
- **Instructor:** Prof. Karla Sartin
- **Project title:** Temperature Monitoring System

### 2. Objective

The program addresses the problem of monitoring, in real time, the temperature of an industrial machine based on successive sensor readings. The system lets the user define a temperature limit considered safe and then tracks each new reading, checking whether it exceeds that limit. If the machine reports **three consecutive readings** above the safety limit, the program treats this as a real overheating risk and automatically stops the monitoring, raising an alert. At the end, a report is displayed with the main statistics of the monitored period.

### 3. How the program works

**How the temperature limit is defined:**
The user provides the limit right at the start of execution. The value must be numeric and fall within the 0 to 200 °C range, a realistic range for an industrial machine. While the value entered is invalid, the program keeps asking for a new limit.

**How readings are taken:**
Once the limit is defined, the program enters a continuous monitoring loop, asking for one temperature at a time, as if receiving sensor data on each new cycle.

**How invalid values are handled:**
Every input (both the limit and the temperature readings) goes through type validation, checking whether the entered value is actually numeric. Inputs outside the acceptable range (for temperatures, -50 °C to 300 °C) are also rejected. In both cases, the program displays a specific error message, clears any leftover input (to prevent stray characters from affecting the next reading), and asks for the value again, without counting the invalid reading in any statistic.

**How the program identifies temperatures above the limit:**
Each valid reading is compared directly against the defined limit. If the temperature is greater than the limit, it is logged as a reading "above the limit," both in the overall counter and in the consecutive-streak counter.

**How the consecutive temperature count works:**
The program keeps two independent counters: an overall counter, which adds up every time a reading exceeded the limit throughout the whole monitoring session, and a streak counter, which only adds up while above-limit readings happen in an unbroken sequence. As soon as a reading within the normal limit is logged, the streak counter is reset to zero, since the sequence was broken.

**Which condition ends the monitoring:**
Monitoring can end in two ways: manually, when the user enters the sentinel value **-999** at any point (including while still defining the limit, which stops the program before any readings even start), or automatically, when the streak counter reaches 3 consecutive readings above the limit, indicating a critical situation.

### 4. Loop structures used

The program relies exclusively on the **do...while** structure, in two places:

- When validating the temperature limit, repeating the prompt while the entered value is invalid.
- In the main monitoring loop, repeating the temperature reading while the control variable `monitorando` indicates the program should continue.

The choice of `do...while` is justified because, in both cases, the action (asking for and reading a value) necessarily has to happen **before** there is anything to test. It is not possible to check whether an input is valid without reading it first, and it is not possible to know whether monitoring should continue without first processing at least one reading. Using a traditional `while` would require duplicating the reading step outside the loop just to "feed" the initial condition, which would make the code repetitive and less organized.

### 5. How to run

Compile the program with GCC:

```bash
gcc monitoramento.c -o monitoramento
```

Then run it:

```bash
./monitoramento
```

> On Windows, the executable can be run with `.\monitoramento.exe` in PowerShell.

### 6. Tests performed

All tests were run with the temperature limit set to **35 °C**, to make comparison between scenarios easier. Full evidence is available in the [`evidencias/`](./evidencias) folder.

| Test | Scenario | Result |
|---|---|---|
| [Test 1](./evidencias/teste01.png) | Invalid input validation | Non-numeric inputs rejected (limit and temperature); final report with 1 valid reading (15 °C), 0% above the limit |
| [Test 2](./evidencias/teste02.png) | Above limit, not consecutive | Sequence 40, 20, 41, 19, 42 °C; streak counter reset on each interleaving; **no** automatic shutdown; 5 readings, average 32.40 °C, 60% above the limit |
| [Test 3](./evidencias/teste03.png) | Three consecutive readings above limit | Sequence 40, 41, 42 °C; automatic shutdown on the third reading; 3 readings, average 41.00 °C, 100% above the limit |

**Test 1 — Invalid input validation:** non-numeric inputs were tested both when defining the limit (`abc`, `//44`) and when entering temperature readings (`test`, `/33/33/3`), along with one valid reading (`15`) and manual shutdown via `-999`. All invalid inputs were correctly rejected, with an error message, without contaminating subsequent readings.

**Test 2 — Above the limit, but not consecutive:** the sequence 40, 20, 41, 19, and 42 °C interleaved above-limit and within-limit readings, resetting the streak counter each time. As a result, the program did not shut down automatically, confirming that the consecutive-streak counter works correctly.

**Test 3 — Three consecutive readings above the limit:** the sequence 40, 41, and 42 °C, all consecutively above the limit, triggered the critical alert and automatic shutdown on the third reading, without prompting for a fourth.

### Final reflection question

I chose to use exclusively the **do...while** structure throughout the program, both for validating the limit and in the main monitoring loop. This choice is justified by the nature of both problems: in each case, the action of reading a value has to happen **before** there is a condition to test. It is not possible to check whether an input is valid without reading it first, and it is not possible to decide whether monitoring should stop without first processing at least one temperature reading.

The difference between testing the condition before or after execution was especially important when validating the limit: had I used a traditional `while` (which tests the condition before executing the block), I would have needed to write the reading step twice — once outside the loop, just to have an initial value to test, and again inside the loop, to repeat the reading if the value was invalid. With `do...while`, the first reading happens naturally inside the loop itself, and the test only happens afterward, avoiding duplicated code and making the logic more straightforward.

<div align="right">

[⬆️ back to top](#-sistema-inteligente-de-monitoramento-industrial)

</div>

---

<div align="center">

Projeto individual desenvolvido para a disciplina de Algoritmos e Pensamento Computacional.
*Individual project developed for the Algorithms and Computational Thinking course.*

</div>
