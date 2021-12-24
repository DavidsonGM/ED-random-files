#include <stdio.h>

//definindo estrutura
struct endereco {
  char nome[50], rua[40];
  int cep, numero;
};

int main() {

  //declaracao da variavel e que eh do tipo endereco
  struct endereco e;

  //cada campo do tipo endereco pode ser acessado usando o
  //operador .
  scanf(" %[^\n]", &e.nome);
  printf("%s\n", e.nome);

  e.numero = 100;
  printf("%d\n", e.numero);

  e.numero = e.numero - 10;
  printf("%d\n", e.numero);
  return(0);
}