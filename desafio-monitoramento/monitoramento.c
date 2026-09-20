#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>

void limparBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
void exibirRelatorio(int total, float soma, float maior, float menor, int acimaLimite, int encerramentoAutomatico) {
    printf("\n=========================================\n");
    printf("           RELATORIO FINAL\n");
    printf("=========================================\n");

    if (total == 0) {
    printf("Nenhuma leitura valida foi registrada.\n");
    return;
    }

    printf("Total de leituras validas: %d\n", total);
    printf("Temperatura media: %.2f C\n", soma / total);
    printf("Maior temperatura registrada: %.2f C\n", maior);
    printf("Menor temperatura registrada: %.2f C\n", menor);
    printf("Leituras acima do limite: %d\n", acimaLimite);
    printf("Percentual acima do limite: %.2f%%\n", (acimaLimite * 100.0) / total);

    if (encerramentoAutomatico) {
    printf("Motivo do encerramento: 3 temperaturas consecutivas acima do limite.\n");
    } else {
    printf("Motivo do encerramento: encerrado manualmente pelo usuario.\n");
    }
}

int main(void) {


    float limite, temperatura, soma, maior, menor;
    int total, acimaLimite, consecutivas, monitorando, entradaValida, encerramentoAutomatico;

    printf("=========================================\n");
    printf(" SISTEMA DE MONITORAMENTO DE TEMPERATURA\n");
    printf("=========================================\n");
    printf("Este programa monitora a temperatura de uma maquina industrial.\n");
    printf("Informe o limite de temperatura desejado (entre 0 e 200 graus C).\n");
    printf("Em seguida, informe as leituras do sensor uma a uma.\n");
    printf("Digite -999 a qualquer momento para encerrar manualmente.\n");
    printf("O monitoramento sera encerrado automaticamente apos\n");
    printf("3 leituras consecutivas acima do limite.\n");
    printf("-----------------------------------------\n\n");


    do {
        printf("Informe o limite de temperatura (entre 0 e 200 graus C): ");
        if (scanf("%f", &limite) != 1) {
            printf("Entrada invalida. Digite apenas valores numericos.\n");
            limparBuffer();
            entradaValida = 0;
        } else if (limite == -999) {
            limparBuffer();
            printf("Encerramento solicitado pelo usuario antes do inicio do monitoramento.\n");
            return 0;
        } else if (limite < 0 || limite > 200) {
            limparBuffer();
            printf("Limite fora da faixa permitida (0 a 200 graus C). Tente novamente.\n");
            entradaValida = 0;
        } else {
            limparBuffer();
            entradaValida = 1;
        }
    } while (entradaValida == 0);

    printf("Limite de temperatura definido: %.2f graus C.\n", limite);

    soma = 0;
    total = 0;
    acimaLimite = 0;
    consecutivas = 0;
    monitorando = 1;
    encerramentoAutomatico = 0;

    do {
        printf("Informe a temperatura lida pelo sensor (ou -999 para encerrar): ");
        if (scanf("%f", &temperatura) != 1) {
            limparBuffer();
            printf("Leitura invalida. Digite apenas valores numericos.\n");
            continue;
        }
        limparBuffer();

        if (temperatura == -999) {
            printf("Encerramento solicitado pelo usuario.\n");
            monitorando = 0;
            continue;
        } else if (temperatura < -50 || temperatura > 300) {
            printf("Leitura fora da faixa esperada para o sensor. Valor descartado.\n");
            continue;
        }
        soma += temperatura; total++;
        if (total == 1) {
            maior = menor = temperatura;
        }
        if (temperatura > maior) {
            maior = temperatura;
        } 
        if (temperatura < menor) {
            menor = temperatura;
        }
        if (temperatura > limite) {
            acimaLimite++;
            consecutivas++;
            printf("Alerta: temperatura de %.2f graus C esta acima do limite (%d leitura(s) consecutiva(s) acima).\n", temperatura, consecutivas);
        } else {
            consecutivas = 0;
            printf("Temperatura de %.2f graus C dentro do limite normal.\n", temperatura);
        }
        if (consecutivas == 3) {
            printf("ALERTA CRITICO: 3 temperaturas consecutivas acima do limite. Encerrando o monitoramento automaticamente.\n");
            monitorando = 0;
            encerramentoAutomatico = 1;
        }
    } while (monitorando == 1);

    exibirRelatorio(total, soma, maior, menor, acimaLimite, encerramentoAutomatico);

    return 0;
}