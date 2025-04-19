#include <stdio.h>

int main(){

    int variavel;

    printf("Digite um valor\n");
    scanf("%d", &variavel);

    switch (variavel) {
    case 1:
        printf("Código a ser executado se variavel == valor 1\n");
        printf("Teste do case 1");1

    break;
    case 2:
        printf("Codigo a ser executado se valor varivel == valor 2\n");
    break;
    default:printf("Codigo a ser executado a varievel não for 1 ou 2\n");
    
    
    }
}