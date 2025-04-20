#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao, regras;
    int numeroSecreto, palpite;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:   
        srand(time(0));
        numeroSecreto = rand() % 10; 
        printf("Digite um numero de 0 a 9: ");
        scanf("%d", &palpite);
        printf("numero secreto %d\n", numeroSecreto);
        if (numeroSecreto == palpite)
        {
           printf("Você acertou| \n");
        } else {
            printf("Você errou\n");
        }
         
        break;
    case 2:  
        printf("A explicação das regras"); 
        printf("Digite a opção relaciona as regras dos jogos!\n"); 
        scanf("%d", &regras);
        switch (regras)
        {
        case 1:
        printf("Regra 1");
        break;
        case 2:
        printf("Regra 2");
        break;
        default:
            break;
        }
        break;
    case 3:  
        printf("Saindo do jogo");
        break;
    default:
    printf("Opção Inválida\n");
        break;
    
    }
}