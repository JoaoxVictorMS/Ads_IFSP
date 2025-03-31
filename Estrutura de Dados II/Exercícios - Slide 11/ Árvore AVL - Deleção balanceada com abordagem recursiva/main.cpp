#include <iostream>

// Estrutura do nó da Árvore AVL
struct NoAVL {
    int chave;          // Valor do nó
    NoAVL* esquerdo;    // Ponteiro para o filho esquerdo
    NoAVL* direito;     // Ponteiro para o filho direito
    int altura;         // Altura do nó para cálculo do balanceamento
};

// Função para criar um novo nó
NoAVL* criarNo(int chave) {
    NoAVL* novoNo = new NoAVL();
    novoNo->chave = chave;
    novoNo->esquerdo = nullptr;
    novoNo->direito = nullptr;
    novoNo->altura = 1; // Altura inicial é 1 (folha)
    return novoNo;
}

// Função para calcular a altura de um nó
int altura(NoAVL* no) {
    if (no != nullptr) {
        return no->altura;
    }
    return 0;
}

// Função para calcular o fator de balanceamento de um nó
int fatorBalanceamento(NoAVL* no) {
    if (no == nullptr) {
        return 0;
    }
    return altura(no->esquerdo) - altura(no->direito);
}

// Atualiza a altura de um nó
void atualizarAltura(NoAVL* no) {
    if (no != nullptr) {
        int alturaEsquerda = altura(no->esquerdo);
        int alturaDireita = altura(no->direito);
        if (alturaEsquerda > alturaDireita) {
            no->altura = 1 + alturaEsquerda;
        } else {
            no->altura = 1 + alturaDireita;
        }
    }
}

// Rotação à direita
NoAVL* rotacaoDireita(NoAVL* y) {
    NoAVL* x = y->esquerdo; // Novo nó raiz
    NoAVL* T2 = x->direito; // Subárvore à direita de x

    // Realiza a rotação
    x->direito = y;
    y->esquerdo = T2;

    // Atualiza as alturas
    atualizarAltura(y);
    atualizarAltura(x);

    return x; // Nova raiz da subárvore
}

// Rotação à esquerda
NoAVL* rotacaoEsquerda(NoAVL* x) {
    NoAVL* y = x->direito; // Novo nó raiz
    NoAVL* T2 = y->esquerdo; // Subárvore à esquerda de y

    // Realiza a rotação
    y->esquerdo = x;
    x->direito = T2;

    // Atualiza as alturas
    atualizarAltura(x);
    atualizarAltura(y);

    return y; // Nova raiz da subárvore
}

// Rebalancear subárvore
NoAVL* rebalancearSubarvore(NoAVL* raiz) {
    // Atualiza a altura do nó atual
    atualizarAltura(raiz);

    // Calcula o fator de balanceamento
    int balance = fatorBalanceamento(raiz);

    // Caso 1: Desbalanceamento à esquerda (esquerda-esquerda)
    if (balance > 1 && fatorBalanceamento(raiz->esquerdo) >= 0) {
        return rotacaoDireita(raiz);
    }

    // Caso 2: Desbalanceamento à direita (direita-direita)
    if (balance < -1 && fatorBalanceamento(raiz->direito) <= 0) {
        return rotacaoEsquerda(raiz);
    }

    // Caso 3: Desbalanceamento esquerda-direita
    if (balance > 1 && fatorBalanceamento(raiz->esquerdo) < 0) {
        raiz->esquerdo = rotacaoEsquerda(raiz->esquerdo);
        return rotacaoDireita(raiz);
    }

    // Caso 4: Desbalanceamento direita-esquerda
    if (balance < -1 && fatorBalanceamento(raiz->direito) > 0) {
        raiz->direito = rotacaoDireita(raiz->direito);
        return rotacaoEsquerda(raiz);
    }

    return raiz; // Se balanceada, retorna a raiz original
}

// Função para encontrar o menor valor em uma subárvore
NoAVL* encontrarMinimo(NoAVL* raiz) {
    while (raiz != nullptr && raiz->esquerdo != nullptr) {
        raiz = raiz->esquerdo;
    }
    return raiz;
}

// Função para deletar um nó na Árvore AVL
NoAVL* deletarNo(NoAVL* raiz, int chave) {
    // Passo 1: Realizar a deleção normal de BST
    if (raiz == nullptr) {
        return raiz; // Nó não encontrado
    }

    if (chave < raiz->chave) {
        // A chave está na subárvore esquerda
        raiz->esquerdo = deletarNo(raiz->esquerdo, chave);
    } else if (chave > raiz->chave) {
        // A chave está na subárvore direita
        raiz->direito = deletarNo(raiz->direito, chave);
    } else {
        // Nó encontrado
        if (raiz->esquerdo == nullptr && raiz->direito == nullptr) {
            // Caso 1: Nó sem filhos
            delete raiz;
            raiz = nullptr;
        } else if (raiz->esquerdo == nullptr) {
            // Caso 2: Nó com apenas filho direito
            NoAVL* temp = raiz->direito;
            delete raiz;
            raiz = temp;
        } else if (raiz->direito == nullptr) {
            // Caso 3: Nó com apenas filho esquerdo
            NoAVL* temp = raiz->esquerdo;
            delete raiz;
            raiz = temp;
        } else {
            // Caso 4: Nó com dois filhos
            NoAVL* sucessor = encontrarMinimo(raiz->direito);
            raiz->chave = sucessor->chave;
            raiz->direito = deletarNo(raiz->direito, sucessor->chave);
        }
    }

    // Passo 2: Rebalancear a árvore
    if (raiz != nullptr) {
        raiz = rebalancearSubarvore(raiz);
    }
    return raiz;
}

// Inserção balanceada em uma Árvore AVL
NoAVL* inserirAVL(NoAVL* raiz, int chave) {
    // Passo 1: Inserção normal de BST
    if (raiz == nullptr) {
        return criarNo(chave);
    }

    if (chave < raiz->chave) {
        raiz->esquerdo = inserirAVL(raiz->esquerdo, chave);
    } else if (chave > raiz->chave) {
        raiz->direito = inserirAVL(raiz->direito, chave);
    } else {
        return raiz; // Não permite duplicatas
    }

    // Passo 2: Rebalancear a subárvore
    return rebalancearSubarvore(raiz);
}

// Função para exibir a árvore em ordem (simétrica)
void emOrdem(NoAVL* raiz) {
    if (raiz != nullptr) {
        emOrdem(raiz->esquerdo); // Visita a subárvore esquerda
        std::cout << raiz->chave << " "; // Exibe a chave do nó
        emOrdem(raiz->direito); // Visita a subárvore direita
    }
}

int main() {
    NoAVL* raiz = nullptr;

    // Inserindo elementos na árvore AVL
    raiz = inserirAVL(raiz, 10);
    raiz = inserirAVL(raiz, 20);
    raiz = inserirAVL(raiz, 30);
    raiz = inserirAVL(raiz, 40);
    raiz = inserirAVL(raiz, 50);
    raiz = inserirAVL(raiz, 25);

    std::cout << "Árvore AVL em ordem: ";
    emOrdem(raiz);
    std::cout << std::endl;

    // Deletando elementos
    raiz = deletarNo(raiz, 40);
    raiz = deletarNo(raiz, 50);

    std::cout << "Árvore AVL após deleções: ";
    emOrdem(raiz);
    std::cout << std::endl;

    return 0;
}
