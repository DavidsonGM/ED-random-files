#include <stdio.h>

int main() {

  //declarando tipos primitivos
  float n1, n2, n3, n4, n5, media;

  //lendo valores do teclado
  scanf("%f", &n1);
  scanf("%f", &n2);
  scanf("%f", &n3);
  scanf("%f", &n4);
  scanf("%f", &n5);

  //operacoes
  media = (n1 + n2+ n3+ n4+ n5)/5.0;

  //condicionais e impressao
  if(n1 > media) printf("nota: %f\n", n1);
  if(n2 > media) printf("nota: %f\n", n2);
  if(n3 > media) printf("nota: %f\n", n3);
  if(n4 > media) printf("nota: %f\n", n4);
  if(n5 > media) printf("nota: %f\n", n5);

  return(0);
}