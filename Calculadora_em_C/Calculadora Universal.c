#include <stdio.h>
#include <math.h>

#define PI 3.14159265

/* ============================================================
    Autor: Piêtro Bitencourt Nunes
    Disciplina: Programação de Computadores
    Atividade: Calculadora Universal em C
    Ig: @Piiettrosz - GitHub: pietrobitencourt - Linkedin: in/piiettrosz
   ============================================================ */


void calcularIMC(void);
void calcularArea(void);
void calcularTabuada(void);
void parOuImpar(void);
void compararValores(void);
void calcularMedia(void);
void calcularPorcentagem(void);
void calcularRegraDeTres(void);
void calcularJurosSimples(void);
void calcularDesconto(void);
void converterTemperatura(void);
void converterUnidades(void);
void calcularTrigonometria(void);
void limparBufferEntrada(void);
int lerInteiro(int *destino);


void limparBufferEntrada(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int lerInteiro(int *destino) {
    if (scanf("%d", destino) != 1) {
        limparBufferEntrada();
        return 0;
    }
    limparBufferEntrada();
    return 1;
}

int main() {
    int opcao;

    do {
        printf("\n===== CALCULADORA UNIVERSAL =====\n");
        printf("1  - IMC\n");
        printf("2  - Area (quadrado, triangulo, circulo, losango)\n");
        printf("3  - Tabuada (soma, subtracao, multiplicacao, divisao, potencia)\n");
        printf("4  - Par ou Impar\n");
        printf("5  - Comparacao entre valores\n");
        printf("6  - Media aritmetica\n");
        printf("7  - Porcentagem\n");
        printf("8  - Regra de tres simples\n");
        printf("9  - Juros simples\n");
        printf("10 - Desconto\n");
        printf("11 - Conversao de temperatura (Celsius <-> Fahrenheit)\n");
        printf("12 - Conversor de unidades (area)\n");
        printf("13 - Trigonometria (seno, cosseno, tangente)\n");
        printf("0  - Sair\n");
        printf("Escolha: ");

        if (!lerInteiro(&opcao)) {
            printf("\nEntrada invalida! Digite um numero.\n");
            continue;
        }

        switch (opcao) {
            case 1:
                calcularIMC();
                break;
            case 2:
                calcularArea();
                break;
            case 3:
                calcularTabuada();
                break;
            case 4:
                parOuImpar();
                break;
            case 5:
                compararValores();
                break;
            case 6:
                calcularMedia();
                break;
            case 7:
                calcularPorcentagem();
                break;
            case 8:
                calcularRegraDeTres();
                break;
            case 9:
                calcularJurosSimples();
                break;
            case 10:
                calcularDesconto();
                break;
            case 11:
                converterTemperatura();
                break;
            case 12:
                converterUnidades();
                break;
            case 13:
                calcularTrigonometria();
                break;
            case 0:
                printf("\nEncerrando o programa...\n");
                break;
            default:
                printf("\nOpcao invalida! Tente novamente.\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}


void calcularIMC(void) {
    double peso, altura, imc;

    printf("Digite o seu peso (Kg): ");
    scanf("%lf", &peso);

    printf("Digite a sua altura (m): ");
    scanf("%lf", &altura);

    imc = peso / (altura * altura);

    printf("O IMC para o peso %.2lf e para a altura %.2lf eh de: %.2lf\n", peso, altura, imc);

    if (imc < 18.5) {
        printf("Classificacao: Abaixo do Peso\n");
    }
    else if (imc <= 24.9) {
        printf("Classificacao: Peso Normal\n");
    }
    else if (imc <= 29.9) {
        printf("Classificacao: Excesso de Peso\n");
    }
    else if (imc <= 34.9) {
        printf("Classificacao: Obesidade Grau I\n");
    }
    else if (imc <= 39.9) {
        printf("Classificacao: Obesidade Grau II\n");
    }
    else {
        printf("Classificacao: Obesidade Morbida\n");
    }
}

void calcularArea(void) {
    int opcaoArea;
    double area, base, altura, raio, diagonalMaior, diagonalMenor, lado;

    do {
        printf("\nEscolha a figura geometrica:\n [1] Quadrado | [2] Triangulo | [3] Circulo | [4] Losango | [0] para sair\n");
        printf("Opcao: ");

        if (!lerInteiro(&opcaoArea)) {
            printf("Entrada invalida! Digite um numero.\n");
            continue;
        }

        switch (opcaoArea) {
            case 1:
                printf("Digite o valor do lado do quadrado (em u.m): ");
                scanf("%lf", &lado);

                area = lado * lado;
                printf("A area do quadrado eh: %.2lf u.m^2\n", area);
                break;
            case 2:
                printf("Digite a base do triangulo (em u.m): ");
                scanf("%lf", &base);

                printf("Digite a altura do triangulo (em u.m): ");
                scanf("%lf", &altura);

                area = (base * altura) / 2;
                printf("A area do triangulo eh: %.2lf u.m^2\n", area);
                break;
            case 3:
                printf("Digite o raio do circulo (em u.m): ");
                scanf("%lf", &raio);

                area = PI * pow(raio, 2);
                printf("A area do circulo eh: %.2lf u.m^2\n", area);
                break;
            case 4:
                printf("Digite a diagonal maior do losango (em u.m): ");
                scanf("%lf", &diagonalMaior);

                printf("Digite a diagonal menor do losango (em u.m): ");
                scanf("%lf", &diagonalMenor);

                area = (diagonalMaior * diagonalMenor) / 2;
                printf("A area do losango eh: %.2lf u.m^2\n", area);
                break;
            case 0:
                printf("\nSaindo da Calculadora de area...\n");
                break;

            default:
                printf("Opcao invalida!\n");
                break;
        }

    } while (opcaoArea != 0);
}

void calcularTabuada(void) {
    int opcaoTabuada;
    double num1, num2, base, expoente, resultadoTabuada;

    do {
        printf("\n===Escolha a Operacao===\n");
        printf("[1] Soma [2] Subtracao [3] Multiplicacao [4] Divisao [5] Potencia [0] para sair\n");
        printf("Opcao: ");

        if (!lerInteiro(&opcaoTabuada)) {
            printf("Entrada invalida! Digite um numero.\n");
            continue;
        }

        switch (opcaoTabuada) {
            case 1:
                printf("Digite o primeiro numero: ");
                scanf("%lf", &num1);
                printf("Digite o segundo numero: ");
                scanf("%lf", &num2);

                resultadoTabuada = num1 + num2;
                printf("A soma de %.2lf + %.2lf eh = %.2lf\n", num1, num2, resultadoTabuada);
                break;

            case 2:
                printf("Digite o primeiro numero: ");
                scanf("%lf", &num1);
                printf("Digite o segundo numero: ");
                scanf("%lf", &num2);

                resultadoTabuada = num1 - num2;
                printf("A subtracao de %.2lf - %.2lf eh = %.2lf\n", num1, num2, resultadoTabuada);
                break;

            case 3:
                printf("Digite o primeiro numero: ");
                scanf("%lf", &num1);
                printf("Digite o segundo numero: ");
                scanf("%lf", &num2);

                resultadoTabuada = num1 * num2;
                printf("A multiplicacao de %.2lf * %.2lf eh = %.2lf\n", num1, num2, resultadoTabuada);
                break;

            case 4:
                printf("Digite o numerador: ");
                scanf("%lf", &num1);
                printf("Digite o denominador: ");
                scanf("%lf", &num2);

                while (num2 == 0) {
                    printf("Erro: divisao por zero nao e permitida.\n");
                    printf("Digite o denominador: ");
                    scanf("%lf", &num2);
                }

                resultadoTabuada = num1 / num2;
                printf("A divisao de %.2lf / %.2lf eh = %.2lf\n", num1, num2, resultadoTabuada);
                break;

            case 5:
                printf("Digite a base: ");
                scanf("%lf", &base);
                printf("Digite o expoente: ");
                scanf("%lf", &expoente);

                resultadoTabuada = pow(base, expoente);
                printf("A potencia da base %.2lf elevada ao expoente %.2lf eh = %.2lf\n", base, expoente, resultadoTabuada);
                break;

            case 0:
                printf("\nSaindo da tabuada...\n");
                break;

            default:
                printf("Opcao invalida!\n");
                break;
        }

    } while (opcaoTabuada != 0);
}

void parOuImpar(void) {
    int numero;

    printf("Digite o numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O numero %d eh par!\n", numero);
    }
    else {
        printf("O numero %d eh impar!\n", numero);
    }
}

void compararValores(void) {
    double valor1, valor2;

    printf("Digite o primeiro digito: ");
    scanf("%lf", &valor1);

    printf("Digite o segundo digito: ");
    scanf("%lf", &valor2);

    if (valor1 > valor2) {
        printf("O numero %.2lf eh maior que %.2lf.\n", valor1, valor2);
    }
    else if (valor2 > valor1) {
        printf("O numero %.2lf eh menor que %.2lf.\n", valor1, valor2);
    }
    else {
        printf("O numero %.2lf e %.2lf sao iguais.\n", valor1, valor2);
    }
}

void calcularMedia(void) {
    double nota1, nota2, nota3, media;

    printf("Digite a primeira nota (0 a 10): ");
    scanf("%lf", &nota1);

    while (nota1 < 0 || nota1 > 10) {
        printf("Nota invalida! Digite novamente (0 a 10): ");
        scanf("%lf", &nota1);
    }

    printf("Nota valida registrada: %.2lf\n", nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    while (nota2 < 0 || nota2 > 10) {
        printf("Nota invalida! Digite novamente (0 a 10): ");
        scanf("%lf", &nota2);
    }

    printf("Nota valida registrada: %.2lf\n", nota2);

    printf("Digite a terceira nota: ");
    scanf("%lf", &nota3);

    while (nota3 < 0 || nota3 > 10) {
        printf("Nota invalida! Digite novamente (0 a 10): ");
        scanf("%lf", &nota3);
    }

    printf("Nota valida registrada: %.2lf\n", nota3);

    media = (nota1 + nota2 + nota3) / 3.0;

    printf("A media das 3 notas eh: %.2lf\n", media);
}

void calcularPorcentagem(void) {
    double valorPercentual, percentual, resultadoPorcentagem;

    printf("Digite o valor: \n");
    scanf("%lf", &valorPercentual);

    printf("Digite o percentual (%%): \n");
    scanf("%lf", &percentual);

    resultadoPorcentagem = (valorPercentual * percentual) / 100;
    printf("%.2lf%% de %.2lf eh: %.2lf\n", percentual, valorPercentual, resultadoPorcentagem);
}

void calcularRegraDeTres(void) {
    double a, b, c, x;

    printf("Digite o Valor de A: ");
    scanf("%lf", &a);
    while (a == 0) {
        printf("Erro! O valor de A nao pode ser zero.\n Digite novamente: ");
        scanf("%lf", &a);
    }
    printf("Digite o Valor de B: ");
    scanf("%lf", &b);

    printf("Digite o Valor de C: ");
    scanf("%lf", &c);

    x = (b * c) / a;

    printf("O valor de X eh: %.2lf\n", x);
}

void calcularJurosSimples(void) {
    double capital, taxa, tempo, juros, montante;

    printf("Digite o capital (R$): ");
    scanf("%lf", &capital);

    printf("Digite a taxa de juros (%%) ao mes: ");
    scanf("%lf", &taxa);

    printf("Digite o tempo (em meses): ");
    scanf("%lf", &tempo);

    juros = (capital * taxa * tempo) / 100;
    montante = capital + juros;

    printf("Juros: R$ %.2lf\n", juros);
    printf("Montante final: R$ %.2lf\n", montante);
}

void calcularDesconto(void) {
    double precoOriginal, percentualDesconto, valorDesconto, precoFinal;

    printf("Digite o preco original (R$): ");
    scanf("%lf", &precoOriginal);

    printf("Digite o percentual de desconto (%%): ");
    scanf("%lf", &percentualDesconto);

    valorDesconto = (precoOriginal * percentualDesconto) / 100;
    precoFinal = precoOriginal - valorDesconto;

    printf("Desconto: R$ %.2lf\n", valorDesconto);
    printf("Preco Final: R$ %.2lf\n", precoFinal);
}

void converterTemperatura(void) {
    int opcaoTemp;
    double temperatura, resultadoTemp;

    do {
        printf("\n--- CONVERSOR DE TEMPERATURA ---\n");
        printf("[1] Celsius -> Fahrenheit\n");
        printf("[2] Fahrenheit -> Celsius\n");
        printf("[0] Voltar ao menu anterior\n");
        printf("Escolha: ");

        if (!lerInteiro(&opcaoTemp)) {
            printf("Entrada invalida! Digite um numero.\n");
            continue;
        }

        switch (opcaoTemp) {
            case 1:
                printf("Digite a temperatura em Celsius: ");
                scanf("%lf", &temperatura);
                resultadoTemp = (temperatura * 9.0 / 5.0) + 32.0;
                printf("Resultado: %.2lf F\n", resultadoTemp);
                break;
            case 2:
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%lf", &temperatura);
                resultadoTemp = (temperatura - 32.0) * 5.0 / 9.0;
                printf("Resultado: %.2lf C\n", resultadoTemp);
                break;
            case 0:
                printf("Saindo do conversor...\n");
                break;
            default:
                printf("\nOpcao invalida! Tente novamente.\n");
                break;
        }
    } while (opcaoTemp != 0);
}

void converterUnidades(void) {
    int unidadeOrigem, unidadeDestino;
    double valor, fatorOrigem, fatorDestino, resultado;

    do {
        printf("\n===Escolha a unidade de Origem===\n");
        printf("[1] mm2  [2] cm2  [3] dm2  [4] m2  [5] hectare  [6] km2\n");
        printf("Converter de qual unidade? ");

        if (!lerInteiro(&unidadeOrigem)) {
            printf("Entrada invalida! Digite um numero.\n");
            continue;
        }

        switch (unidadeOrigem) {
            case 1:
                fatorOrigem = 1e-6;
                break;
            case 2:
                fatorOrigem = 1e-4;
                break;
            case 3:
                fatorOrigem = 1e-2;
                break;
            case 4:
                fatorOrigem = 1;
                break;
            case 5:
                fatorOrigem = 1e4;
                break;
            case 6:
                fatorOrigem = 1e6;
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }

        if (unidadeOrigem < 1 || unidadeOrigem > 6) {
            printf("Opcao invalida! Tente novamente.\n");
        }
    } while (unidadeOrigem < 1 || unidadeOrigem > 6);

    do {
        printf("\n===Escolha a unidade de Destino===\n");
        printf("[1] mm2  [2] cm2  [3] dm2  [4] m2  [5] hectare  [6] km2\n");
        printf("Converter para qual unidade? ");

        if (!lerInteiro(&unidadeDestino)) {
            printf("Entrada invalida! Digite um numero.\n");
            continue;
        }

        switch (unidadeDestino) {
            case 1:
                fatorDestino = 1e-6;
                break;
            case 2:
                fatorDestino = 1e-4;
                break;
            case 3:
                fatorDestino = 1e-2;
                break;
            case 4:
                fatorDestino = 1;
                break;
            case 5:
                fatorDestino = 1e4;
                break;
            case 6:
                fatorDestino = 1e6;
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }

        if (unidadeDestino < 1 || unidadeDestino > 6) {
            printf("Opcao invalida! Tente novamente.\n");
        }
    } while (unidadeDestino < 1 || unidadeDestino > 6);

    printf("Digite o valor a converter: ");
    scanf("%lf", &valor);

    resultado = (valor * fatorOrigem) / fatorDestino;

    printf("Resultado: %.6lf\n", resultado);
}


void calcularTrigonometria(void) {
    int opcaoTrig;
    double angulo, anguloRad, resultado, cossenoRad;

    printf("\nEscolha: [1] Seno | [2] Cosseno | [3] Tangente\n");
    printf("Opcao: ");

    if (!lerInteiro(&opcaoTrig)) {
        printf("Entrada invalida! Digite um numero.\n");
        return;
    }

    if (opcaoTrig < 1 || opcaoTrig > 3) {
        printf("Opcao invalida!\n");
        return;
    }

    printf("Digite o angulo (em graus): ");
    scanf("%lf", &angulo);

    anguloRad = angulo * (PI / 180.0);

    switch (opcaoTrig) {
        case 1:
            resultado = sin(anguloRad);
            printf("Seno de %.2lf graus: %.4lf\n", angulo, resultado);
            break;

        case 2:
            resultado = cos(anguloRad);
            printf("Cosseno de %.2lf graus: %.4lf\n", angulo, resultado);
            break;

        case 3:
            cossenoRad = cos(anguloRad);

            if (fabs(cossenoRad) < 1e-10) {
                printf("Erro: tangente nao definida para %.2lf graus (cosseno igual a zero).\n", angulo);
                return;
            }

            resultado = tan(anguloRad);
            printf("Tangente de %.2lf graus: %.4lf\n", angulo, resultado);
            break;
    }
}