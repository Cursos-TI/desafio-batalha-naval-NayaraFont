#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3


void inicializarTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }
}


void posicionarNavioHorizontal(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna) {
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha][coluna + i] = 3;
    }
}

void posicionarNavioVertical(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna) {
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha + i][coluna] = 3;
    }
}

void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    
    inicializarTabuleiro(tabuleiro);

    
    int linhaNavioHorizontal = 2, colunaNavioHorizontal = 2;
    int linhaNavioVertical = 5, colunaNavioVertical = 5;

    
    if (colunaNavioHorizontal + TAMANHO_NAVIO <= TAMANHO_TABULEIRO && 
        linhaNavioVertical + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) {

        
        posicionarNavioHorizontal(tabuleiro, linhaNavioHorizontal, colunaNavioHorizontal);
        posicionarNavioVertical(tabuleiro, linhaNavioVertical, colunaNavioVertical);

        
        exibirTabuleiro(tabuleiro);
    } else {
        printf("Erro: Navios fora dos limites do tabuleiro ou se sobrepondo.\n");
    }

    return 0;
}
