#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    printf ("======== Bem vindo ao BATALHA NAVAL ========\n\n");

    int matriz[10][10];
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            matriz[i][j] = 0;
        }
        
    }

    // criação dos vetores que representam os navios
    int navio1[3] = {3, 3, 3};
    int navio2[3] = {3, 3, 3};

    // posições iniciais dos navios 
    int posicao1i = 8, posicao1j = 1;
    int posicao2i = 2, posicao2j = 9;

    // verificação se as coordenadas são valídas, foi usado <= 10 para caso haja a entrada de dados pelo usuário ele selecione entre 1 e 10
    if (posicao1i >= 0 && posicao1j >= 0 && posicao1j + 3 <= 10){
        
        posicao1i = posicao1i-1;
        posicao1j = posicao1j-1;

        //navio horizontal
        for (int j = 0; j < 3; j++){
            matriz[posicao1i][posicao1j + j] = navio1[j];
        }
        
    } else{
        printf("Coordenada 1 invalida! O navio passa dos limites do tabuleiro, tente novamente.");
    }
    
    if (posicao2i >= 0 && posicao2j >= 0 && posicao2i + 3 <= 10){
        
        posicao2i = posicao2i-1;
        posicao2j = posicao2j-1;

        //navio vertical
        for (int i = 0; i < 3; i++){
            matriz[posicao2i + i][posicao2j] = navio2[i];
        }
        
    } else{
        printf("Coordenada 2 invalida! O navio passa dos limites do tabuleiro, tente novamente.");
    }
    
    int coordenadasi[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int coordenadasj[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //mostrando o tabuleiro
    printf ("Vamos dar uma olhada no tabuleiro!\n\n");

    printf("#  x ");

    for (int i = 0; i < 10; i++){
        printf("%d ", coordenadasj[i]);
    }
    printf("\ny\n");

    for (int i = 0; i < 10; i++){
        if (i != 9){
            printf("%d    ", coordenadasi[i]);
        } else{
            printf("%d   ", coordenadasi[i]);
        }
        for (int j = 0; j < 10; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
