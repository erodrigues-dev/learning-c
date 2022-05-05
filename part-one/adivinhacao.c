#include <stdio.h>

int main() {
  printf("*******************************************\n");
  printf("* Bem vindo ao nosso jogo de adivinihacao *\n");
  printf("*******************************************\n");

  int numerosecreto = 42;
  int chute;

  printf("\nqual é o seu chute? ");
  scanf("%d", &chute);

  printf("\nseu chute foi %d\n", chute);
}