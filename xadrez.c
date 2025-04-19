#include <stdio.h>

void movimentoTorre(int casas){
  for (int i = 0; i < casas; i++) {
    printf("Direita\n");
  }
}

void movimentoBispo(int casas){
  int j = 0;
  while (j < casas) {
    printf("Cima, Direita\n");
    j++;
  }
}

void movimentoRainha(int casas){
  int k = 0;
  do {
    printf("Esquerda\n");
    k++;
  } while (k < casas);
}

void movimentoCavalo(int casas){
  for (int i = 0; i < casas; i++) {
    // Primeiro, andar 2 vezes para cima
    for (int j = 0; j < 2; j++) {
      printf("Cima\n");
    }

    // Depois, andar 1 vez para a esquerda
    int j = 0;
    while (j < 1) {
      printf("Esquerda\n");
      j++;
    }
  }
}

int main() {

  int rainha = 6;
  int cavalo = 1;

  // Torre: Movimento horizontal (for)
  
  printf("Simulando movimento da Torre:\n");
  movimentoTorre(3);
  
  // Bispo: Movimento diagonal (while)
  
  printf("\nSimulando movimento do Bispo:\n");
  movimentoBispo(4);
  // Rainha: Movimento horizontal (do-while)
  
  printf("\nSimulando movimento da Rainha:\n");
  movimentoRainha(2);
  // Cavalo: Movimento em L (Loop aninhado)
  
  printf("\nSimulando movimento do Cavalo:\n");
  movimentoCavalo(2);
  return 0;
}
