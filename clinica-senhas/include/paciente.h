/*
 * paciente.h
 * Módulo de CADASTRO e CLASSIFICAÇÃO de pacientes.
 */
#ifndef PACIENTE_H
#define PACIENTE_H

#include "tipos.h"

// Pergunta os dados e devolve o paciente preenchido (sem categoria/senha).
Paciente cadastrarPaciente(void);

// Devolve CAT_URGENTE, CAT_PREFERENCIAL ou CAT_NORMAL.
char classificarPaciente(Paciente p);

#endif /* PACIENTE_H */
