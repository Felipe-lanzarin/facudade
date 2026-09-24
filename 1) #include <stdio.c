1) #include <stdio.h>

int main() {
    float n1, n2, n3, p1, p2, p3, media;

    printf("Digite nota 1 e peso 1: ");
    scanf("%f %f", &n1, &p1);
    printf("Digite nota 2 e peso 2: ");
    scanf("%f %f", &n2, &p2);
    printf("Digite nota 3 e peso 3: ");
    scanf("%f %f", &n3, &p3);

    if (p1 == 0 || p2 == 0 || p3 == 0) {
        printf("ERRO: Nenhum peso pode ser zero!\n");
        return 0;
    }

    media = (n1*p1 + n2*p2 + n3*p3) / (p1 + p2 + p3);
    printf("Media ponderada: %.2f\n", media);

    if (media >= 6) printf("Situacao: Aprovado\n");
    else if (media >= 4) printf("Situacao: Exame\n");
    else printf("Situacao: Reprovado\n");

    return 0;
}