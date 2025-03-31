#include <iostream>
#include <locale.h>
#include <stdlib.h>
using namespace std;
#include <RPG/classe.hpp>
#include <RPG/personagem.hpp>
#include <arvore.hpp>
#include <random.hpp>
#include <time.h>
/*
Esolher classe v
Escolher nome v
Criar jogadores v
Apresentar Chaveamento v
Esperar jogador confirmar para entrar v

Turno Decidio Aleatroriamente v
  Perguntar que quer desferir ataque v
   se sim desfira v
   caso contrário, 50% proximo turno ataque especial v
   testa caso de sangramento v
  Calcular dano v
  Avançar turno caso não tenha exedido o limite v

Tornar vencedor quem ficou com mais vida v
  Caso igual, lutem denovo v
 
Apresente novo chaveamento v
  Se usuario ganhou, novo jogo v
  caso contrário, fim de jogo v
  Assim que sobrar apenas um vencedor, o jogo deve exibir as seguintes informações referentes ao
  personagem campeão do torneio: VID, ATQ, DEF, arquétipos dos personagens que derrotou no torneio
  (acessando o personagem derrotado e não apenas o seu nome), dano total causado, dano total sofrido,
  maior dano causado em um round, maior dano recebido em um round. X
*/

int main() {
  set_seed(time(0));
  setlocale(LC_ALL,"");
  imprimirClasses();
  int escolha = escolherClasse();
  struct Personagem personagens[16] = {};
  personagemUsuario = &personagens[0];
  for(int i = 1; i < 16; i++){
    personagens[i].nome.clear();
    personagens[i].nome.append("Jogador");
    personagens[i].nome.append(to_string(i));
    personagens[i].classe = classes[random()%6];
  }
  personagens[0] =  nomearPersonagem();
  personagemRecebeClasse(&personagens[0], escolha); // Atribuindo classe escolhida ao personagem do usuário
  criaArvore(&raiz_blocoA, 0); // Criando árvore do bloco A
  raiz_blocoA.galho1->galho1->galho1->personagem = &personagens[0]; // Início: Personagem 1 ao 8
  raiz_blocoA.galho1->galho1->galho2->personagem = &personagens[1]; 
  raiz_blocoA.galho1->galho2->galho1->personagem = &personagens[2];
  raiz_blocoA.galho1->galho2->galho2->personagem = &personagens[3];
  raiz_blocoA.galho2->galho1->galho1->personagem = &personagens[4];
  raiz_blocoA.galho2->galho1->galho2->personagem = &personagens[5];
  raiz_blocoA.galho2->galho2->galho1->personagem = &personagens[6];
  raiz_blocoA.galho2->galho2->galho2->personagem = &personagens[7]; // Fim
  criaArvore(&raiz_blocoB, 0); // Criando árvore do bloco B
  raiz_blocoB.galho1->galho1->galho1->personagem = &personagens[0+8]; // Início: Personagem 9 ao 16
  raiz_blocoB.galho1->galho1->galho2->personagem = &personagens[1+8];
  raiz_blocoB.galho1->galho2->galho1->personagem = &personagens[2+8];
  raiz_blocoB.galho1->galho2->galho2->personagem = &personagens[3+8];
  raiz_blocoB.galho2->galho1->galho1->personagem = &personagens[4+8];
  raiz_blocoB.galho2->galho1->galho2->personagem = &personagens[5+8];
  raiz_blocoB.galho2->galho2->galho1->personagem = &personagens[6+8];
  raiz_blocoB.galho2->galho2->galho2->personagem = &personagens[7+8]; // Fim
  int camada = 0;
  while(camada < 3){
    ImprimeArvore(&raiz_blocoA, 3-camada);
    LutaCamada(&raiz_blocoA, 0, 3-camada);
    LutaCamada(&raiz_blocoB, 0, 3-camada);
    camada++;
  }
    if(raiz_blocoA.personagem == &personagens[0]){
      cout << "Venceu o bloco A";
      if(lutarPersonagens(raiz_blocoA.personagem, raiz_blocoB.personagem) == 0){
        cout << "Você ganhou o torneio" << endl;
        MostraListaDerrotados(raiz_blocoA.personagem);
      }else{
        cout << "Você perdeu o torneio";
        MostraListaDerrotados(raiz_blocoB.personagem);
    }
    }else{
      cout << "Você perdeu o torneio";
      MostraListaDerrotados(raiz_blocoA.personagem);
    }
  
  std::cin.get();
  std::cin.get();
  return 0;
  
}