#include <stdio.h>

//definindo estrutura iguais
struct ponto {
  int x, y;
};

//definindo estrutura iguais
struct novo_ponto {
  int x, y;
};

int main() {

  struct ponto p1 = {1, 2}, p2;
  struct novo_ponto p3 = {3, 4};

  p2 = p1;

  printf("%d %d\n", p2.x, p2.y);

  //e ai??
  p2 = p3;
  printf("%d %d\n", p2.x, p2.y);

  return(0);
}