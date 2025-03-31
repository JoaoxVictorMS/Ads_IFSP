#include <stdio.h>
#include <iostream>
int buscaBinaria(int lista[], int MenorIndexLista, int MaiorIndexLista, int ItemABuscar){
    
    int IndexCentral = (MenorIndexLista + MaiorIndexLista) / 2; // Encontrar o meio
    if(MaiorIndexLista - MenorIndexLista <= 1){
        return -1;
    }
    if(lista[IndexCentral] == ItemABuscar){
        return IndexCentral;
    } 
    
    int MenorIndexLista2 = IndexCentral + 1;
    int MaiorIndexLista1 = IndexCentral - 1;
    int save1 = buscaBinaria(lista, MenorIndexLista, MaiorIndexLista1, ItemABuscar);
    if(save1 != -1) return save1;
    int save2 = buscaBinaria(lista, MenorIndexLista2, MaiorIndexLista, ItemABuscar);
    return save2;
};


int main(){

    int listaOrdenada[] = {10, 15, 20, 25, 30 , 35, 40};
    int x = 35;
    
    int resultado = buscaBinaria(listaOrdenada, 0, 8, x);
    if(resultado == -1){
        std::cout << "Elemento não está na lista";
    } 
    else {
        std::cout << "Elemento está na lista na posicao: " << resultado + 1;
    }
    std::cout << std::endl;
    return 0;
}