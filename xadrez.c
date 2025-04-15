#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//Função recursiva para simular o movimeto da Torre
void moverTorre (int casas) 
{
    if(casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

//Função recursiva para simular o movimeto da Rainha
void moverRainha (int casas){
    if(casas > 0){
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

//Função recursiva para simular o movimeto do Bispo
void moverBispo (int casas){
    while (casas--){
        for (int i = 1; i <= 1; i++)
        {
            printf("\nDireita");
        }
        printf("\nCima\n");
        
    }
    
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


    int movimentacao = 1;


    printf("*** JOGO DE XADREZ ***\n");

    printf("\n Torre: \n"); // Movimentação da Torre em 5 casas para a Direita
    moverTorre(5);

    printf("\n Bispo: \n"); // Movimentação do Bispo em 5 casas na diagonal para direita e para Cima
    moverBispo(5);

    printf("\n Rainha: \n"); // Movimentação da Torre em 5 casas para a Esquerda
    moverRainha(8);
 
    printf("\n Cavalo:  "); // Movimentação do cavalo
    while (movimentacao--)
    {
        for (int i = 0; i < 5; i++)
        {
            if (i == 0) continue; // Pula a iteração quando i é 0
            if (i == 3) break;    // Sai do loop quando i é 3
            printf("\nCima"); // Imprime "Cima" duas vezes
        }
        printf("\nDireita\n"); // Imprime "Direita" uma vez
    }
     
    return 0;
}