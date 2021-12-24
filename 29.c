#include <stdio.h>

//aninhamento de estruturas
struct ponto {
  int x, y;
};

void imprime_valor_soma(struct ponto *p) {
  p->x = 10;
  (*p).y = 20;
}

int main() {

  struct ponto p1 = {1,1};

  // passagem por referencia (uma estrtura)
  imprime_valor_soma(&p1);
  printf("Valor = %d\n", p1.x);
  printf("Valor = %d\n", p1.y);

  return(0);
}