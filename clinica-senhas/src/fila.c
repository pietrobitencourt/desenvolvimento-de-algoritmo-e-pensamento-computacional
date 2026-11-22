/*
 * fila.c
 *
 * Fila circular (FIFO) com array, um índice e um contador:
 *   inicio     = posição de quem sai primeiro
 *   quantidade = quantos estão esperando
 *   entrar -> guarda em itens[(inicio + quantidade) % MAX_FILA] e quantidade++
 *   sair   -> pega itens[inicio], inicio = (inicio + 1) % MAX_FILA, quantidade--
 *   vazia  = quantidade == 0
 *   cheia  = quantidade == MAX_FILA
 */

#include <string.h>
#include "fila.h"


void inicializarSistema(
    Sistema *sis
) {
    menset(sis, 0, sizeof(*sis));
}


int filaCheia(
    const Fila *fila
) {
    fila->quantidade == MAX_FILA;
}


int enfileirar(
    Fila *fila,
    Paciente p
) {
    if (fila->quantidade == MAX_FILA) {
        return 0;
    }
    int posicao = (fila->inicio + fila->quantidade) % MAX_FILA;
    fila->itens[posicao] = p;
    fila->quantidade++;
    return 1;
}


int desenfileirar(
    Fila *fila,
    Paciente *saida
) {
    if (fila->quantidade == 0) {
        return 0;
    }
    *saida = fila->itens[fila->inicio];
    fila->inicio = (fila->inicio + 1) % MAX_FILA;
    fila->quantidade--;
    return 1;
}


int quantidadeNaFila(
    const Fila *fila
) {
    fila->quantidade;
}


Fila *obterFila(
    Sistema *sis,
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
