#include <iostream>
using namespace std;

struct No {
  int chave;
  No *ant, *prox;
};

// Retorna o ponteiro para o primeiro elemento com o valor "int chave" 
No* busca(No* cabeca, int chave){
  No* atual = cabeca; // O nó atual recebe a cabeça
  // Enquanto a o ponteiro cabeça (que é o atual) não for nulo e o valor chave não for chave, a cabeça apontará para o próximo nó
  while((atual != nullptr) && atual->chave != chave) 
    atual = atual->prox;
  return atual;
}

void insereNo(No **cabeca, No* novo){
  novo->prox = *cabeca;
  if(*cabeca != nullptr)
    (*cabeca)->ant = novo;
  *cabeca = novo;
  novo->ant = nullptr;
}

// Dois ponteiros para a cabeça serve para manipular o ponteiro da cabeça
void removeNo(No** cabeca, No* noARemover) {
  if(noARemover->ant != nullptr) // Se não é a cabeça
    noARemover->ant->prox = noARemover->prox;
  else
    *cabeca = noARemover->prox;
  if(noARemover->prox != nullptr)
    noARemover->prox->ant = noARemover->ant;
}

// O Nó em si é apenas dados
// Os ponteiros são usados para manipula-los
No* criaNo(int chave){
  No* novo = new No; // Aloca dinamicamente o novo nó
  novo->chave = chave; // Atribui a chave do parâmetro para a chave do nó
  novo->ant=nullptr; // Atribui um ponteiro nulo para o *ant do nó
  novo->prox=nullptr; //Atribui um ponteiro nulo para o *prox do nó
  return novo;
}

void imprimeLista(No *cabeca) {
  while(cabeca != nullptr){
    cout << cabeca->chave << " ";
    cabeca = cabeca->prox;
  }
  cout << endl;
}


int main() {
  // Cria 4 nós passando a chave - Armazena o retorno nas variáveis
  No* n0 = criaNo(1);
  No* n1 = criaNo(2);
  No* n2 = criaNo(3);
  No* n3 = criaNo(4);

  
  No *cabeca = nullptr;
  
  No* noaremover;

  // Insere os nós criados para a lista encadeada
  insereNo(&cabeca, n0);
  insereNo(&cabeca, n1);
  insereNo(&cabeca, n2);
  insereNo(&cabeca, n3);

  // Imprime a lista
  imprimeLista(cabeca);

  // Remove nó da lista
  removeNo(&cabeca, n2);

  // Imprime a lista
  imprimeLista(cabeca);

  // Recebe o retorno de busca
  noaremover = busca(cabeca,1);
  // Passa essa variável "noaremover" como parâmetro parar a função remove nó
  removeNo(&cabeca, noaremover);

  // Imprime a lista
  imprimeLista(cabeca);
  
}