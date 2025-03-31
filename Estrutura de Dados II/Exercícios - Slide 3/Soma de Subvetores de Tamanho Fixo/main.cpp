#include <iostream>
using namespace std;

void calculaSoma(int *vetor, int n, int k) 
{ 
    // Inicializando soma = 0
    int soma = 0; 

    // Guardando a soma dos elementos do primeiro sub-array de tamanho k
    for (int i = 0; i < k; i++) 
        soma += vetor[i]; 

    // Printa a soma atual
    cout << soma << " "; 

    // Para cada sub-array de tamanho k, remove o primeiro elemento e adiciona o elemento atual à "janela"
    for (int i = k; i < n; i++) { 
        
        // Atualiza a soma removendo o elemento que sai da "janela" e adicionando o que entra
        soma = soma - vetor[i - k] + vetor[i]; 
        
        // Printa a soma do sub-array
        cout << soma << " "; 
    } 
} 

int main() 
{ 
    int vetor[] = { 1, 2, 3, 4, 5, 6 }; 
    int n = sizeof(vetor) / sizeof(vetor[0]); 
    int k = 3; 
    
    calculaSoma(vetor, n, k); 

    return 0; 
}
