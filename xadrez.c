// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


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
    

int main() {
    int i, j;
    int movimentos[8][2] = {
        {2, 1}, {2, -1}, {-2, 1}, {-2, -1}, 
        {1, 2}, {1, -2}, {-1, 2}, {-1, -2}  
    };

    
    int x = 0, y = 0;

    printf("Movimentos possíveis a partir da posição (%d, %d):\n", x, y);
    
    
    for (i = 0; i < 8; i++) {
        
        int novo_x = x + movimentos[i][0];
        int novo_y = y + movimentos[i][1];

        
        if (novo_x >= 0 && novo_x < 8 && novo_y >= 0 && novo_y < 8) {
            printf("Movimento para a posição (%d, %d)\n", novo_x, novo_y);
        }
    }

    return 0;
}
