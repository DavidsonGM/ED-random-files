#include <stdio.h>

//definindo estrutura 2d
struct ponto2d {
  float x, y;
};

//definindo estrutura 3d
struct ponto3d {
  float x, y, z;
};

int main() {

  struct ponto2d p2d;
  struct ponto3d p3d;

  p2d.x = 2;
  p2d.y = 2;

  p3d.x = 3;
  p3d.y = 3;
  p3d.z = 3;

  printf("Ponto 2d: %.2f,%.2f\n", p2d.x, p2d.y);
  printf("Ponto 3d: %.2f,%.2f,%.2f\n", p3d.x, p3d.y, p3d.z);

  return(0);
}