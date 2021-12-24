#include <stdio.h>

//usando define para constantes globais
#define N 100

int main() {

  //declarando estruturas homogeneas
  int n = 5; //ok

  float e[100]; //ok
  float f[N+1]; //ok
  char texto[30]; //ok
  int Vector[n]; //e agora??
  int V[5]; //e agora??

  return(0);
}