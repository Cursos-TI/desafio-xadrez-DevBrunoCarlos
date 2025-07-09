#include <stdio.h>


int main() {
    
    //Movimentos da TORRE usando FOR

    int movimentoTorre = 5; //variavel só para saber quantos movimentos a TORRE tem que ter

    printf("Movimento da TORRE\n\n");

    for (int i = 1; i <= movimentoTorre; i++) {
        printf("direita\n");
    }


    //movimento do BISPO usando WHILE

    int movimentoBispo = 5; //variavel só para saber quantos movimentos o BISPO tem que ter
    int i2 = 1;

    printf("\nMovimento do BISPO:\n\n");

    while (i2 <= movimentoBispo) {
        printf("cima direita\n");
        i2++;
    }


    //movimento da RAINHA usando DO-WHILE

    int movimentoRainha = 8; //variavel só para saber quantos movimentos a RAINHA tem que ter
    int i3 = 1;

    printf("\nMovimento da rainha: \n\n");
    do {
        printf("esquerda\n");
        i3++;
    } while (i3 <= movimentoRainha);



    //Movimento do CAVALO usando LOOPS ANINHADOS

    int movimentoCavalo = 1; //variavel só para saber quantos movimentos o CAVALO tem que ter

    printf("\nMovimento do cavalo: \n\n");
    while (movimentoCavalo < 2) {
        for (int i4 = 1; i4 <= 2; i4++) {  //loop aninhado
            printf("baixo\n");  //imprime "baixo" 2 vezes
        }

        printf("esquerda\n");  //imprime "esquerda" 1 vez
        movimentoCavalo++;
    }


    return 0;
}