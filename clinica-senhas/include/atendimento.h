/*
 * atendimento.h
 * Módulo de REGISTRO DE ATENDIMENTOS (opção 02 do menu).
 */
#ifndef ATENDIMENTO_H
#define ATENDIMENTO_H

#include "tipos.h"

// Diz QUEM seria chamado ('U', 'P', 'N') ou '-' se todas vazias. Não retira ninguém.
char consultarProxima(const Sistema *sis);

// Retira o próximo da fila e o coloca em atendimento.
void chamarProxima(Sistema *sis);

// Libera o atendimento atual.
void finalizarAtendimento(Sistema *sis);

// Submenu da opção 02 (chamar / finalizar / voltar).
void registrarAtendimento(Sistema *sis);

#endif /* ATENDIMENTO_H */
