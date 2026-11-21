/*
 * paciente.c
 * Etapas 5 e 6 do roteiro.
 */
#include <string.h>
#include "paciente.h"
#include "entrada.h"     // usa lerTexto, lerInteiro, lerSimNao

/*
 * cadastrarPaciente
 * ORDEM DAS PERGUNTAS:
 *   nome -> idade -> gênero ->
 *   SE mulher: gestante? lactante? ->
 *   obesidade? -> necessidade especial?
 * Dica: o memset zera tudo; o que não for perguntado (ex.: gestante de um
 * homem) fica 0 = "não". No fim: return p;
 * NÃO defina categoria nem senha aqui (isso é de outros módulos).
 */
Paciente cadastrarPaciente(void) {
    Paciente p;
    memset(&p, 0, sizeof(p));
    // TODO
    return p;
}

/*
 * classificarPaciente
 * A ORDEM dos if / else if é a prioridade:
 *   1) idade > IDADE_URGENTE                                -> CAT_URGENTE
 *   2) gestante, lactante, obesidade ou necessidadeEspecial -> CAT_PREFERENCIAL
 *   3) senão                                                -> CAT_NORMAL
 * Para "ou" em C use ||
 */
char classificarPaciente(Paciente p) {
    // TODO
    (void)p;
    return CAT_NORMAL;
}
