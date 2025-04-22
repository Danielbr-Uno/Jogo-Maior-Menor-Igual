#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numJogador, numPC, resultado, escolha;
    char tipoComparacao;

    //Gerando número aleatório pelo pc.
    srand(time(0));
    numPC = rand() % 100 +1; // Números entre 1 e 100.

    //Inicio do jogo.
    printf("Bem vindo ao jogo Maior, Menor ou igual!\n");
    
    printf("1. Jogar.\n");
    printf("2. Ver regras do jogo.\n");
    printf("3. Sair.\n");
    printf("O que você deseja fazer?\n");
    scanf("%d", &escolha);

    switch (escolha){
    case 1:
        printf("Digite um número entre 1 e 100: \n");
        scanf("%d", &numJogador);
        printf("Escolha sua comparação: \n");
        scanf(" %c", &tipoComparacao);

        switch (tipoComparacao){
        case 'M':
        case 'm':
            resultado = numJogador > numPC ? 1 : 0;
            break;
        case 'N':
        case 'n':
            resultado = numJogador < numPC ? 1 : 0;
            break;
        case 'I':
        case 'i':
            resultado = numJogador == numPC ? 1 : 0;
            break;
        default:
            printf("Escolha uma opção válida!\n");
            break;
        }

        printf("O numero sorteado é: %d, e o seu número é: %d.\n", numPC, numJogador);
        if (resultado == 1){
            printf("Parabéns, você venceu!");
        } else {
            printf("Sinto muito, você perdeu!");
        }
        break;
    case 2: 
        printf("Regras do jogo:\n");
        printf("O computador irá gerar um número aleatório para começar o jogo.\n");
        printf("O seu desafio será adivinhar se o número que o computador sorteou é maior, menor ou igual aquele que você irá escolher.\n");
        printf("Você então irá escolher o número e o tipo de comparação, lembrando:\n");
        printf(" - M para dizer que o seu número é maior;\n");
        printf(" - N para dizer que o seu número é menor;\n");
        printf(" - I para dizer que seu número é igual ao que computador escolheu.\n");
        printf("Boa sorte e bom jogo!\n");
        break;
    case 3:
        printf("Saindo...\n");
        break;
    default:
    printf("Escolha uma opção válida.\n");
        break;
    }

}