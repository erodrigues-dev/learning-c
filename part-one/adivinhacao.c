#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("*******************************************\n");
  printf("* Bem vindo ao nosso jogo de adivinihacao *\n");
  printf("*******************************************\n");

  int numerosecreto = 42;
  int chute = 0;
  int pontos = 50;

  while (chute != numerosecreto)
  {
    printf("\nqual é o seu chute? ");
    scanf("%d", &chute);

    if (chute == numerosecreto)
    {
      printf("vc acertou!! o numero secreto é %d\n", numerosecreto);
      printf("vc fez %d pontos\n", pontos);
    }
    else
    {
      int diferenca = abs(chute - numerosecreto);
      pontos = pontos - diferenca;

      if(pontos <= 0){
        printf("vc perdeu!\n");
        break;
      }

      printf("vc errou! tente novamente\n");
      if(chute > numerosecreto) printf("o numero secreto é menor que seu chute!\n");
      else printf("o numero secreto é maior que seu chute!\n");
    }
  }
}