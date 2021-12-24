#include <stdio.h>

#define L 2
#define C 3

int main() {

  int i, j;

  //declarando uma matriz de tipos primitivos
  int mat[L][C];

  //lendo os valores
  for(i=0; i<L; i++) {
    for(j=0; j<C; j++) {
      scanf("%d", &mat[i][j]);
    }
  }

  //imprimindo os valores
  for(i=0; i<L; i++) {
    for(j=0; j<C; j++) {
      printf("%d\n", mat[i][j]);
    }
  }

  return(0);
}