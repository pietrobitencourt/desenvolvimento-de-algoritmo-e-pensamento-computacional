/*
 * senha.h
 * Módulo de GERAÇÃO e GERENCIAMENTO de senhas.
 */
#ifndef SENHA_H
#define SENHA_H

#include "tipos.h"

// Define categoria, número e código do paciente (incrementa o contador).
void gerarSenha(Sistema *sis, Paciente *p);

// Opção 01 do menu: cadastra, classifica, gera a senha e põe na fila.
void retirarSenha(Sistema *sis);

#endif /* SENHA_H */
