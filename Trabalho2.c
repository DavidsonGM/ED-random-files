#include <stdio.h>

typedef struct no{
    char data;
    struct no *q1, *q2, *q3, *q4;
}no;

no *cria_arvore(char data){
    no *raiz = (no *)malloc(sizeof(no));
    if(!raiz)
        return NULL;
    raiz->dado = data;
    raiz->q1 = NULL;
    raiz->q2 = NULL;
    raiz->q3 = NULL;
    raiz->q4 = NULL;
    return raiz;
}

no *insere(no* raiz, char data){
    if(!raiz)
        return cria_arvore(data);
    if(!q1)
        raiz->q1 = insere(raiz->q1, data);
    else if(!q2)
        raiz->q2 = insere(raiz->q2, data);
    else if(!q3)
        raiz->q3 = insere(raiz->q3, data);
    else if(!q4)
        raiz->q4 = insere(raiz->q4, data);
    if(raiz->dado >= data)
        raiz->esq = insere(raiz->esq, data);
    else
        raiz->dir = insere(raiz->dir, data);
    return raiz;
}






int main(){}
