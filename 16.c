#include <stdio.h>

int imprime1(int n, int m, int mat[3][3]);
int imprime2(int mat[3][3], int n, int m);
int imprime3(int n, int mat[3][3], int m);

int main() {

  const int n = 3;
  const int m = 3;

  int c=0;
  int i, j, mat[n][m];

  for(i=0; i<n; i++) {
    for(j=0; j<n; j++) {
      mat[i][j] = c;
      c++;
    }
  }

  //como fica?
  imprime1(n, m, mat);
  imprime2(mat, n, m);
  imprime3(n, mat, m);

  return(0);
}

int imprime1(int n, int m, int mat[3][3]) {

  int i, j;

  for(i=0; i<n; i++)
    for(j=0; j<n; j++)
      printf("%d\n", mat[i][j]);
  printf("\n");
}

int imprime2(int mat[3][3], int n, int m) {

  int i, j;

  for(i=0; i<n; i++)
    for(j=0; j<n; j++)
      printf("%d\n", mat[i][j]);
  printf("\n");

}

int imprime3(int n, int mat[3][3], int m) {

  int i, j;

  for(i=0; i<n; i++)
    for(j=0; j<n; j++)
      printf("%d\n", mat[i][j]);
  printf("\n");

}