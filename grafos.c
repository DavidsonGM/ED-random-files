#include <stdio.h>
#include <stdbool.h>
#define TAMANHO 100

/* Define a estrutura da informação relevante. */
typedef struct {
    int dia, mes, ano;
    char descricao[50];
} data_t;

/* Define a estrutura do vértice. */
typedef struct {
    char chave;
    data_t data;
} vertice_t;


typedef struct {
    char vertices[TAMANHO];
    unsigned int arestas[TAMANHO][TAMANHO];
    unsigned int ordem;
} grafo_t;


/* Retorna o ponteiro para o vértice identificado pela chave, caso exista, NULL caso contrário.
vertice_t* vertice(grafo_t* g, char chave) {
    printf("%c\n", (char) chave);
    if(!g || !(char)chave)
        return NULL;
    else{
        for(int i = 0; i < TAMANHO; i++){
            if(g->vertices[i].chave == chave)
                return &(g->vertices[i]);
        }
   }
   return NULL;
}*/

/* Retorna o índice do vértice no vetor, caso exista, -1 caso contrário. */
int idx_vertice(grafo_t* g, char v) {

    if(g){
        for(int i = 0; i < TAMANHO; i++){
            if(g->vertices[i] == v)
                return i;
        }
    }
        return -1;
}
int grau_de_entrada(grafo_t* g, char vertice) {
    int n = 0;
    int d = idx_vertice(g, vertice);
    if(!g || !(char)vertice || d == -1)
        return 0;

    for(int i = 0; i < TAMANHO; i++){
        if(g->arestas[i][d] != 0)
            n++;
    }
    return n;
}
_Bool aresta(grafo_t* grafo, char origem, char destino){
    int o = idx_vertice(grafo, origem), d = idx_vertice(grafo, destino);
    if(!grafo || o == -1 || d == -1)
        return false;
    grafo->arestas[o][d] = 1;
    grafo->arestas[d][o] = 1;
    return true;
}
int main(){
    grafo_t grafo;
    for(int i = 0; i < TAMANHO; i++){
        for(int j = 0; j < TAMANHO; j++){
            grafo.arestas[i][j] = 0;
        }
    }

    return 0;

}
