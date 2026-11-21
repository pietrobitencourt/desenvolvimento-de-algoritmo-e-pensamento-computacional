/* entrada.h */
/* Módulo de leitura e validação de dados digitados pelo usuário. */


#ifndef ENTRADA_H
#define ENTRADA_H

#include "tipos.h"

// Lê um inteiro entre minimo e maximo (repete até ser válido).
int  lerInteiro(
    const char *mensagem,
    int minimo,
    int maximo
);

// Faz uma pergunta e devolve 1 (sim) ou 0 (não).
int  lerSimNao(
    const char *mensagem
);

// Lê um texto não vazio e guarda em "destino" (sem o '\n' no final).
void lerTexto(
    const char *mensagem,
    char destino[],
    int tamanho
);

#endif
