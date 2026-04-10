#include <stdio.h>


int main() {
    char texto[1000];
    int chave, opcao, posicao;

    printf("--- SISTEMA DE CRIPTOGRAFIA ---\n");
    printf("1. Criptografar\n");
    printf("2. Descriptografar\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    printf("Digite uma palavra (sem espacos): ");
    scanf("%s", texto);

    printf("Digite o valor da chave (numero): ");
    scanf("%d", &chave);

    //se a opcao for descriptografar, a gente "anda para trás" na chave
    if (opcao == 2) {
        chave = -chave;
    }

    for (posicao = 0; texto[posicao] != '\0'; posicao++) {
        char letra = texto[posicao];

        // Verifica se é uma letra minúscula (a até z)
        if (letra >= 'a' && letra <= 'z') {
            letra = letra + chave;

            // Se passar do 'z', volta para o começo do alfabeto
            if (letra > 'z') letra = letra - 26;
            // Se for menor que 'a', vai para o final do alfabeto
            if (letra < 'a') letra = letra + 26;
        }

        // Verifica se é uma letra maiúscula (A até Z)
        else if (letra >= 'A' && letra <= 'Z') {
            letra = letra + chave;

            if (letra > 'Z') letra = letra - 26;
            if (letra < 'A') letra = letra + 26;
        }

        texto[i] = letra; //devolve a letra modificada para o texto
    }

    printf("\nResultado: %s\n", texto);

    return 0;
}
