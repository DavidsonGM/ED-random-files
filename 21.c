#include <stdio.h>
#include <string.h>

//definindo estrutura
struct endereco {
  char nome[50], rua[40];
  int cep, numero;
};

int main() {

  //declaracao de 2 endereco
  struct endereco e1, e2;

  strcpy(e1.nome, "Monica");
  strcpy(e1.rua, "Av josefina");
  e1.cep = 98765;
  e1.numero = 900;

  strcpy(e2.nome, "Eduardo");
  strcpy(e2.rua, "Av Ze da silva");
  e2.cep = 12334;
  e2.numero = 100;

  return(0);
}