void contar_bombas(int campo[M][N], int resultado[M][N]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (campo[i][j] == 1) {
                // Se há uma bomba na célula, continuamos
                continue;
            }
            
            // Contador de bombas ao redor da célula (i, j)
            int contagem_bombas = 0;
            
            // Verificar todas as 8 direções
            for (int k = 0; k < 8; k++) {
                int ni = i + direcoes[k][0]; // Nova linha
                int nj = j + direcoes[k][1]; // Nova coluna
                
                // Verificar se a posição está dentro dos limites
                if (ni >= 0 && ni < M && nj >= 0 && nj < N) {
                    if (campo[ni][nj] == 1) {
                        contagem_bombas++;
                    }
                }
            }
            
            // Armazenar a quantidade de bombas no resultado
            resultado[i][j] = contagem_bombas;
        }
    }
}

// Função para imprimir a matriz de resultado
void imprimir_matriz(int matriz[M][N]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Exemplo de campo minado (0 = sem bomba, 1 = com bomba)
    int campo[M][N] = {
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {1, 0, 0, 0},
        {0, 0, 0, 1}
    };

    // Matriz para armazenar o resultado (quantidade de bombas ao redor)
    int resultado[M][N] = {0};

    // Chama a função para contar as bombas
    contar_bombas(campo, resultado);

    // Imprimir a matriz de resultado
    printf("Resultado:\n");
    imprimir_matriz(resultado);

    return 0;
}
Explicação do código:
Definições de tamanho: O código d