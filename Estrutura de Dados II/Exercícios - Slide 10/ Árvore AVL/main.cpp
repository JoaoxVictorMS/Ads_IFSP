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

    return 0;
}
