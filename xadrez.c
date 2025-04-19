#include <stdio.h>

int main() {
    // Nada de pedir pro usuário por o input, gasta mais tempo na hora de testar.
    int torre = 2;
    int bispo = 3;
    int rainha = 6;
  
    // Torre: Movimento horizontal (for)
    printf("Simulando movimento da Torre (%d casas para a direita):\n", torre);
    for (int i = 0; i < torre; i++) {
        printf("Direita\n");
    }

    // Bispo: Movimento diagonal (while)
    printf("\nSimulando movimento do Bispo (%d casas na diagonal cima/direita):\n", bispo);
    int j = 0;
    while (j < bispo) {
        printf("Cima, Direita\n");
        j++;
    }

    // Rainha: Movimento horizontal (do-while)
    printf("\nSimulando movimento da Rainha (%d casas para a esquerda):\n", rainha);
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < rainha);

    return 0;
}
