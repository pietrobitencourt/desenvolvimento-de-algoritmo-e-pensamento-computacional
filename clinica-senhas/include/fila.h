/* fila.h */
/* Módulo das FILAS (FIFO) e do estado inicial do sistema. */


#ifndef FILA_H
#define FILA_H

#include "tipos.h"

// Zera o sistema todo (filas vazias, contadores em 0, ninguém em atendimento).
void inicializarSistema(
    Sistema *sis
);

// Coloca no fim da fila. Devolve 1 se entrou, 0 se a fila estava cheia.
int  enfileirar(
    Fila *fila,
    Paciente p
);

// Tira o primeiro da fila e entrega em *saida. Devolve 1 se tirou, 0 se vazia.
int  desenfileirar(
    Fila *fila,
    Paciente *saida
);

// Quantos pacientes estão esperando.
int  quantidadeNaFila(
    const Fila *fila
);

// Devolve o endereço da fila da categoria (ou NULL se a categoria for inválida).
Fila *obterFila(
    Sistema *sis,
    char categoria
);

#endif
