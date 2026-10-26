/*
 * Cadastro de Equipamentos - Laboratório de Informática
 * Disciplina: Desenvolvimento de Algoritmos e Programação em C
 * Autor: Piêtro Bitencourt Nunes
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ARQUIVO "equipamentos.txt"
#define TAM_TEXTO 100


void exibirMenu();
void cadastrarEquipamento();
void listarEquipamentos();


int main() {
    
    char entrada[10];
    int opcao;

    do {

        exibirMenu();

        fgets(entrada, sizeof(entrada), stdin);
        opcao = atoi(entrada);

        switch (opcao) {
        case 1:
            cadastrarEquipamento();
            break;
        case 2: 
            listarEquipamentos();
            break;
        case 3: 
            printf("Saindo do programa...\n");
            break;
        default: 
            printf("Opcao invalida! Tente novamente...\n");
        }

    } while (opcao != 3);

    return 0;
}


void exibirMenu() {
    printf("=== Menu ===\n");
    printf("1 - Cadastrar equipamento\n");
    printf("2 - Listar equipamentos\n");
    printf("3 - Sair\n");
    printf("Escolha uma opcao: ");
}

void cadastrarEquipamento() {
    FILE *arquivo;
    char nome[TAM_TEXTO];
    char codigo[TAM_TEXTO];
    char localizacao[TAM_TEXTO];

    printf("Nome do equipamento: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Codigo de identificacao: ");
    fgets(codigo, sizeof(codigo), stdin);
    codigo[strcspn(codigo, "\n")] = '\0';

    printf("Localizacao: ");
    fgets(localizacao, sizeof(localizacao), stdin);
    localizacao[strcspn(localizacao, "\n")] = '\0';

    arquivo = fopen(ARQUIVO, "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fprintf(arquivo, "%s | %s | %s\n", nome, codigo, localizacao);

    fclose(arquivo);

    printf("Equipamento cadastrado com sucesso!\n");
}

void listarEquipamentos() {
    FILE *arquivo;
    char linha[TAM_TEXTO * 3];

    arquivo = fopen(ARQUIVO, "r");

    if (arquivo == NULL) {
        printf("Nao ha equipamentos cadastrados.\n");
        return;
    }

    printf("\n=== EQUIPAMENTOS CADASTRADOS ===\n");

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }

    fclose(arquivo);
}
