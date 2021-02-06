#include <stdio.h>
int main(void) {
  float nota1;
  float nota2;
  float nota3;
  float nota4;
  float media;
  int i;
  char nome;
    printf("Esse codigo faz o calculo da media e informa se o aluno foi aprovado (media >= 6.0), reprovado (media <= 5.0) ou recuperacao (media >= 5.0) && (media <= 6.0).");

  printf("\n\nEntre com o nome do aluno: ");
  scanf("%s", &nome);
  printf("Informe a 1a. nota:\n");
  scanf("%f", &nota1);
  printf("\nInforme a 2a. nota:\n");
  scanf("%f", &nota2);
  printf("\nInforme a 3a. nota:\n");
  scanf("%f", &nota3);
  printf("\nInforme a 3a. nota:\n");
  scanf("%f", &nota4);
  media = (nota1 + nota2 + nota3 + nota4) / 4;
  printf("\nMedia final = %.2f", media);
  if (media >= 6.0)
     printf(" (aluno aprovado).");
  else if ((media >= 5.0) && (media < 6.0))
          printf(" (aluno em recuperacao).");
       else
      printf(" (aluno reprovado).");
}
