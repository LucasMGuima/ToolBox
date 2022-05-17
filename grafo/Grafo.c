#include <stdlib.h>
#include <time.h>

#include "Grafo.h"

int gerarNumero(int variacao){
    return rand() % variacao; //varia entre 0 e o valor entrado de variacao 
}

int main(){
    time_t hora;
    srand(time(&hora));
    
    int op;
    do{
        printf("1 -> Ver vizinhos. \n0 -> Sair.\n> ");
        scanf("%d", &op);

        switch (op)
        {
            case 1:
                int qtdVertex;
                printf("Entre com o quantidade de vertex do grafo: ");
                scanf("%d", &qtdVertex);
                int matrixAdijacencia[qtdVertex][qtdVertex];

                //gera os valores de adjacência.
                for(int i = 0; i < qtdVertex; i++){
                    for(int j = 0; j < qtdVertex; j++){
                        matrixAdijacencia[i][j] = gerarNumero(2);
                    }
                }

                //mostra amatriz de adjacencia formada
                for(int i = 0; i < qtdVertex; i++){
                    for(int j = 0; j < qtdVertex; j++){
                        printf("%d ", matrixAdijacencia[i][j]);
                    }
                    printf("\n");
                }

                int vertice;
                printf("Entre com a vertice a ver os vizinhos:");
                scanf("%d", &vertice);
                grafoImprimeVizinho(vertice, qtdVertex, matrixAdijacencia);
            break;
        }
    }while (op != 0);
}

void grafoImprimeVizinho(int indexVertex, int qtdVertex ,int matrizAdjacencia[qtdVertex][qtdVertex]){
    printf("Viznhos de %d:", indexVertex);
    for(int j = 0; j < qtdVertex; j++){
        if(matrizAdjacencia[indexVertex][j] == 1){
            printf("%d ", j);
        }
    }
    printf("\n");
}