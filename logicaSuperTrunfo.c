#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lerCarta(int numeroCarta) { //grava na memoria as cartas 1 e 2
    char estado[3];      // Ex: "SP"
    char codigo[4];      // Código da Cidade
    char cidade[50];     // Nome da Cidade
    int populacao;       // População
    float area;          // Área em km²
    float pib;           // PIB em bilhões
    int turisticos;      // Pontos turísticos

    if (Carta1 > Carta2){
    printf("Carta 1. \n");
}

else {

    printf("Carta 2.\n");
}
    
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
    
    printf("### Carta Vencedora###");

    return 0;
}