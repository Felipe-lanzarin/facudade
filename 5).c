5)
#include <stdio.h>

int main() {
    int num, i, opcao = 1;

    while (opcao == 1) {
        printf("Digite um numero para tabuada: ");
        scanf("%d", &num);

        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", num, i, num*i);
        }

        printf("\nDeseja ver outra tabuada? (1-Sim / 0-Nao): ");
        scanf("%d", &opcao);
    }
    printf("Fim!\n");
    return 0;
}