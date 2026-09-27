#include <stdio.h>

int main() {

    // ===== Declaração das variáveis =====
    int numeros[20];          // vetor que vai armazenar os 20 números lidos
    int i;                    // variável de controle dos laços (for)

    int somaMultiplos3 = 0;   // acumulador da soma dos múltiplos de 3

    int somaPares = 0;        // acumulador da soma dos números pares
    int qtdPares = 0;         // contador de quantos números pares existem
    float mediaPares;         // média dos números pares (calculada depois)

    int qtdPositivos = 0;     // contador de números positivos
    int qtdNegativos = 0;     // contador de números negativos

    int maior;                // vai guardar o maior valor do vetor
    int menor;                // vai guardar o menor valor do vetor

    int valido;               // guarda o retorno do scanf (1 = sucesso, 0 = falha)

    // ===== Leitura dos 20 números =====
    printf("=== Leitura dos numeros ===\n");
    for (i = 0; i < 20; i++) {
        do{
            printf("Digite o numero %d: ", i + 1);
            valido = scanf("%d", &numeros[i]);

            if (valido != 1) {
                printf("Entrada invalida! Digite apenas numeros inteiros.\n");
                while (getchar() != '\n');   // limpa o que sobrou no buffer (ex: "abcd\n")
            }
        } while (valido != 1);
    }

    // Inicializa maior e menor com o primeiro elemento do vetor
    maior = numeros[0];
    menor = numeros[0];


    // ===== Processamento: percorre o vetor e faz as verificações =====
    for (i = 0; i < 20; i++) {

        // Múltiplo de 3: soma no acumulador
        if (numeros[i] % 3 == 0) {
            somaMultiplos3 = somaMultiplos3 + numeros[i];
        }

        // Par: soma no acumulador e incrementa o contador (para a média depois)
        if (numeros[i] % 2 == 0) {
            somaPares = somaPares + numeros[i];
            qtdPares = qtdPares + 1;
        }

        // Positivo, negativo ou zero (zero não entra em nenhum dos dois)
        if (numeros[i] > 0) {
            qtdPositivos = qtdPositivos + 1;
        } else if (numeros[i] < 0) {
            qtdNegativos = qtdNegativos + 1;
        }

        // Atualiza o maior valor encontrado até agora
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
        // Atualiza o menor valor encontrado até agora
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }


    // ===== Exibição dos resultados =====
    printf("\n=== Resultados ===\n");

    printf("Soma dos multiplos de 3: %d\n", somaMultiplos3);

    // Calcula a média dos pares, evitando divisão por zero
    if (qtdPares > 0) {
        mediaPares = (float) somaPares / qtdPares;
        printf("Media dos numeros pares: %.2f\n", mediaPares);
    } else {
        printf("Nao ha numeros pares no vetor.\n");
    }

    printf("Quantidade de positivos: %d\n", qtdPositivos);
    printf("Quantidade de negativos: %d\n", qtdNegativos);

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);


    // ===== Exibição de todos os elementos do vetor =====
    printf("\n=== Elementos do vetor ===\n");
    for (i = 0; i < 20; i++) {
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }

    return 0;
}