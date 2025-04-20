#include <stdio.h>

int main() {
    int dia;

    printf("Entre o valor do dia!\n");
    scanf("%d", &dia);

    switch (dia) {

    case 1:
        printf("Domingo\\n");
        break;
    case 2:
        printf("Segunda-Feira\\n");
        break;
    case 3:
        printf("Terça-feira\\n");
        break;
    case 4:
        printf("Quarta-feira\\n");
        break;
    case 5:
        printf("Quinta-Feira\\n");
        break;
    case 6:
        printf("Sexta-feira\\n");
        break;    
    
    default:
    printf("Dia Inválido\n");
        break;

        return 0;
    }
}

    