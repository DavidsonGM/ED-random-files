#include <stdio.h>

//definindo estrutura
struct endereco {
  char nome[50], rua[40];
  int cep, numero;
};

int main() {

  //declaracao de um endenreco como se fosse lista ou arrrays
  struct endereco e1 = {"Monica", "Av josefina", 98765, 900};
  struct endereco e2;

  //a atribuicao pode ser de uma unica vez
  e2 = e1;

  printf("%s\n", e2.nome);
  printf("%s\n", e2.rua);
  printf("%d\n", e2.cep);
  printf("%d\n", e2.numero);

  return(0);
}