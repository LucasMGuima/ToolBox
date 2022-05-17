#ifndef AVL_DOT_H
#define AVL_DOT_H

/*
    @brief Imprime os vizinhos do vertex entrado como parametro,
    @param indexVertex Index que representam o vertex.
    @param matrixAdjacencia Matriz que representa as ligações entres os nós
    @param qtdVertex Quantida de nós contidos no grafo
*/
void grafoImprimeVizinho(int indexVertex, int qtdVertex, int matrizAdjacencia[qtdVertex][qtdVertex]);

#endif