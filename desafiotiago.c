#include <stdio.h>
#include <string.h>

// Definindo o tamanho máximo para strings
#define MAX_STRING 100

// Estrutura para representar uma carta do Super Trunfo
typedef struct {
    char estado;
    char codigo[4]; // 3 caracteres + '\0'
    char nome_cidade[MAX_STRING];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

// Função para ler uma carta do usuário
void lerCarta(Carta *carta) {
    printf("Estado (A-H): ");
    scanf(" %c", &carta->estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta->codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta->nome_cidade); // Lê até encontrar uma nova linha

    printf("População: ");
    scanf("%d", &carta->populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta->area);

    printf("PIB: ");
    scanf("%f", &carta->pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta->pontos_turisticos);
}

// Função para exibir os dados de uma carta
void exibirCarta(Carta carta) {
    printf("\nDados da Carta:\n");
    printf("Estado: %c\n", carta.estado);
    printf("Código da Carta: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nome_cidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontos_turisticos);
}

int main() {
    Carta carta1, carta2;

    printf("Insira os dados da primeira carta:\n");
    lerCarta(&carta1);

    printf("\nInsira os dados da segunda carta:\n");
    lerCarta(&carta2);

    printf("\nDados da primeira carta:");
    exibirCarta(carta1);

    printf("\nDados da segunda carta:");
    exibirCarta(carta2);

    return 0;
}