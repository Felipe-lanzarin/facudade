3) #include <stdio.h>

int main() {
    int i, aprovados = 0, exame = 0, reprovados = 0;
    float nota;

    for (i = 1; i <= 10; i++) {
        printf("Nota do aluno %d: ", i);
        scanf("%f", &nota);

        if (nota >= 6) aprovados++;
        else if (nota >= 4) exame++;
        else reprovados++;
    }

    printf("\nAprovados: %d\n", aprovados);
    printf("Exame: %d\n", exame);
    printf("Reprovados: %d\n", reprovados);
    return 0;
}