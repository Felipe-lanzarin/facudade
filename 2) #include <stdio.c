2) #include <stdio.h>

int main() {
    int N, i;
    float num, maior, menor, soma = 0;

    printf("Quantos numeros? ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%f", &num);

        if (i == 0) {
            maior = menor = num;
        } else {
            if (num > maior) maior = num;
            if (num < menor) menor = num;
        }
        soma += num;
    }

    printf("Maior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);
    printf("Media: %.2f\n", soma / N);
    return 0;
}