/* paciente.c */

#include <stdio.h>
#include <string.h>
#include "paciente.h"
#include "entrada.h"


Paciente cadastrarPaciente(void) {
    Paciente p;
    memset(&p, 0, sizeof(p));

    lerTexto("Nome: ", p.nome, TAM_NOME);
    p.idade = lerInteiro("Idade: ", 0, 120);
    
    printf("Genero: \n[1] Feminino\n[2] Masculino\n");
    int opcaoGenero = lerInteiro("Genero: ", 1, 2);
    if (opcaoGenero == 1) {
        p.genero = 'F';
    } else {
        p.genero = 'M';
    }

    if (p.genero == 'F') {
        p.gestante = lerSimNao("Esta gestante? (s/n): ");
        p.lactante = lerSimNao("Esta lactante? (s/n): ");
    }

    p.obesidade = lerSimNao("Possui condicao de obesidade? (s/n): ");
    p.necessidadeEspecial = lerSimNao("Possui alguma necessidade especial? (s/n): ");

    return p;
}


char classificarPaciente(
    Paciente p
) {
    if (p.idade > IDADE_URGENTE) {
        return CAT_URGENTE;
    }
    if (p.gestante || p.lactante || p.obesidade || p.necessidadeEspecial) {
        return CAT_PREFERENCIAL;
    }
    return CAT_NORMAL;
}


const char *nomeCategoria(
    char categoria
) {
    switch (categoria) {
        case CAT_URGENTE:
            return "Urgente";
        case CAT_PREFERENCIAL:
            return "Preferencial";
        case CAT_NORMAL:
            return "Normal";
        default:
            return "Desconhecida";
    }
}