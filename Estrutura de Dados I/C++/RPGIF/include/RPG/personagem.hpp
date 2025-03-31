#pragma once
#include <vector>
#include "sangramento.hpp"
#include "atributos.hpp"
#include "classe.hpp"
#include <random.hpp>
#include <time.h>

struct Personagem {
  string nome;
  vector < struct Personagem* > listDERR;
  struct Sangramento sangue;
  struct Classe classe;
};

struct Personagem nomearPersonagem(){
  struct Personagem personagem{};
  cout << "Insira o nome do personagem: ";
  cin >> personagem.nome;
  return personagem;
}
static struct Personagem *personagemUsuario;
void personagemRecebeClasse(struct Personagem *pp, int escolha){
	pp -> classe = classes[escolha];
}
int realizaAcao(struct Personagem* p){
  if(p->sangue.turnos > 0){
    p->classe.atributo.VID -= p->sangue.qtd_sangue;
    p->sangue.turnos--;
  }
  int escolha;
  if(p == personagemUsuario){
    cout << "Deseja atacar nesse turno?" << endl;
    cout << "1 - Sim, 2 - Não: ";
    cin >> escolha;
    if(escolha == 1){
      return p->classe.atributo.ATQ;
    } else {
      return 0;
    }
  }else{
    int aleatorio = random()%75453; //0.00001 - 1 , 0.5
    return ((float)aleatorio/75452.0f > (float)50.0/100.0) ? p->classe.atributo.ATQ: 0;
  }
}
void recebeAtaque(struct Personagem* p, int atq, struct Sangramento s){
    int dano = atq * (1.0 - ((float)p->classe.atributo.DEF/ 200.0));
    p->classe.atributo.VID -= dano;
    p->sangue += s;
}
int fazerTurno(int turno, struct Personagem *p0, struct Personagem *p1, int& p0ae, int& p1ae){ // p0aq e p1ae definem se um personagem tem chance de atache especial
  if(p0 == personagemUsuario || p1 == personagemUsuario){
    cout << "Vida de " <<  p0->nome <<  " é " << p0->classe.atributo.VID << " e a de " << p1->nome <<" é " << p1->classe.atributo.VID << endl;
  }
  if (turno == 1){
    int atq = realizaAcao(p1); 
    if(p1ae == 1){
      int aleatorio = random()%75453; //0.00001 - 1 , 0.5
      if((float)aleatorio/75452.0f > (float)50.0/100.0){
        atq = p1->classe.atqesp;
        if(p0 == personagemUsuario || p1 == personagemUsuario){
          cout << "Jogador " << p1->nome << " desfere ataque especial." << endl;
        }
      }
      p1ae = 0;
    }
    recebeAtaque(p0, atq, p1->classe.sangramento);
    return (atq > 0)? 1: -1;
  } else if(turno == 0){
    int atq = realizaAcao(p0);
    if(p0ae == 1){
      int aleatorio = random()%75453;
      if ((float)aleatorio/75452.0f > (float)50.0/100.0){
        atq = p0->classe.atqesp;
        if(p0 == personagemUsuario || p1 == personagemUsuario){
          cout << "Jogador " << p0->nome << " desfere ataque especial." << endl;
        }
      }
     p0ae = 0;
    }
    recebeAtaque(p1, atq, p0->classe.sangramento);
    return (atq > 0)? 0: -1;
  }
  return -1;
}
int lutarPersonagens(struct Personagem *p0, struct Personagem *p1){
    p1->classe.atributo = ObterAtributosPorNomeClasse(p1->classe.Nome); // reset de vida
    p0->classe.atributo = ObterAtributosPorNomeClasse(p0->classe.Nome); // reset de vida
  //máximo 10 por personagem
    int rodadas = 20; 
    //define semente aleatória
    int aleatorio = random()%34952; //0 - 34591 0-1
    int turno = aleatorio%2;
    int atq_especial_p0 = 0;
    int atq_especial_p1 = 0;
    while(rodadas > 0){
      int pqna = fazerTurno(turno, p0, p1, atq_especial_p0, atq_especial_p1); // pqna = Personagem que não atacou
      if(pqna == 0){
        atq_especial_p0 = 1;
      }
      if(pqna == 1){
        atq_especial_p1 =  1;
      }
      //testa quem perdeu
      if(p0->classe.atributo.VID <= 0){
          p1->listDERR.push_back(p0);
          return 1;
      }else if(p1->classe.atributo.VID <= 0){
          p0->listDERR.push_back(p1);
          return 0;
      }
      //inverte personagem por turno
      turno = turno ^ 1;
      //decrementa rodadas
      rodadas--;
    }
    //testa quem tem maior vida ao acabarem os turnos
    if(p0->classe.atributo.VID < p1->classe.atributo.VID){
        p1->listDERR.push_back(p0);
        return 1;
    }else if (p0->classe.atributo.VID > p1->classe.atributo.VID){
        p0->listDERR.push_back(p1);
        return 0;
    }
    if(p0 == personagemUsuario || p1 == personagemUsuario){
      cout << "Não houve vencedor, lutem de novo!" << endl;
    }
    //se vida for igual lutem de novo
    return lutarPersonagens(p0, p1);
  }
void MostraListaDerrotados(struct Personagem *p){
  cout << endl;
  cout << "Jogador " << p->nome << "[" << p->classe.Nome <<"] ganhou e ficou com " << p->classe.atributo.VID << " de vida enquanto possui "<< p->classe.atributo.DEF << " e "<<p->classe.atributo.ATQ << " de defesa e ataque respectivamente." << endl;
  for(auto it: p->listDERR){
    cout << "Nome: " << it->nome << "["<< it->classe.Nome <<"]" << endl;
  }
  cout << endl;
}