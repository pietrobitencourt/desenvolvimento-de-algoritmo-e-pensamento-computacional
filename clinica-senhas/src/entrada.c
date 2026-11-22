/* entrada.c
 * Corpo das funções de leitura e validação.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "entrada.h"


int lerInteiro(
    const char *mensagem,
    int minimo,
    int maximo
) {
    char linha[TAM_LINHA];
    int valor = 0;
    int valido = 0;

    do {
        printf("%s", mensagem);
        
        if (fgets(linha, sizeof(linha), stdin) == NULL) {
            return minimo;
        }

        int leu = sscanf(linha, "%d", &valor);
        if (leu == 1 && valor >= minimo && valor <= maximo) {
            valido = 1;
        } else {
            printf("Valor invalido. Digite um numero entre %d e %d.\n", minimo, maximo);
        }
        
    } while (! valido);

    return valor;
}


int lerSimNao(
    const char *mensagem
) {
    char linha[TAM_LINHA];
    while (1) {
        printf("%s", mensagem);

        if (fgets(linha, sizeof(linha), stdin) == NULL) {
            return 0;
        }

        char c = tolower((unsigned char)linha[0]);
        if (c == 's') {
            return 1;
        } else if (c == 'n') {
            return 0;
        } else {
            printf("Responda com s (sim) ou n (nao).\n");
        }
    }
}


void lerTexto(
    const char *mensagem,
    char destino[],
    int tamanho
) {
    while (1) {
        printf("%s", mensagem);

        if (fgets(destino, tamanho, stdin) == NULL) {
            destino[0] = '\0';
            return;
        }
        destino[strcspn(destino, "\n")] = '\0';

        if (strlen(destino) > 0){
            return;
        } else {
            printf("O texto nao pode ser vazio.\n");
        }
    }
}
