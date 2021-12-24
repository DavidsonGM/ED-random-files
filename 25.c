#include <stdio.h>
#include <string.h>

//definindo estrutura
struct endereco {
  char nome[50], rua[40];
  int cep, numero;
};

int main() {

  //declaracao um vetor de enderecos
  struct endereco e[5];

  //atribuido. Operador . vem depois dos []
  strcpy(e[0].nome, "Joao do Santo Cristo");
  strcpy(e[0].rua, "Av Planaltina");
  e[0].cep = 123456;
  e[0].numero = 150;
  
  printf("%s %s %d %d\n", e[0].nome, e[0].rua, e[0].cep, e[0].numero);

  return(0);
}