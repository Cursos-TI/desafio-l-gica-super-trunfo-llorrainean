#include <stdio.h>

int main(){
    int opcao;
    float nota1, nota2, media;

    printf("Menu de Gerenciamento de Estudantes\n");
    printf("1. Calcular Média\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", & opcao);
    
    switch (opcao)
    {
    case 1:
    printf("Calcular a Média\n");
    printf("Digite a primeira nota\n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota");
    scanf("%f", &nota2);
// Testar a condição se a nota é >= 0 e <= 10
    if ( (nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10 )){
        media = (nota1 + nota2) / 2;
        printf("A média é %.2\n", media);
    } else {
        printf("Entrada com valores errados de notas\n");
    }
    
     break;
    case 2:
    printf("Determinar Status\n");
    printf("Entrar com a média: \n");
    scanf("%f", &media);
    // media >= 5 ? printf("Aprovado!") : printf("Reprovado\n");

    if (media >= 7 )
    {
        printf("Aprovado!");
    }else if ( media >= 5)
    {
       printf("Recuperação\n");

    }else {
        printf("reprovado\n");
    }
    
    
    case 3: 
    printf("Saindo do programa...\n");
    default: ("Opção inválida\n");
        break;
    }


    return 0;

}