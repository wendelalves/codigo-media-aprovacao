#include <stdio.h>
#include <locale.h>
int main(void) {
  float nota1;
  float nota2;
  float nota3;
  float nota4;
  float media;
  int i;
  char nome;
  setlocale(LC_ALL, "Portuguese");
  printf("Esse codigo faz o c�lculo da m�dia e informa se o aluno foi aprovado (m�dia >= 6,0), reprovado (m�dia <= 5,0) ou recupera��o (m�dia >= 5,0) && (m�dia <= 6,0). Separe os n�meros reais por v�rgula.");
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
  printf("\nM�dia final = %.2f", media);
  if (media >= 6.0)
     printf(" (aluno aprovado).");
  else if ((media >= 5.0) && (media < 6.0))
          printf(" (aluno em recupera��o).");
       else
      printf(". (aluno reprovado).");
}
