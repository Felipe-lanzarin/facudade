8)
#include <stdio.h>

int main() {
    int opcao;
    float n1, n2;

    while (1) {
        printf("\n--- CALCULADORA ---\n");
        printf("1-Soma\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n5-Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 5) break;

        printf("Digite dois numeros: ");
        scanf("%f %f", &n1, &n2);

        if (opcao == 1) printf("Resultado: %.2f\n", n1+n2);
        else if (opcao == 2) printf("Resultado: %.2f\n", n1-n2);
        else if (opcao == 3) printf("Resultado: %.2f\n", n1*n2);
        else if (opcao == 4) {
            if (n2 == 0) printf("ERRO: Divisao por zero!\n");
            else printf("Resultado: %.2f\n", n1/n2);
        } else {
            printf("Opcao invalida!\n");
        }
    }
    return 0;
}