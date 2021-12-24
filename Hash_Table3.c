#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM_MAX 1000
#define TAM_NOME 20

typedef struct {
    unsigned int num_elementos;
    char dados[TAM_MAX][TAM_NOME];
} Tab_disp_str;

int hash(int chave){
    return(chave%1000);
}

/* Retorna o endereço do dado, se existir, NULL caso contrário. */
char *busca(Tab_disp_str* tabela, int chave) {
    int i = hash(chave);
        if(tabela->dados[i] == NULL)
        return NULL;
    else
        return
            tabela->dados[i];
}

int main(){
    Tab_disp_str tab_disp_str;// = malloc(sizeof(Tab_disp_str));
    strcpy(tab_disp_str.dados[hash(928)], "Jhon");
    /*tab_disp_str->dados[hash(324)] = "Jose";
    tab_disp_str->dados[hash(613)] = "Marco";
    tab_disp_str->dados[hash(261)] = "ashe";
    tab_disp_str->dados[hash(835)] = "pablo";
    tab_disp_str->dados[hash(741)] = "david";
    tab_disp_str->dados[hash(93)] = "jao";
    tab_disp_str->dados[hash(743)] = "kleber";
    tab_disp_str->dados[hash(888)] = "Juninho";
    tab_disp_str->dados[hash(921)] = "Josefino";
    tab_disp_str->dados[hash(18)] = "carlos";*/

        if(busca(&tab_disp_str, 918)!= NULL)
            printf("%s\n", busca(&tab_disp_str, 918));
        else
            printf("chave nao está associada a nenhum elemento\n");

    return 0;

}
