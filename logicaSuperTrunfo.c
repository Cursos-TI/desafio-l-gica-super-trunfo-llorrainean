#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}

#include <stdio.h>

void lerCarta(int numeroCarta) { //grava na memoria as cartas 1 e 2
    char estado[3];      // Ex: "SP"
    char codigo[4];      // Código da Cidade
    char cidade[50];     // Nome da Cidade
    int populacao;       // População
    float area;          // Área em km²
    float pib;           // PIB em bilhões
    int turisticos;      // Pontos turísticos
    
    // Gravar Dados
    printf("\nDigite os Dados da Carta %d\n", numeroCarta);
    
    printf("Estado (Ex: SP): ");
    scanf("%2s", estado);
    
    printf("Código da Cidade: ");
    scanf("%3s", codigo);
    
    printf("Nome da Cidade: ");
    scanf("%49s", cidade);  // Limitando a 49 caracteres para deixar espaço para o '\0'
    
    printf("População: ");
    scanf("%d", &populacao);
    
    printf("Área (em Km²): ");
    scanf("%f", &area);
    
    printf("PIB (em bilhões): ");
    scanf("%f", &pib);
    
    printf("Pontos Turísticos: ");
    scanf("%d", &turisticos);
    
    // Exibir Dados
    printf("\n DADOS DA CIDADE %d\n", numeroCarta);
    printf("Estado: %2s\n", estado);
    printf("Código: %3s\n", codigo);
    printf("Cidade: %49s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", turisticos);
}

int main() {// só pode ter um int main() dentro do codigo C
    printf("Desafio Super Trunfo\n");
    
    lerCarta(1); // lê da memoria a carta1
    
    lerCarta(2); // lê da memoria a carta2
    
    return 0;
}