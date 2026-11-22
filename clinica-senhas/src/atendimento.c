#include <stdio.h>
#include "atendimento.h"
#include "fila.h"
#include "entrada.h"


char consultarProxima(
    const Sistema *sis
) {
    if (quantidadeNaFila(&sis->filaU) > 0) {
        return CAT_URGENTE;
    } else if (quantidadeNaFila(&sis->filaP) > 0) {
        return CAT_PREFERENCIAL;
    } else if (quantidadeNaFila(&sis->filaN) > 0) {
        return CAT_NORMAL;
    } else {
        return '-';
    }
}


void chamarProxima(
    Sistema *sis
) {
    if (sis->emAtendimento != 0) {
        printf("Finalize o atendimento atual antes de chamar o proximo.\n");
        return;
    }

    char cat = consultarProxima(sis);
    if (cat == '-') {
        printf("Nenhum paciente aguardando.\n");
        return;
    }

    Fila *f = obterFila(sis, cat);
    if (f == NULL || !desenfileirar(f, &sis->atual)) {
        printf("Erro: nao foi possivel retirar o paciente da fila.\n");
        return;
    }

    sis->emAtendimento = 1;
    printf("Chamando: %s - %s\n", sis->atual.codigo, sis->atual.nome);
}


void finalizarAtendimento(
    Sistema *sis
) {
    if (!sis->emAtendimento) {
        printf("Nenhum atendimento em andamento.\n");
        return;
    }

    printf("Atendimento de %s finalizado.\n", sis->atual.codigo);
    sis->emAtendimento = 0;
}


void registrarAtendimento(
    Sistema *sis
) {
    char prox = consultarProxima(sis);
    if (prox == '-') {
        printf("Nenhuma senha aguardando.\n");
    } else {
        printf("Proxima a ser chamada: categoria %c\n", prox);
    }

    printf("[1] Chamar proxima senha\n");
    printf("[2] Finalizar atendimento atual\n");
    printf("[0] Voltar\n");

    int opcao = lerInteiro("Escolha uma opcao: ", 0, 2);

    switch (opcao) {
        case 1:
            chamarProxima(sis);
            break;
        case 2:
            finalizarAtendimento(sis);
            break;
        case 0:
            break;
        default:
            printf("Opcao invalida! Tente novamente..\n");
            break;
    }
}
