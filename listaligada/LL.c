#include "LL.h"
#include <stdio.h>
#include <stdlib.h>

Celula llCriaCelula(int chave){
    Celula nova = (Celula)malloc(sizeof(Celula));
    nova->chave = chave;
    nova->prox = NULL;

    return nova;
}

Celula llAddCelula(Celula novaCelula, Celula cabeca){
    if(cabeca == NULL){
        return novaCelula;
    }

    cabeca->prox = llAddCelula(novaCelula, cabeca->prox);
    return cabeca;
}

void llImprime(Celula cabeca){
    for(Celula aux = cabeca; aux != NULL; aux = aux->prox){
        printf("->%d", aux->chave);
    }
}

int main(){
    Celula c = llCriaCelula(10);
    llAddCelula(llCriaCelula(20), c);
    llAddCelula(llCriaCelula(30), c);
    llAddCelula(llCriaCelula(40), c);

    llImprime(c);
}