#include <iostream>
#include <cstdlib>  
#include <ctime>    

void Merge(int *lista, int comeco, int meio, int fim, int &comps, int &trocas) {
    int i, j, k;
    // Comprimento da lista da Esquerda (Esquerda[comeco .... meio])
    int ComprimentoListaEsquerda = meio - comeco + 1;
    // Comprimento da lista da Direita (Direita[meio+1 .... fim])
    int ComprimentoListaDireita = fim - meio;
    
    // Declaracao da lista da Esquerda passando o ComprimentoListaEsquerda; TEMPORÁRIO
    int Esquerda[ComprimentoListaEsquerda];
    // Declaracao da lista da Direita passando o ComprimentoListaDireita; TEMPORÁRIO
    int Direita[ComprimentoListaDireita];
    
    // Copiando os dados para os vetores temporários Esquerda e Direita
    for(int i = 0; i < ComprimentoListaEsquerda; i++) {
        Esquerda[i] = lista[comeco + i];
    }
    for(int j = 0; j < ComprimentoListaDireita; j++) {
        Direita[j] = lista[meio + 1 + j];
    }
    
    // Índices iniciais de Esquerda e Direita
    int indiceInicialEsquerda = 0, indiceInicialDireita = 0;
    
    // Índice inicial do subvetor mesclado
    int indiceInicialSubvetorMesclado = comeco;
    
    // Enquanto Esquerda e Direita tiverem elementos não mesclados
    while(indiceInicialEsquerda < ComprimentoListaEsquerda && indiceInicialDireita < ComprimentoListaDireita) {
        comps++; // Incrementa comparações
        if(Esquerda[indiceInicialEsquerda] <= Direita[indiceInicialDireita]) {
            lista[indiceInicialSubvetorMesclado] = Esquerda[indiceInicialEsquerda];
            indiceInicialEsquerda++;
        } else {
            lista[indiceInicialSubvetorMesclado] = Direita[indiceInicialDireita];
            indiceInicialDireita++;
            trocas++; // Incrementa trocas
        }
        indiceInicialSubvetorMesclado++;
    }
    
    // Copia o restante da Esquerda, se houver
    while(indiceInicialEsquerda < ComprimentoListaEsquerda) {
        lista[indiceInicialSubvetorMesclado] = Esquerda[indiceInicialEsquerda];
        indiceInicialEsquerda++;
        indiceInicialSubvetorMesclado++;
    }
    
    // Copia o restante da Direita, se houver
    while(indiceInicialDireita < ComprimentoListaDireita) {
        lista[indiceInicialSubvetorMesclado] = Direita[indiceInicialDireita];
        indiceInicialDireita++;
        indiceInicialSubvetorMesclado++;
    }
}

void MergeSort(int *lista, int comeco, int fim, int &comps, int &trocas) {
    // SE HÁ MAIS DE UM ELEMENTO
    if(comeco < fim) {
        // Cálculo do ponto médio
        int meio = (comeco + fim) / 2;
        // Ordena recursivamente o primeiro subvetor (Esquerda)
        MergeSort(lista, comeco, meio, comps, trocas);
        // Ordena recursivamente o segundo subvetor (Direita)
        MergeSort(lista, meio + 1, fim, comps, trocas);
        // Combina o primeiro subvetor com o segundo subvetor (Esquerda com Direita)
        Merge(lista, comeco, meio, fim, comps, trocas);
    }
}

int main() {
    constexpr int n = 6; 
    int lista[n] = {1, 2, 3, 6, 5, 4};
    int comps = 0, trocas = 0;
    

    /*
    srand(time(0));
    // Preencher a lista com números aleatórios entre 1 e 1000
    for (int i = 0; i < n; i++) {
        lista[i] = rand() % 1000000 + 1;
    }
    */
    
    

    
    MergeSort(lista, 0, n - 1, comps, trocas);
    
    
    std::cout << "Elementos ordenados: ";
    for (int i = 0; i < n; i++) {
        std::cout << lista[i] << " ";
    }
    std::cout << std::endl;
    
    
    std::cout << "Quantidade de comparacoes: " << comps << std::endl;
    std::cout << "Quantidade de trocas: " << trocas << std::endl;

    return 0;
}
