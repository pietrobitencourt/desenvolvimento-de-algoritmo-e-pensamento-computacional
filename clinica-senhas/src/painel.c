/* painel.c */

#include <stdio.h>
#include "painel.h"
#include "fila.h"


void exibirMenu(void) {
    printf("================");
    printf("    | Menu |    ");
    printf("================");
    printf("[1] Retirar senha\n[2] Registrar atendimento\n[0] Sair\n");
    printf("================");
}


/* Mostra os códigos de uma fila, em ordem de chegada (fila circular). */
static void listarFila(
    const char *titulo,
    const Fila *fila
) {
    printf("   %-13s (%d): ", titulo, quantidadeNaFila(fila));

    if (quantidadeNaFila(fila) == 0) {
        printf("-");
    }
    for (int k = 0; k < quantidadeNaFila(fila); k++) {
        int i = (fila->inicio + k) % MAX_FILA;
        printf("%s ", fila->itens[i].codigo);
    }
    printf("\n");
}

/* Devolve a fila da categoria só para leitura (ou NULL se não existir). */
static const Fila *filaDaCategoria(
    const Sistema *sis,
    char categoria
) {
    switch (categoria) {
        case CAT_URGENTE:
            return &sis->filaU;
        case CAT_PREFERENCIAL:
            return &sis->filaP;
        case CAT_NORMAL:
            return &sis->filaN;
        default:
            return NULL;
    }
}

void exibirPainel(
    const Sistema *sis
) {
    printf("\n==============================================\n");
    printf("      CLINICA DE ESPECIALIDADES MEDICAS\n");
    printf("              PAINEL DE CHAMADA\n");
    printf("==============================================\n");

    if (sis->emAtendimento) {
        printf(" EM ATENDIMENTO: %s (%s)\n",
               sis->atual.codigo, nomeCategoria(sis->atual.categoria));
    } else {
        printf(" EM ATENDIMENTO: nenhuma\n");
    }

    char cat = consultarProxima(sis);
    const Fila *fProx = filaDaCategoria(sis, cat);
    if (fProx != NULL) {
        printf(" PROXIMA SENHA:  %s (%s)\n",
               fProx->itens[fProx->inicio].codigo, nomeCategoria(cat));
    } else {
        printf(" PROXIMA SENHA:  nenhuma\n");
    }

    printf("----------------------------------------------\n");
    printf(" AGUARDANDO (ordem de chamada):\n");
    listarFila("Urgente",      &sis->filaU);
    listarFila("Preferencial", &sis->filaP);
    listarFila("Normal",       &sis->filaN);
    printf("==============================================\n");
}
