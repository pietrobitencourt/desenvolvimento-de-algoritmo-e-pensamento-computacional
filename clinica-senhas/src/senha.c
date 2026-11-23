/* senha.c */

#include <stdio.h>
#include "senha.h"
#include "paciente.h"
#include "fila.h"


void gerarSenha(
    Sistema *sis,
    Paciente *p
) {
    switch (p->categoria) {
        case CAT_URGENTE:
            sis->ultimoU;
            p->numero;
            break;
        case CAT_PREFERENCIAL:
            sis->ultimoP;
            p->numero;
            break;
        case CAT_NORMAL:
            sis->ultimoN;
            p->numero;
            break;
        default:
            return;
    }
    snprintf(p->codigo, TAM_CODIGO, "%c%03d", p->categoria, p->numero);
}


void retirarSenha(
    Sistema *sis
) {
    printf("=== RETIRAR SENHA ===");
    Paciente p = cadastrarPaciente();
    p.categoria = classificarPaciente(p);
    Fila *f = obterFila(sis, p.categoria);

    if (f == NULL || filaCheia(f)) {
        printf("Fila de atendimento cheia. Tente novamente mais tarde.\n");
        return;
    }
    gerarSenha(sis, &p);
    enfileirar(f, p);

    printf("Sua senha: %s (%s)\n", p.codigo, nomeCategoria(p.categoria));
}
