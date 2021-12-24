#include <stdio.h>

//aninhamento de estruturas
struct ponto {
  int x, y;
};


void valor_soma(int *n) {
  *n = *n + 1;
}


int main() {

  struct ponto p1 = {10, 20};

  // passagem por referencia (um campo)
  valor_soma(&p1.x);
  printf("Valor = %d\n", p1.x);

  // passagem por referencia (um campo)
  valor_soma(&p1.y);
  printf("Valor = %d\n", p1.y);

  return(0);
}