/*********************************************

            Complexidade O(n^2)

**********************************************/

#include <iostream>
 
struct PedaçoPizza{
    int calabreso;
    int cebolo;
};
struct Nó{
    PedaçoPizza pp;  
    int soma;
    Nó *próximo;
};
void maximizeSeq(Nó* cabeça, int quantidade){
    int contagem = quantidade;
    Nó* atual = cabeça;
    int soma = 0;
    Nó* antigo = cabeça;
    while(atual && contagem){
        PedaçoPizza pp = atual->pp;
        soma += pp.calabreso - pp.cebolo;
        contagem--;
        atual = atual->próximo;
    }
    while(atual){
        if(contagem > 1) break;
        PedaçoPizza pp = atual->pp;
        soma += pp.calabreso - pp.cebolo;
        pp = antigo->pp;
        soma -= pp.calabreso - pp.cebolo;
        atual->soma = soma;
        atual = atual->próximo;
        antigo = antigo->próximo;
        if(cabeça == atual) {
            contagem++;
        }
    }
}
void Imprime(Nó* cabeça){
    Nó* atual = cabeça;
    while(atual){
        std::cout << "Calabreso:" << atual->pp.calabreso << "\n";
        std::cout << "Cebolo:" << atual->pp.cebolo << "\n";
        std::cout << "Diferença:" << atual->soma << "\n";
         std::cout <<std::endl;
        if(atual->próximo == cabeça) break;
        atual = atual->próximo;
    }
    std::cout <<std::endl;
}
void Insere(Nó* cabeça, Nó* novo){
    Nó* atual = cabeça;
    while(atual){
        if(atual->próximo == cabeça) break;
        atual = atual->próximo;
    }
    novo->próximo = cabeça;
    atual->próximo = novo;
}
Nó* NovoPedaço(){
   auto n = new Nó;
   n->pp = {rand()%8, rand()%11};
   n->próximo = n;
   n->soma = 0;
   return n;
}
Nó* NovaPitiza(int num_pedaços){
    Nó* cabeça = NovoPedaço();
    for(int i = 0; i < num_pedaços - 1; i++){
        Insere(cabeça, NovoPedaço());
    }
    return cabeça;
}
int main()
{
    auto p = NovaPitiza(8);
    maximizeSeq(p, 3);
    Imprime(p);
    return 0;
}