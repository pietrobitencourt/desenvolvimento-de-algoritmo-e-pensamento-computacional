/*
 * fila.c
 * Etapa 8 do roteiro.
 *
 * Fila FIFO com array + dois índices:
 *   entrar -> guarda em itens[fim] e fim++
 *   sair   -> pega itens[inicio] e inicio++
 *   quantos esperam = fim - inicio
 *   vazia  = inicio == fim
 *   cheia  = fim == MAX_FILA
 * Simule no papel com MAX_FILA = 5 antes de codificar.
 */
#include <string.h>
#include "fila.h"

/*
 * inicializarSistema
 * Uma linha com memset:  memset(sis, 0, sizeof(*sis));
 * (zera a struct inteira, inclusive as três filas, de uma vez)
 */
void inicializarSistema(Sistema *sis) {
    // TODO
    (void)sis;
}

/* enfileirar: devolve 1 se entrou, 0 se estava cheia. */
int enfileirar(Fila *fila, Paciente p) {
    // TODO
    (void)fila; (void)p;
    return 0;
}

/* desenfileirar: devolve 1 se tirou alguém (em *saida), 0 se vazia. */
int desenfileirar(Fila *fila, Paciente *saida) {
    // TODO
    (void)fila; (void)saida;
    return 0;
}

/* quantidadeNaFila: fim - inicio. */
int quantidadeNaFila(const Fila *fila) {
    // TODO
    (void)fila;
    return 0;
}

/*
 * obterFila (opcional, deixa o resto do código mais limpo)
 * Dado 'U', 'P' ou 'N', devolve o ENDEREÇO da fila certa:
 *   return &sis->filaU;  (etc.)  e NULL se a categoria for inválida.
 */
Fila *obterFila(Sistema *sis, char categoria) {
    // TODO
    (void)sis; (void)categoria;
    return NULL;
}
