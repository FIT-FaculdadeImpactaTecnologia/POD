/**
* @author Wilder Pereira
* Mostrar grafo da imagem show_graph_img
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    //Matriz do grafo:
    //int grafo [6][6]= {{ 0, 1, 0, 0, 1, 0},  { 1, 0, 1, 0, 1, 0},{ 0, 1, 0, 1, 0, 0},{ 0, 0, 1, 0, 1, 1},{ 1, 1, 0, 1, 0, 0},{ 0, 0, 0, 1, 0, 0}};

    //Matriz do digrafo (Como se a vértice 2 fosse a origem e 1 destino):
    int grafo [6][6]= {{ 0, 0, 0, 0, 1, 0},  { 1, 0, 1, 0, 1, 0},{ 0, 1, 0, 1, 0, 0},{ 0, 0, 1, 0, 1, 1},{ 1, 1, 0, 1, 0, 0},{ 0, 0, 0, 1, 0, 0}};
    int ehDigrafo = 0;
    
    int i, j;
    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            if(grafo[i][j] == 1)
                printf("%d - %d\n",i+1,j+1);
        }
    }
    
     for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            if((grafo[i][j] == 1 && grafo[j][i] == 0) || (grafo[j][i] == 1 && grafo[i][j] == 0))
                
                ehDigrafo = 1;
        }
    }
    
    if(ehDigrafo == 0)
       printf("Eh grafo");
    else
       printf("Eh digrafo");
    
    
    getch();
    return 0;
}
