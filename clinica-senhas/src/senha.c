/*
 * senha.c
 * Etapas 7 e 9 do roteiro.
 */
#include <stdio.h>
#include "senha.h"
#include "paciente.h"    // cadastrarPaciente, classificarPaciente
#include "fila.h"        // obterFila, enfileirar, quantidadeNaFila

/*
 * gerarSenha
 * PASSOS:
 *   - a categoria já vem decidida em p->categoria (veja retirarSenha)
 *   - escolha o contador da categoria (ultimoU, ultimoP ou ultimoN)
 *   - incremente-o e guarde em p->numero   (com ponteiro usa-se "->")
 *   - monte o código:
 *       snprintf(p->codigo, TAM_CODIGO, "%c%03d", p->categoria, p->numero);
 *     (%03d = 3 dígitos, completando com zeros: 7 vira 007)
 * TESTE: gere N, N, P, U, N e confira N001, N002, P001, U001, N003.
 */
void gerarSenha(Sistema *sis, Paciente *p) {
    // TODO
    (void)sis; (void)p;
}

/*
 * retirarSenha  (decisão "tudo ou nada")
 * ORDEM:
 *   1) Paciente p = cadastrarPaciente();
 *   2) p.categoria = classificarPaciente(p);
 *   3) Fila *f = obterFila(sis, p.categoria);
 *      a fila tem espaço? se NÃO: avise e saia SEM mexer em contador
 *   4) gerarSenha(sis, &p);
 *   5) enfileirar(f, p);
 *   6) mostre o código recebido (ex.: "Sua senha: P003")
 */
void retirarSenha(Sistema *sis) {
    // TODO
    (void)sis;
}
