#include <stdio.h>

//definindo estrutura
struct endereco {
  char nome[50], rua[40];
  int cep, numero;
};

int main() {

  //sem struct: declaracao de variaveis para 3 enderecos
  char nome1[50], nome2[50], nome3[50], rua1[40], rua2[40], rua3[40];
  int cep1, cep2, cep3, numero1, numero2, numero3;

  //com struct: declaracao de 3 enderecos
  struct endereco e1, e2, e3;

  gets(e1.nome);
  printf("%s\n", e1.nome);

  e1.numero = 100;
  printf("%d\n", e1.numero);

  gets(e2.nome);
  printf("%s\n", e2.nome);

  e2.numero = 200;
  printf("%d\n", e2.numero);

  gets(e3.nome);
  printf("%s\n", e3.nome);

  e3.numero = 300;
  printf("%d\n", e3.numero);

  return(0);
}