#include <stdio.h>

int main(){
    printf("Digite um valor");
    scanf("%d", &variavel);

    switch (variavel) {
    case 1:
        printf("Código a ser executado se variavel == valor 1\n");
    break;
    case 2:
        printf("Codigo a ser executado se valor varivel == valor 2\n");
    break;
    default:printf("Codigo a ser executado a varievel não for 1 ou 2\n");
    
    
    }
}