#include <stdio.h>

int main() {

    // Exemplo de uso de estruturas de repetição para simular movimentos das peças de xadrez.

    // Variáveis para armazenar os nomes das peças e seus movimentos.
    char torre[50] = "Direita"; 
    char bispo[50] = "Cima Direita";
    char rainha[50] = "Esquerda ";
    char cavalo1[50] = "Baixo";
    char cavalo2[50] = "Esquerda";
    int i = 0, j = 0, num, movimentoCavalo;
    
    printf("\n*** Peças do Jogo de Xadrez ***\n\n");


    printf("\nTorre:\n\n");

    // Loop While para imprimir o movimento da Torre.
    // A Torre se move para a direita 5 casas.
    while (i < 5) { // Loop de 5 iterações para simular o movimento da Torre.

        printf("%s\n", torre);
        i++; // Incrementa o contador para controlar o número de movimentos da Torre.
    }


    printf("\n\nBispo:\n\n");

    // Loop Do-While para imprimir o movimento do Bispo.
    // O Bispo se move para cima e para a direita 5 vezes (reprentando o movimento para a Diagonal Superior Direita).
    do {
        
        printf("%s\n", bispo);
        j++; // Incrementa o contador para controlar o número de movimentos do Bispo.

    } while (j < 5); // Loop de 5 iterações para simular o movimento do Bispo.


    printf("\n\nRainha:\n");
    printf("Escolha um número (1 a 8) para movimentar a Rainha: ");
    scanf("%d", &num);    

    printf("\n");

    // Loop For para imprimir o movimento da Rainha, com uma condicional para verificar se o número de casas é válido.
    // A Rainha se move para a esquerda o número de casas escolhido pelo usuário, com um limite de até 8 casas.
    for (int k = 0; k < num; k++) {  // Loop que itera o número de casas escolhido pelo usuário.      
        if (num <= 8) { // Condicional para garantir que o número de casas não exceda 8.
            printf("%s\n", rainha);
        }
    }

    printf("\n\nCavalo:\n\n");

    // Loop Aninhado com Do-While e For para imprimir o movimento do Cavalo.
    // O Cavalo se move para baixo 2 vezes e para a esquerda 1 vez, fazendo um movimento em "L".
    do { // Estrutura externa do-while para controlar o número de movimentos do Cavalo.

        for (int l = 0; l < 2; l++) { // Estrutura interna for para controlar os 2 movimentos para baixo, a cada movimento do loop externo.
            printf("%s\n", cavalo1); // Impressão da estrutura interna do Loop.
        }

        printf("%s\n", cavalo2); // Impressão da estrutura externa do Loop.

    } while (movimentoCavalo--); // Decrementa o movimentoCavalo até que ele atinja 0, controlando o número de movimentos do Cavalo para 1.

    printf("\n");

    return 0;
}