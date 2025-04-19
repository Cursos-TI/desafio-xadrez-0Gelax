#include <stdio.h>

int main() {

  int torre = 2;
  int bispo = 3;
  int rainha = 6;
  int cavalo = 1;

  // Torre: Movimento horizontal (for)
  printf("Simulando movimento da Torre (%d casas para a direita):\n", torre);
  for (int i = 0; i < torre; i++) {
    printf("Direita\n");
  }

  // Bispo: Movimento diagonal (while)
  printf(
      "\nSimulando movimento do Bispo (%d casas na diagonal cima/direita):\n",
      bispo);
  int j = 0;
  while (j < bispo) {
    printf("Cima, Direita\n");
    j++;
  }

  // Rainha: Movimento horizontal (do-while)
  printf("\nSimulando movimento da Rainha (%d casas para a esquerda):\n",
         rainha);
  int k = 0;
  do {
    printf("Esquerda\n");
    k++;
  } while (k < rainha);

  // Cavalo: Movimento em L (Loop aninhado)
  printf("\nSimulando movimento do Cavalo (%d casas em L):\n", cavalo);

  for (int i = 0; i < cavalo; i++) {
    // Primeiro, andar 2 vezes para cima
    for (int j = 0; j < 2; j++) {
      printf("Cima\n");
    }

    // Depois, andar 1 vez para a esquerda
    j = 0;
    while (j < 1) {
      printf("Esquerda\n");
      j++;
    }
  }

  return 0;
}
