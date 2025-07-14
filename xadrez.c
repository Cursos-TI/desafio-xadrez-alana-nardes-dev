#include <stdio.h>

int main() {

    // Exemplo de uso de estruturas de repetição para simular movimentos das peças de xadrez.

    // Variáveis para armazenar os nomes das peças e seus movimentos.
    char torre[50] = "Direita"; 
    char bispo[50] = "Cima Direita";
    char rainha[50] = "Esquerda ";
    int i1 = 0, i2 = 0, num;
    
    printf("\n*** Peças do Jogo de Xadrez ***\n\n");


    printf("\nTorre:\n\n");

    // Loop While para imprimir o movimento da Torre.
    // A Torre se move para a direita 5 casas.
    while (i1 < 5) {

        printf("%s\n", torre);
        i1++;
    }


    printf("\n\nBispo:\n\n");

    // Loop Do-While para imprimir o movimento do Bispo.
    // O Bispo se move para cima e para a direita 5 vezes (reprentando o movimento para a Diagonal Superior Direita).
    do {
        
        printf("%s\n", bispo);
        i2++;

    } while (i2 < 5);


    printf("\n\nRainha:\n");
    printf("Escolha um número (1 a 8) para movimentar a Rainha: ");
    scanf("%d", &num);    

    printf("\n");

    // Loop For para imprimir o movimento da Rainha, com uma condicional para verificar se o número de casas é válido.
    // A Rainha se move para a esquerda o número de casas escolhido pelo usuário, com um limite de até 8 casas.
    for (int i = 0; i < num; i++) {        
        if (num <= 8) {
            printf("%s\n", rainha);
        }
    }    

    return 0;
}