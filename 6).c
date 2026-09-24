6)
#include <stdio.h>
#include <ctype.h>

int main() {
    char palavra[50];
    int i, vogais = 0, consoantes = 0;

    printf("Digite uma palavra: ");
    scanf("%49s", palavra);

    for (i = 0; palavra[i]!= '\0'; i++) {
        char c = tolower(palavra[i]);
        if (c >= 'a' && c <= 'z') {
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                vogais++;
            else
                consoantes++;
        }
    }

    printf("Vogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);
    return 0;
}