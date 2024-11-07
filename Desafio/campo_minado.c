#include <stdio.h>
#include <string.h>
// void contar_bombas(int campo[5][5], int resultado[5][5]);

int main (int argc, char **argv){

    int campo [5][5] = {
        {0,-1,-1,0,0},
        {-1,0,0,-1,0},
        {0,0,0,-1,-1},
        {0,-1,0,0,-1},
        {-1,0,-2,0,0}
    };

    int resultado [5][5] = {0};
    int direcoes [8][8]= {0};
    int contagem_bombas = 0;


    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (campo[i][j] == -1) {    
                // até 8  direçoes onde pode haver bomba aqui eu preciso testar para saber se tem bombas ao redor
                // entao se eu fizer uma matriz 8 por 8 com zeros eu posso iniciar o teste mesmo sendo um local inexistente    
                for (int k = 0; k < 8; k++) {
                    int ni = i + direcoes[k][0];
                    int nj = j + direcoes[k][1];
                // aqui eu testo se o lugar que eu to buscando existe ou nao e se ele tiver bomba ao redor eu adiciono +1 no contador de bombas deste campo 
                    if (ni >= 0 && ni < 5 && nj >= 0 && nj < 5) {
                        if (campo[ni][nj] == -1) {
                            contagem_bombas++;
                        }
                    }
                }
                resultado[i][j] = contagem_bombas;
                
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }


}

