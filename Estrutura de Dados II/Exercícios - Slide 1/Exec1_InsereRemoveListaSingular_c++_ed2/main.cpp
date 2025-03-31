#include <iostream>
using namespace std;

struct No {
  int chave;
  No *prox;
};

// Retorna o ponteiro para o primeiro elemento com o valor "int chave" 
No* busca(No* cabeca, int chave){
  No* pAlvo;
  No* pAtual = cabeca; // O nó atual recebe a cabeça: Aponta pra cabeça
  // Enquanto a o ponteiro cabeça (que é o atual) não for nulo e o valor da chave for diferente, a cabeça apontará para o próximo nó
  while((pAtual != nullptr) && pAtual->chave != chave){
    pAlvo = pAtual;
    pAtual = pAtual->prox;
  }
  return pAlvo;
}
// push na pilha // t->prox = novo - fila
void insereNo(No **cabeca, No* novo){
  novo->prox = *cabeca;
  *cabeca = novo; // Cabeça aponta para o novo nó que vai ser inserido
}

// Dois ponteiros para a cabeça serve para manipular o ponteiro da cabeça
void removeNo(No** cabeca, No* noAnterior) {
  if(noAnterior->prox != nullptr)
    noAnterior->prox = noAnterior->prox->prox;
  else
    *cabeca = noAnterior->prox;
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
  No* n0 = criaNo(1);
  No* n1 = criaNo(2);
  No* n2 = criaNo(3);
  No* n3 = criaNo(4);

  // Mais 4 nós
  No* n4 = criaNo(5);
  No* n5 = criaNo(6);
  No* n6 = criaNo(7);
  No* n7 = criaNo(8);

  No *cabeca = nullptr;

  No* noaremover;

  // Insere os nós criados para a lista encadeada - sempre head
  insereNo(&cabeca, n0);
  insereNo(&cabeca, n1);
  insereNo(&cabeca, n2);
  insereNo(&cabeca, n3);

  insereNo(&cabeca, n4);
  insereNo(&cabeca, n5);
  insereNo(&cabeca, n6);
  insereNo(&cabeca, n7);

  // Imprime a lista
  imprimeLista(cabeca);

  noaremover = busca(cabeca, 1);
  removeNo(&cabeca, noaremover);

  imprimeLista(cabeca);

  noaremover = busca(cabeca, 2);
  removeNo(&cabeca, noaremover);

  imprimeLista(cabeca);

  noaremover = busca(cabeca, 3);
  removeNo(&cabeca, noaremover);

  imprimeLista(cabeca);

  noaremover = busca(cabeca, 4);
  removeNo(&cabeca, noaremover);

  imprimeLista(cabeca);

  noaremover = busca(cabeca, 5);
  removeNo(&cabeca, noaremover);

  imprimeLista(cabeca);

  noaremover = busca(cabeca, 6);
  removeNo(&cabeca, noaremover);

  imprimeLista(cabeca);

  noaremover = busca(cabeca, 7);
  removeNo(&cabeca, noaremover);

  imprimeLista(cabeca);





}