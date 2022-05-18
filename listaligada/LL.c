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

Celula llMaiorElemento(Celula cabeca){
    if(cabeca->prox == NULL){
        return cabeca;
    }
    
    Celula maior = cabeca;
    for(Celula next = cabeca->prox; next != NULL; next = next->prox){
        if(maior->chave < next->chave){
            maior = next;
        }
    }
    return maior;
}

Celula llMenorElemento(Celula cabeca){
    if(cabeca->prox == NULL){
        return cabeca;
    }
    
    Celula menor = cabeca;
    for(Celula next = cabeca->prox; next != NULL; next = next->prox){
        if(menor->chave > next->chave){
            menor = next;
        }
    }
    return menor;
}