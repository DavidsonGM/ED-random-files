#include <stdio.h>

//aninhamento de estruturas
struct ponto {
  int x, y;
};


void imprime_valor(int n) {
  printf("Valor = %d\n", n);
}


int main() {

  struct ponto p1 = {10, 20};

  // passagem por valor (um campo)
  imprime_valor(p1.x);
  imprime_valor(p1.y);

  return(0);
}