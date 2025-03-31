#include <iostream>
using namespace std;

struct No {
  int chave;
  No *prox;
};

// push na pilha // t->prox = novo - fila
void push(No **topo, No* novo){
  novo->prox = *topo;
  *topo = novo; // Cabeça aponta para o novo nó que vai ser inserido
}

// Pop // Dois ponteiros para a cabeça serve para manipular o ponteiro da cabeça
void pop(No** topo) {
  *topo = (*topo)->prox;
}

// O Nó em si é apenas dados
// Os ponteiros são usados para manipula-los
No* criaNo(int chave){
  No* novo = new No; // Aloca dinamicamente o novo nó
  novo->chave = chave; // Atribui a chave do parâmetro para a chave do nó
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
  No* n0 = criaNo(7);
  No* n1 = criaNo(2);
  No* n2 = criaNo(32);
  No* n3 = criaNo(9);


  No *topo = nullptr;


  // Insere os nós criados para a lista encadeada - sempre head
  push(&topo, n0);
  push(&topo, n1);
  push(&topo, n2);
  push(&topo, n3);

  // Imprime a lista
  imprimeLista(topo);

  pop(&topo);

  imprimeLista(topo);





}