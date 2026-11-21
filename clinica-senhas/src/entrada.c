/*
 * entrada.c
 * Corpo das funções de leitura e validação.
 * Faça AS TRÊS primeiro (etapa 4 do roteiro) e teste pelo menu.
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "entrada.h"

/*
 * lerInteiro
 * LÓGICA (em português):
 *   declare: char linha[TAM_LINHA]; int valor; int valido;
 *   repita:
 *       valido = 0
 *       mostre a mensagem (printf("%s", mensagem))
 *       leia uma linha com fgets(linha, sizeof(linha), stdin)
 *       tente converter com sscanf(linha, "%d", &valor)
 *           -> devolve 1 se achou um número, 0 se não (ex.: "abc")
 *       se leu número E valor está entre minimo e maximo -> valido = 1
 *       senão -> avise o erro (diga a faixa aceita)
 *   enquanto não for válido
 *   devolva valor
 * Se fgets devolver NULL (fim da entrada), pense no que fazer para o
 * programa não travar (uma opção: devolver "minimo").
 */
int lerInteiro(const char *mensagem, int minimo, int maximo) {
    // TODO
    (void)mensagem; (void)maximo;
    return minimo;
}

/*
 * lerSimNao
 * LÓGICA:
 *   repita até a resposta ser válida:
 *       mostre a mensagem e leia uma linha com fgets
 *       pegue o primeiro caractere: linha[0]
 *       converta para minúscula com tolower()
 *       's' -> devolva 1;  'n' -> devolva 0;  outro -> avise e repita
 * Caractere usa aspas simples ('s'); texto usa aspas duplas ("s").
 */
int lerSimNao(const char *mensagem) {
    // TODO
    (void)mensagem;
    return 0;
}

/*
 * lerTexto
 * LÓGICA:
 *   repita até o texto não ser vazio:
 *       mostre a mensagem
 *       fgets(destino, tamanho, stdin)
 *       remova o '\n':  destino[strcspn(destino, "\n")] = '\0';
 *       se strlen(destino) == 0 -> avise e repita
 * "char destino[]" recebe o ENDEREÇO do array de quem chamou, então o que
 * você escrever aqui aparece lá fora (sem return).
 */
void lerTexto(const char *mensagem, char destino[], int tamanho) {
    // TODO
    (void)mensagem; (void)destino; (void)tamanho;
}
