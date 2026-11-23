/*                       ----- main.c -----
 * Sistema de gerenciamento de senhas - Clínica de Especialidades Médicas
 * Prova final - Algoritmo e Pensamento Computacional
 * Autor: Piêtro Bitencourt Nunes
 *
 * Regra da professora: o main() só coordena. Nenhuma lógica pesada aqui.
 */

// Compilar: gcc -Wall -Wextra -Iinclude src/*.c -o output/clinica_senhas
 

#include <stdio.h>
#include "tipos.h"
#include "entrada.h"
#include "fila.h"
#include "senha.h"
#include "atendimento.h"
#include "painel.h"

int main(void) {
    Sistema sis;
    int opcao;

    inicializarSistema(&sis);
    do {
        exibirPainel(&sis);
        exibirMenu();
        opcao = lerInteiro("Escolha uma opcao: ", 0, 2);

        switch (opcao) {
            case 1:
                retirarSenha(&sis);
                break;
            case 2:
                registrarAtendimento(&sis);
                break;
            case 0:
                printf("Encerrando o programa... Aguarde...\n");
                printf("Programa encerrado!\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente...\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
