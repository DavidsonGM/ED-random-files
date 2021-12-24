#include <stdio.h>

int main() {

  //declarando uma matriz de tipos primitivos
  int mat[3][2];

  //lendo valores para a matriz
  scanf("%d", &mat[0][0]);
  scanf("%d", &mat[0][1]);

  int paste[3][2];

  for(int i=0; i<3;i++) {
    for(int j=0; j<2;j++) {
        paste[i][j] = mat[i][j];
    }
  }

  return(0);
}