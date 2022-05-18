#ifndef LL_DOT_H
#define LL_DOT_H

typedef struct no
{
    int chave;

    struct no * prox;
}No;
typedef No* Celula;

/*
    @brief Adiciona uma nova celula a lista
    @param novaCelula Celula a ser adicionada a lista
    @param cabeca Celula que representa a lista
*/
Celula llAddCelula(Celula novaCelula, Celula cabeca);
/*
    @brief Cria uma celula nova
    @param valor Chave que vai ser atribuida a celula
    @return Retorna a nova celula
*/
Celula llCriaCelula(int chave);
/*
    @brief Imprima a lista ligada
    @param cabeca Celula que representa o começo da lista
*/
void llImprime(Celula cabeca);
/*
    @brief Retorna o elemento de maior valor contido na lista
    @param cabeca Celula que representa o começo da lista
    @return Retorna a celula com o maior elemento da lista
*/
Celula llMaiorElemento(Celula cabeca);

/*
    @brief Impime o elemento de menor valor contido na lista
    @param cabeca Celula que representa o começo da lista
    @return Retorna a celula com o menor elemento da lista
*/
Celula llMenorElemento(Celula cabeca);

#endif