#include <stdio.h>

int main(){

    int nota;

    printf("Digite a ua nota: ");
    scanf("%d", &nota);
    //A >= 90
    //B >= 80
    //C >= 70
    //D >= 60
    //E >= 50

    if (nota >= 90){
        printf("Conceito A!\n");

    } else if (nota >= 80){
        printf("Conceito é B!");
    } else if (nota >= 70){
        printf("O conceito é C!");

    }else if (nota >= 60){
        printf("Oconceito é D!");
    }else if (nota >= 50){
        printf("O conceito é E");

    }else {
        printf ("O conceito é F");
    }
    