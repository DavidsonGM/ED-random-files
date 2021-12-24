#include <stdio.h>

//definindo estrutura
struct endereco {
  char nome[50], rua[40];
  int cep, numero;
};

int main() {

  //atribuicao em array como se fosse uma lista
  int vec[4] = {2,2,3,2};

  //declaracao de um endenreco como se fosse lista ou arrrays
  struct endereco e1 = {"Monica", "Av josefina", 98765, 900};
  struct endereco e2 = {"Eduardo", "Av Ze da silva", 12334, 100};

  //sem inicializacao do numero - vai receber zero
  struct endereco e3 = {"Eduardo", "Av Ze da silva", 12334};

  //sem inicializacao do numero, cep e rua - uma string eh uma string vazia ""
  struct endereco e4 = {"Eduardo"};

  return(0);
}