#include <stdio.h>

#include <stdio.h>

void movimentoTorre(int casasT) {  //função do movimento da TORRE
    if (casasT > 0) {
        printf("cima\n");

    movimentoTorre(casasT - 1);
    }
}


void movimentoBispo(int casasB) {  //função do movimento do BISPO usando LOOP ANINHADO
    for (int i = 4; i < casasB; i++) {
        for (int j = 0; j < casasB; j++) {
            printf("cima direita\n");
        }
    }
}


void movimentoRainha(int casasR) {  //função do movimento da RAINHA 
    if (casasR > 0) {
        printf("esquerda\n");

    movimentoRainha(casasR - 1);
    }
}


int main() {

    int casasTorre = 5;

    printf("\nMovimento da TORRE\n\n");  //chamando a função da TORRE

    movimentoTorre(casasTorre);



    int casasBispo = 5;

    printf("\nMovimento do BISPO\n\n");  //chamando a função do BISPO (com loop aninhado)

    movimentoBispo(casasBispo);



    int casasRainha = 8;

    printf("\nMovimento da RAINHA\n\n");  //chamando a função da RAINHA

    movimentoRainha(casasRainha);



    int casasCavalo = 2;

    printf("\nMovimento do CAVALO\n\n");

    for (int i = 1, j = 1; i < casasCavalo && j < casasCavalo; i++, j++) {  //movimento do CAVALO usando LOOP AVANÇADO
        while (i <= casasCavalo) {  //while para printar "cima" duas vezes
            printf("cima\n");
            i++;
        }

        if (j <= casasCavalo) {  //if para printar "direita" uma vez só
            printf("direita\n");
            j++;
        }
    }

    return 0;
}