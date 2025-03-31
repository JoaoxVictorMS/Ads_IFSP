#include <iostream>

// Estrutura do nó da árvore
struct No {
    int chave;         // Valor do nó
    No* esquerdo;      // Ponteiro para o filho esquerdo
    No* direito;       // Ponteiro para o filho direito
};

// Função para criar um novo nó
No* criarNo(int chave) {
    No* novoNo = new No();
    novoNo->chave = chave;
    novoNo->esquerdo = nullptr;
    novoNo->direito = nullptr;
    return novoNo;
}

// Função para inserir um nó na árvore (recursiva)
No* inserir(No* raiz, int chave) {
    // Caso base: se a raiz for nula, cria um novo nó
    if (raiz == nullptr) {
        return criarNo(chave);
    }

    // Inserção à esquerda se a chave for menor que a raiz
    if (chave < raiz->chave) {
        raiz->esquerdo = inserir(raiz->esquerdo, chave);
    }
    // Inserção à direita se a chave for maior que a raiz
    else if (chave > raiz->chave) {
        raiz->direito = inserir(raiz->direito, chave);
    }

    // Retorna a raiz sem alteração se a chave já existir
    return raiz;
}

// Função para buscar um nó na árvore (recursiva)
No* buscar(No* raiz, int chave) {
    // Caso base: a raiz é nula ou a chave é encontrada
    if (raiz == nullptr || raiz->chave == chave) {
        return raiz;
    }

    // Busca à esquerda se a chave for menor que a raiz
    if (chave < raiz->chave) {
        return buscar(raiz->esquerdo, chave);
    }

    // Busca à direita se a chave for maior que a raiz
    return buscar(raiz->direito, chave);
}

// Função para encontrar o nó com o menor valor (recursiva)
No* encontrarMinimo(No* raiz) {
    // Caso base: o nó mais à esquerda é o menor
    if (raiz == nullptr) {
        return nullptr;
    }
    if (raiz->esquerdo == nullptr) {
        return raiz;
    }
    return encontrarMinimo(raiz->esquerdo);
}

// Função para encontrar o nó com o maior valor (recursiva)
No* encontrarMaximo(No* raiz) {
    // Caso base: o nó mais à direita é o maior
    if (raiz == nullptr) {
        return nullptr;
    }
    if (raiz->direito == nullptr) {
        return raiz;
    }
    return encontrarMaximo(raiz->direito);
}

// Função para encontrar o sucessor de uma chave k
No* encontrarSucessor(No* raiz, int chave) {
    No* atual = buscar(raiz, chave); // Encontra o nó com a chave k
    if (atual == nullptr) {
        return nullptr; // A chave k não está na árvore
    }

    // Caso 1: O sucessor está no subárvore direita
    if (atual->direito != nullptr) {
        return encontrarMinimo(atual->direito);
    }

    // Caso 2: Subir na árvore até encontrar o sucessor
    No* sucessor = nullptr;
    No* ancestral = raiz;
    while (ancestral != atual) {
        if (chave < ancestral->chave) {
            sucessor = ancestral; // Atualiza o sucessor
            ancestral = ancestral->esquerdo;
        } else {
            ancestral = ancestral->direito;
        }
    }
    return sucessor;
}

// Função para encontrar o predecessor de uma chave k
No* encontrarPredecessor(No* raiz, int chave) {
    No* atual = buscar(raiz, chave); // Encontra o nó com a chave k
    if (atual == nullptr) {
        return nullptr; // A chave k não está na árvore
    }

    // Caso 1: O predecessor está no subárvore esquerda
    if (atual->esquerdo != nullptr) {
        return encontrarMaximo(atual->esquerdo);
    }

    // Caso 2: Subir na árvore até encontrar o predecessor
    No* predecessor = nullptr;
    No* ancestral = raiz;
    while (ancestral != atual) {
        if (chave > ancestral->chave) {
            predecessor = ancestral; // Atualiza o predecessor
            ancestral = ancestral->direito;
        } else {
            ancestral = ancestral->esquerdo;
        }
    }
    return predecessor;
}

// Função para exibir a árvore em ordem (simétrica)
void emOrdem(No* raiz) {
    if (raiz != nullptr) {
        emOrdem(raiz->esquerdo); // Visita a subárvore esquerda
        std::cout << raiz->chave << " "; // Exibe a chave do nó
        emOrdem(raiz->direito); // Visita a subárvore direita
    }
}

int main() {
    No* raiz = nullptr;

    // Inserindo elementos na árvore
    raiz = inserir(raiz, 50);
    raiz = inserir(raiz, 30);
    raiz = inserir(raiz, 70);
    raiz = inserir(raiz, 20);
    raiz = inserir(raiz, 40);
    raiz = inserir(raiz, 60);
    raiz = inserir(raiz, 80);

    std::cout << "Árvore em ordem: ";
    emOrdem(raiz);
    std::cout << std::endl;

    // Encontrar mínimo e máximo
    No* minimo = encontrarMinimo(raiz);
    No* maximo = encontrarMaximo(raiz);
    if (minimo != nullptr) {
        std::cout << "Menor valor: " << minimo->chave << std::endl;
    } else {
        std::cout << "A árvore está vazia." << std::endl;
    }

    if (maximo != nullptr) {
        std::cout << "Maior valor: " << maximo->chave << std::endl;
    } else {
        std::cout << "A árvore está vazia." << std::endl;
    }

    // Encontrar sucessor e predecessor
    int chave = 50;
    No* sucessor = encontrarSucessor(raiz, chave);
    No* predecessor = encontrarPredecessor(raiz, chave);

    if (sucessor != nullptr) {
        std::cout << "Sucessor de " << chave << ": " << sucessor->chave << std::endl;
    } else {
        std::cout << "Não há sucessor para a chave " << chave << "." << std::endl;
    }

    if (predecessor != nullptr) {
        std::cout << "Predecessor de " << chave << ": " << predecessor->chave << std::endl;
    } else {
        std::cout << "Não há predecessor para a chave " << chave << "." << std::endl;
    }

    return 0;
}
