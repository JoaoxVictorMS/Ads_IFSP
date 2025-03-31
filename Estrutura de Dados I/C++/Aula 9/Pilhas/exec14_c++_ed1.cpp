#include <iostream>

using namespace std;
constexpr int tamanho = 5;
int pilha[tamanho];
int itens_na_pilha = 0;
int escolha = 1;
int num;


bool push(int num) {
    if (itens_na_pilha == tamanho) {
        cout << "Não há espaço na pilha!" << endl;
        return false;
    }
    pilha[itens_na_pilha] = num;
    itens_na_pilha++;
    return true;
}

bool pop() {
    if (itens_na_pilha == 0) {
        cout << "A pilha está vazia!" << endl;
        return false;
    }
    itens_na_pilha--;
    return true;
}

int get() {
    if (itens_na_pilha == 0) {
        cout << "A pilha está vazia!" << endl;
        return -1; // Valor padrão quando a pilha está vazia
    }
    return pilha[itens_na_pilha - 1];
}


int main() {

  while (escolha == 1) {
    cout << "Deseja adiconar algum número na pilha?" << endl;
    cout << "1 - SIM, 2 - Não" << endl;
    cin >> escolha;
    if (escolha == 1) {
      cout << "Insira o número que deseja inserir: ";
      cin >> num;
      push(num);
    }
  }
    
  cout << "Conteúdo da pilha:" << endl;
  for (int i = 0; i < tamanho; i++) {
      int item = get();
      if (item != -1) {
          cout << "Item " << i + 1 << " : " << item << endl;
          pop();
      } else {
          break;
      }
  }
}

