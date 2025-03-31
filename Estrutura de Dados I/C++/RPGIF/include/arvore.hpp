#pragma once
#include <vector>
#include <RPG/personagem.hpp>
struct Item{
    struct Personagem* personagem; /*Ponteiro do tipo struct Personagem que aponta para o personagem*/
    struct Item* galho1; /*Ponteiro do tipo struct Item que aponta para o galho 1*/
    struct Item* galho2; /*Ponteiro do tipo struct Item que aponta para o galho 2*/
};
struct Item raiz_blocoA; /*Variável do tipo struct Item que representa a raiz da árvore A (Bloco A)*/
struct Item raiz_blocoB; /*Variável do tipo struct Item que representa a raiz da árvore B (Bloco B)*/
void criaArvore(struct Item* raiz, int camada) { // Função que cria as árvores dos blocos A e B. Parâmetro: Ponteiro para o Item ()
    if(camada > 3) return; /*Condição de parada: quando as tres camadas da árvore forem criadas (oitavas, quartas e semis)*/
    raiz->galho1 = new Item; /*Alocação dinâmica(new)*/
    raiz->galho2 = new Item; /*Alocação dinâmica(new)*/
    raiz->personagem = nullptr;
    camada++; /*Incrementa uma camada da árvore */
    criaArvore(raiz->galho1, camada); // Cria galho 1 através da raiz (recursividade)
    criaArvore(raiz->galho2, camada); // Cria galho 2 através da raiz (recursividade)
}
void cortaGalho(struct Item* raiz_do_galho){
    delete raiz_do_galho->galho1; /*Cortando galho: Liberação da memória*/
    delete raiz_do_galho->galho2; /*Cortando galho: Liberação da memória*/
}
void preencherComEspacos(string& str, int tamanhoMinimo) {
    int tamanhoAtual = str.length();
    if (tamanhoAtual < tamanhoMinimo) {
        str.append(tamanhoMinimo - tamanhoAtual, ' ');
    }
}
void ajustarTamanhoMaximo(string& str, int tamanhoMaximo) {
    if (str.length() > (size_t)tamanhoMaximo) {
        str.resize(tamanhoMaximo);
    }
}
void adicionarEspacosInicio(string& str, int tamanhoMinimo) {
    int tamanhoAtual = str.length();
    if (tamanhoAtual < tamanhoMinimo) {
        str.insert(0, tamanhoMinimo - tamanhoAtual, ' ');
    }
}
void AjustaTamanhoNome(string & nome){
    int tamanho = 22;
    ajustarTamanhoMaximo(nome, tamanho);
    preencherComEspacos(nome, tamanho);
    adicionarEspacosInicio(nome, tamanho + 4);
}
void ObtemNomes(struct Item* raiz, int maxcamada, int camada, vector<string>& nomes_personagens){
    if(maxcamada >= 4) return;
    
    if(maxcamada == camada){
        string tmp;
        if(raiz->personagem){
            tmp.append(raiz->personagem->nome);
            tmp.append("[");
            tmp.append(raiz->personagem->classe.Nome);
            tmp.append("]");
        }else{
            tmp.append("Indisponível");
        }
        AjustaTamanhoNome(tmp);
        nomes_personagens.push_back(tmp);
    }else{
        maxcamada++;
        ObtemNomes(raiz->galho1, maxcamada, camada, nomes_personagens);
        ObtemNomes(raiz->galho2, maxcamada, camada, nomes_personagens);
    }
}
void ImprimeArvore(struct Item* arvore, int camada){
    vector<string> nomes;
    ObtemNomes(arvore, 0, camada, nomes);
    int i = 0;
    for(auto it: nomes){
        cout << it << " ";
        if(i%2 == 0){
            cout << "x";
        }
        i++;
    }
    cout << endl;
}
void LutaCamada(struct Item* arvore, int profundidade, int camada){
    if(profundidade >= 4) return;
    profundidade++;
    if(profundidade == (camada)){
        if(arvore->galho1->personagem == personagemUsuario || arvore->galho2->personagem == personagemUsuario){
            int escolha;
            if(arvore->galho1->personagem == personagemUsuario){
                cout << "Seu oponente será:" << arvore->galho2->personagem->nome << endl;
            }else if(arvore->galho2->personagem == personagemUsuario){
                cout << "Seu oponente será:" << arvore->galho1->personagem->nome << endl;
            }
            cout << "Deseja lutar?" << endl;
            cout << "1 - Sim, 2 - Não: ";
            cin >> escolha;
            if(escolha == 2){
                return;
            }
        }
        int v = lutarPersonagens(arvore->galho1->personagem, arvore->galho2->personagem);
        if(v == 0){
            arvore->personagem = arvore->galho1->personagem;
        }else{
            arvore->personagem = arvore->galho2->personagem;
        }
        cortaGalho(arvore);
    }else if(profundidade < 4){
        LutaCamada(arvore->galho1, profundidade, camada);
        LutaCamada(arvore->galho2, profundidade , camada);
    }
}
void LutaEmArvore(struct Item *arvore, int profundidade){
    if(profundidade >= 5){
        return;
    }
    if(arvore->galho1->personagem != nullptr && arvore->galho2->personagem != nullptr){
        if(arvore->galho1->personagem == personagemUsuario || arvore->galho2->personagem == personagemUsuario){
            ImprimeArvore(&raiz_blocoA, profundidade);
            ImprimeArvore(&raiz_blocoB, profundidade);
        }
        int personagemV = lutarPersonagens(arvore->galho1->personagem, arvore->galho2->personagem);
        if(personagemV == 0){
            arvore->personagem = arvore->galho1->personagem;
        }else{
            arvore->personagem = arvore->galho2->personagem;
        }
    }else if(arvore->galho1->personagem == nullptr && arvore->galho2->personagem == nullptr){
        LutaEmArvore(arvore->galho1, profundidade+1);
        LutaEmArvore(arvore->galho2, profundidade+1);
        LutaEmArvore(arvore, profundidade+1);
        
        cortaGalho(arvore);
    }else{
        if(arvore->galho1->personagem == nullptr){
            LutaEmArvore(arvore->galho1, profundidade+1);
        }else if(arvore->galho2->personagem ==  nullptr){
            LutaEmArvore(arvore->galho2, profundidade+1);
        }
    }
}