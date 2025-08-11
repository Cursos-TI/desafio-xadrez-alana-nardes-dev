#include <stdio.h>

// Uso da Recursividade e das Estruturas de Repetição Avançadas para simular movimentos das peças de xadrez.

void movimentoTorre(int casas) { // Bloco de declaração do Procedimento Recursivo, do movimento da Torre.
    if (casas > 0) { // Caso base para evitar loops infinitos.
        printf("Direita\n"); // Impressão do movimento da Torre a cada casa.
        movimentoTorre(casas - 1); // Comando da Função de Recursividade, onde o procedimento chama a si mesmo, criando um loop e a cada loop, decrementando em 1, da quantidade definida pelo variável de parâmetro.
    }
}

void movimentoBispo(int casas) { // Bloco de declaração do Procedimento Recursivo, integrando com a Estrutura de Repetição Aninhada (for-for), para implemetar o movimento do Bispo.
    if (casas == 0) { // Condição de parada para evitar loops infinitos.
        return; 
    }

    for (int i = 0; i < 1; i++) { // Estrutura externa do Loop Aninhado for, para imprimir o movimento do Bispo na Vertical.
        printf("Cima ");
        for (int j = 0; j < 1; j++) { // Estrutura interna do Loop Aninhado for, para imprimir o movimento do Bispo na Horizontal.
            printf("Direita\n");        
        }
    }
    movimentoBispo(casas - 1); // Comando da Função de Recursividade, onde o procedimento chama a si mesmo, criando um loop e a cada loop, decrementando em 1, da quantidade definida pelo variável de parâmetro.
}

void movimentoRainha(int casas) { // Bloco de declaração do Procedimento Recursivo, do movimento da Rainha.
    if (casas > 0) { // Caso base para evitar loops infinitos.
        printf("Esquerda\n"); // Impressão do movimento da Rainha a cada casa.
        movimentoRainha(casas - 1); // Comando da Função de Recursividade, onde o procedimento chama a si mesmo, criando um loop e a cada loop, decrementando em 1, da quantidade definida pelo variável de parâmetro.
    }    
}

int main() {

    // Variáveis de parâmetro para armazenar o numero de movimentos das Peças.
    int quantidadeTorre = 5, quantidadeBispo = 5, quantidadeRainha = 8, quantidadeCavalo;
    
    // Impressões dos movimentos de cada peça no Terminal:
    printf("\n*** Peças do Jogo de Xadrez ***\n\n");

    printf("\nTorre:\n\n");

    // Loop Recursivo para imprimir o movimento da Torre. A Torre se move para a direita 5 casas.
    movimentoTorre(quantidadeTorre); // Chamada da função recursiva, com o valor inicial definido na variável quantidade, que será usada como parâmetro para executar o loop, até que a condicional if do respectivo procedimento, se torne falsa.
    

    printf("\n\nBispo:\n\n");

    // Loop Aninhado Recursivo para imprimir o movimento do Bispo. O Bispo se move para cima e para a direita 5 vezes ("Cima Direita"), representando o movimento para a Diagonal Superior Direita.
    movimentoBispo(quantidadeBispo); // Chamada da função recursiva, com o valor inicial definido na variável quantidade, que será usada como parâmetro para executar o loop, até que a condição do Loop Recursivo Aninhado do respectivo procedimento, se torne falsa.
    

    printf("\n\nRainha:\n\n");

    // Loop Recursivo para imprimir o movimento da Rainha. A Rainha se move para a esquerda 8 casas.
    movimentoRainha(quantidadeRainha); // Chamada da função recursiva, com o valor inicial definido na variável quantidade, que será usada como parâmetro para executar o loop, até que a condicional if do respectivo procedimento, se torne falsa.
    
    printf("\n\nCavalo:\n");
    printf("Digite quantas vezes deseja movimentar o Cavalo: "); // Entrada de Dados para que o Usuário decida por quantas vezes o loop do movimento do Cavalo será realizado. 
    scanf("%d", &quantidadeCavalo); // Comando para a leitura da quantidade de movimento que o cavalo irá realizar.
    
    printf("\n");

    // Loop Aninhado (for-for) para imprimir o movimento do Cavalo. O Cavalo se move para cima 2 vezes e para a direita 1 vez, fazendo um movimento em "L".
    for (int i = 0; i < quantidadeCavalo; i++) { // Loop externo itera o número de vezes que o usuario vai querer repetir o loop do movimento do Cavalo.  
        for (int j = 0, k = 0; j + k < 3; (j < 2) ? j++ : k++ ) { // O Loop interno é uma estrutura for avançada, onde é feito a declaração e inicialização de múltiplas variáveis, testando uma dupla condição de lógica aritimética para controlar a impressão dos 2 movimentos para "Cima" e 1 para "Direita" e incrementos múltiplos, baseado em um operador ternário.
            printf("%s\n", j < 2 ? "Cima" : "Direita"); // A impressão da estrutura interna do Loop, também é baseado em uma operação ternária, onde enquanto o "j" for < 2, será impresso "Cima" e no próximo loop, quando "j" se tornar 3, será impresso "Direita" e assim finalizando o movimento completo do Cavalo ("L").
        }
        printf("\n"); // Comando para pular 1 linha, apenas para separar os movimentos do cavalo do loop interno, da repetição do movimento completo no loop externo.
    }

    return 0;
}