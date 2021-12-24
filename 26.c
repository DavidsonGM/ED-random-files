#include <stdio.h>
#include <string.h>

//aninhamento de estruturas
struct produto {
  int id;
  char nome[50], descricao[100];
};

struct compra {
  int id;
  char nome[50];
  struct produto p;
};

int main() {

  struct compra c;

  c.id = 546356;
  strcpy(c.nome, "Joao do Santo Cristo");
  c.p.id = 343454;
  strcpy(c.p.nome, "Opala");
  strcpy(c.p.descricao, "4.0L da cor preta");

  printf("O cliente de ID %d com nome %s comprou um %s %s.\n", 
    c.id, c.nome, c.p.nome, c.p.descricao);

  return(0);
}