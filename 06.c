#include <stdio.h>

#define N 5

int main() {

  //tipos primitivos
  int i;
  float media;

  //declarando estruturas homogeneas
  float notas[N];

  //lendo valores do teclado e salvando em notas
  for(i=0; i<N; i++) {
    scanf("%f", &notas[i]);
    media = media + notas[i];
  }

  //tirando a media
  media = media/N;

  //imprimindo nota por nota
  for(i=0; i<N; i++) {
    if(notas[i] > media)
      printf("nota %i: %f\n", i, notas[i]);
    //fora do if... certo???
    printf("aluno %i reprovou\n", i);
  }

  return(0);
}