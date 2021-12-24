#include <stdio.h>

//usando define para constantes globais
#define N 100

int main() {

  //declarando tipos primitivos
  int n = 5;

  //usando const para constantes de escopo
  //const int n = 5

  float e[100][100]; //ok
  float f[N+1][N]; //ok
  char texto[30][20]; //ok
  int Vector[n][n]; //e ai?
  //int V[5.5][4]; //e ai?

  //e agora??
  n = 3;
  printf("%d\n", n);

  return(0);
}