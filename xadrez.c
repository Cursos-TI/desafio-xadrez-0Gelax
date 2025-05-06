#include <stdio.h>

void movimentoTorre(int casas){
  if (casas > 0) {
    printf("Direita\n");
    movimentoTorre(casas - 1);
  }
}

void movimentoBispo(int casas){
  if (casas > 0) {
    printf("Cima, Direita\n");
    movimentoBispo(casas - 1);
  }
}

void movimentoRainha(int casas){
  if (casas > 0) {
    printf("Esquerda\n");
    movimentoRainha(casas - 1);
  }
}

void movimentoCavalo(int casas){
  if (casas > 0) {
    // Primeiro, andar 2 vezes para cima
    for (int j = 0; j < 2; j++) {
      printf("Cima, ");
    }
    // Depois, andar 1 vez para a esquerda
      printf("Esquerda\n");
    movimentoCavalo(casas - 1);
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
