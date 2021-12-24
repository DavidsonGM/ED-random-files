#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char mencao[3];
    char *nome;
} Aluno;

Aluno* aloca_vetor_alunos(unsigned int tamanho, unsigned int tamanho_nome) {
    int i;
   Aluno *ptr = malloc(sizeof(Aluno) * tamanho);
   if(ptr == NULL)
    return NULL;
   for(i = 0; i < tamanho; i++){
       ptr[i].nome = malloc(sizeof(char) * tamanho_nome);
       if(ptr[i].nome == NULL)
        return NULL;
   }
   return ptr;
}

void libera_vetor_alunos(Aluno** ptr_ptr, unsigned int tamanho) {
    int i;
    for(i = 0; i < tamanho; i++){
        if(ptr_ptr[i]->nome != NULL){
        free(ptr_ptr[i]->nome);
        ptr_ptr[i]->nome = NULL;
        }
    }
    if(*ptr_ptr != NULL){
        free(*ptr_ptr);
        *ptr_ptr = NULL;
    }
}

int main(){
    int n = 3, tn = 4;

    Aluno *ptr = aloca_vetor_alunos(n, tn);
    libera_vetor_alunos(&ptr, n);

    return 0;
}
