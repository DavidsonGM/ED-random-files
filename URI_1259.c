#include <stdio.h>
#include <stdlib.h>

int comparador(const void *a, const void *b) {
   return ( *(int*)a - *(int*)b );
}

int main(){

    int n, i;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    qsort(a, n, sizeof(int), comparador);

    for( i = 0 ; i < n; i++){
        if(a[i]%2 == 0)
            printf("%d\n", a[i]);
    }
    for( i = n ; i >= 0; i--){
        if(a[i]%2 != 0)
            printf("%d\n", a[i]);
    }
          return 0;
}
