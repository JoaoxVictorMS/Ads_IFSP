#include <iostream>
using namespace std;

struct No {
  int chave;
  No *prox;
};

// Retorna o ponteiro para o primeiro elemento com o valor "int chave" 
No* busca(No* cabeca, int chave){
  No* pAnt;
  No* pAtual = cabeca; // O nó atual recebe a cabeça: Aponta pra cabeça
  // Enquanto a o ponteiro cabeça (que é o atual) não for nulo e o valor da chave for diferente, a cabeça apontará para o próximo nó
  while((pAtual != nullptr) && pAtual->chave != chave){
    pAnt = pAtual;
    pAtual = pAtual->prox;
  }
  return pAnt;
}
// push na pilha // t->prox = novo - fila
void insereNo(No **cabeca, No* novo){
  novo->prox = *cabeca;
  *cabeca = novo; // Cabeça aponta para o novo nó que vai ser inserido
}

// Dois ponteiros para a cabeça serve para manipular o ponteiro da cabeça
// O parâmetro noAnterior é o retorno da função busca
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
  No* n0 = criaNo(7);
  No* n1 = criaNo(2);
  No* n2 = criaNo(32);
  No* n3 = criaNo(9);


  No *cabeca = nullptr;

  No* noaremover;

  // Insere os nós criados para a lista encadeada - sempre head
  insereNo(&cabeca, n0);
  insereNo(&cabeca, n1);
  insereNo(&cabeca, n2);
  insereNo(&cabeca, n3);

  // Imprime a lista
  imprimeLista(cabeca);

  noaremover = busca(cabeca, 2);
  removeNo(&cabeca, noaremover);

  imprimeLista(cabeca);
  
  
  
  

}