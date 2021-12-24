#include <stdio.h>

//usando typedef pra criar um alias para ponto
typedef struct {
  int x, y;
} ponto;

void imprime_valor_soma(ponto *p) {
  p->x = 10;
  p->y = 20;
}

typedef int inteiro;

int main() {

  inteiro j = 0;
  //typdef padrao - eh um alias para int
  int i = 10;

  //ok pq ambos sao int
  j = i;

  // typedef em struct - eh um alias para struct ponto
  ponto p1 = {1,1};

  // passagem por referencia (uma estrtura)
  imprime_valor_soma(&p1);
  printf("Valor = %d\n", p1.x);
  printf("Valor = %d\n", p1.y);

  return(0);
}