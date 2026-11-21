/*
 * painel.h
 * Módulo de APRESENTAÇÃO (menu e painel de chamada).
 */
#ifndef PAINEL_H
#define PAINEL_H

#include "tipos.h"

// Imprime as opções do menu principal.
void exibirMenu(void);

// Mostra o estado atual. Não altera nada (por isso o const).
void exibirPainel(const Sistema *sis);

#endif /* PAINEL_H */
