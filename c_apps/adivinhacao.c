#include <stdio.h>

int main()
{

    // Imprime o cabeçalho do jogo
    printf("************************************\n");
    printf("* Bem-vindo ao jogo da adivinhação *\n");
    printf("************************************\n");

    int numerosecreto = 42;

    int chute;
    int ganhou = 0;
    int tentativas = 1;

    while (ganhou == 0)
    {
        printf("Tentativa %d\n", tentativas);
        printf("Qual o seu chute? ");

        scanf("%d", &chute);

        if (chute < 0)
        {
            printf("Você não pode chutar números negativos\n");

            continue;
        }

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        // SE, o chute for igual ao numero secreto.
        if (acertou)
        {
            printf("Parabens, você acertou!\n");
            printf("Você é um bom jogador, jogue novamente.\n");

            ganhou = 1;
        }
        // SE NÃO, SE
        else if (maior)
        {
            printf("Seu chute foi maior que o número secreto\n");
            printf("Tente novamente");
        }

        else
        {
            printf("Seu chute foi menor que o número secreto\n");
            printf("Tente novamente");
        }

        tentativas++;
    }

    printf("Fim de Jogo!\n");
    printf("Você acertou em %d tentativas!", tentativas);
}
