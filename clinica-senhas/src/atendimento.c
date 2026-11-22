#include <stdio.h>
#include "atendimento.h"
#include "fila.h"
#include "entrada.h"


/* consultarProxima
 * REGRA: U primeiro; se U vazia, P; se P vazia, N; se todas vazias, '-'.
 * Só consulta: NÃO retira nada da fila. */
char consultarProxima(const Sistema *sis) {
    // TODO
    (void)sis;
    return '-';
}


/*
 * chamarProxima
 * PASSOS:
 *   - se já há alguém em atendimento: avise e saia (operação inválida)
 *   - categoria = consultarProxima(sis)
 *   - se '-': avise "nenhum paciente aguardando" e saia
 *   - desenfileirar da fila da categoria, guardando em sis->atual
 *   - emAtendimento = 1
 *   - mostre "Chamando: <codigo> - <nome>"
 */
void chamarProxima(Sistema *sis) {
    // TODO
    (void)sis;
}

/*
 * finalizarAtendimento
 *   - se ninguém em atendimento: avise e saia (operação inválida)
 *   - emAtendimento = 0
 *   - mostre "Atendimento de <codigo> finalizado"
 * O paciente atendido não volta à fila: ele já saiu dela em desenfileirar.
 */
void finalizarAtendimento(Sistema *sis) {
    // TODO
    (void)sis;
}

/*
 * registrarAtendimento (submenu da opção 02)
 *   1 - Chamar próxima senha
 *   2 - Finalizar atendimento atual
 *   0 - Voltar
 * Laço + switch, parecido com o menu principal. Descreva no README a
 * forma que você escolher.
 */
void registrarAtendimento(Sistema *sis) {
    // TODO
    (void)sis;
}
