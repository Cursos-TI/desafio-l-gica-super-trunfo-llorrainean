#include <stdio.h>

int main () {
    int opcao;
    float saldo = 1000;

    printf("Escolha uma opção:\n");
    printf("1. Verificar saldo:\n");
    printf("2. Fazer depoósito\n");
    printf("3. Fazer saque\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1
    printf ("O seu saldo é: R$ %f, saldo");
        break;
        case 2
    printf ("Digite o banco que você deseja depossitar\n");
    printf ("Digite a agência que você deseja depositar\n");
    printf ("Digite a conta que você deseja depossitar\n");
    case 3
    printf ("Digite o valor a sacar\n");
   
        break;
    
    default:
    printf("Opção Inválida:\n");
        break;
    }




    return 0;
}