10)
#include <stdio.h>

int main() {
    int num, tentativas = 0;

    while (1) {
        printf("Digite um numero entre 1 e 100: ");
        scanf("%d", &num);
        tentativas++;

        if (num >= 1 && num <= 100) break;
        else printf("ERRO: Valor fora da faixa! Tente novamente.\n");
    }

    printf("Valor valido: %d\n", num);
    printf("Tentativas: %d\n", tentativas);
    return 0;
}