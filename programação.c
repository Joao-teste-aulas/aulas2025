
#include <stdio.h>

struct Carta {
    char estado;
    char codigo[5];
    char nomecidade[25];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
};

///////////obtenção das informações////////////////
int main() {
    struct Carta cartas[2];

    for (int i = 0; i < 2; i++) {
        printf("\n--- Cadastro da Carta %d ---\n", i + 1);

        printf("Estado (A-H): ");
        scanf(" %c", &cartas[i].estado); // Corrigido para ler char

        printf("Codigo da Carta (ex: A01): ");
        scanf("%4s", cartas[i].codigo); // Limite de caracteres

        printf("Nome da Cidade: ");
        scanf("%24s", cartas[i].nomecidade); // Limite de caracteres

        printf("Populacao: ");
        scanf("%d", &cartas[i].populacao);

        printf("Área(km²): ");
        scanf("%f", &cartas[i].area);

        printf("PIB: ");
        scanf("%f", &cartas[i].pib);

        printf("Pontos Turísticos: ");
        scanf("%d", &cartas[i].pontosturisticos);
    }

    ////////////exibição das informações////////////////
    printf("\n==== Dados das cartas ===\n");
    for (int i = 0; i < 2; i++) {
        printf("Carta: %d\n", i + 1);
        printf("Estado: %c\n", cartas[i].estado);
        printf("Codigo: %s\n", cartas[i].codigo);
        printf("Cidade: %s\n", cartas[i].nomecidade);
        printf("Populacao: %d\n", cartas[i].populacao);
        printf("Area: %.2f Km²\n", cartas[i].area);
        printf("PIB: %.2f\n", cartas[i].pib);
        printf("Pontos Turísticos: %d\n", cartas[i].pontosturisticos);
    }

    //comparação das informações////////////////
    if (cartas[0].populacao > cartas[1].populacao) {
        printf("A carta com maior populacao é: %s\n", cartas[0].nomecidade);
    } else if (cartas[1].populacao > cartas[0].populacao) {
        printf("A carta com maior populacao é: %s\n", cartas[1].nomecidade);
    } else {
        printf("As duas cartas têm a mesma populacao.\n");
    }

    if (cartas[0].pib > cartas[1].pib) {
        printf("A carta com maior PIB é: %s\n", cartas[0].nomecidade);
    } else if (cartas[1].pib > cartas[0].pib) {
        printf("A carta com maior PIB é: %s\n", cartas[1].nomecidade);
    } else {
        printf("As duas cartas têm o mesmo PIB.\n");
    }
    }
