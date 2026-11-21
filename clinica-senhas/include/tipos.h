/*
 * tipos.h
 * Constantes e estruturas (structs) usadas por TODOS os módulos.
 * Aqui não existe nenhuma função: só definições de tipos e constantes.
 *
 * O "include guard" (#ifndef / #define / #endif) evita que este arquivo
 * seja lido duas vezes na mesma compilação, o que daria erro de
 * "redefinition of struct".
 */
#ifndef TIPOS_H
#define TIPOS_H

/* ---------- Constantes ---------- */
#define MAX_FILA          50    // quantos pacientes cabem em cada fila
#define TAM_NOME          100   // tamanho máximo do nome
#define TAM_CODIGO        10    // espaço para códigos como "P003" (+ '\0')
#define TAM_LINHA         100   // buffer das leituras com fgets
#define IDADE_URGENTE     80    // urgente = idade MAIOR que este valor

#define CAT_URGENTE       'U'
#define CAT_PREFERENCIAL  'P'
#define CAT_NORMAL        'N'

/* ---------- Ficha de um paciente ---------- */
typedef struct {
    char nome[TAM_NOME];
    int  idade;
    char genero;               // 'F' ou 'M'
    int  gestante;             // 0 = não, 1 = sim
    int  lactante;
    int  obesidade;
    int  necessidadeEspecial;
    char categoria;            // CAT_URGENTE, CAT_PREFERENCIAL ou CAT_NORMAL
    int  numero;               // número da senha dentro da categoria
    char codigo[TAM_CODIGO];   // ex.: "P003"
} Paciente;

/* ---------- Uma fila (FIFO) feita com array + índices ---------- */
typedef struct {
    Paciente itens[MAX_FILA];
    int inicio;                // posição de quem será chamado
    int fim;                   // posição onde o próximo entra
} Fila;

/* ---------- Estado completo do sistema ---------- */
typedef struct {
    Fila filaU, filaP, filaN;          // uma fila por categoria
    int  ultimoU, ultimoP, ultimoN;    // último número emitido em cada categoria
    Paciente atual;                    // paciente em atendimento
    int  emAtendimento;                // 0 = ninguém, 1 = há alguém
} Sistema;

#endif /* TIPOS_H */
