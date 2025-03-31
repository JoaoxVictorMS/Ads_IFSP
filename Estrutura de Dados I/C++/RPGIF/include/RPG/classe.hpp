#pragma once
#include <iostream>
#include <string>
#include "atributos.hpp"
#include "sangramento.hpp"
using namespace std;
struct Classe {
  string Nome;
  string Descricao;
  struct Atributos atributo;
  int atqesp;
  struct Sangramento sangramento;
};
struct Classe classes[] = {
  {
    "Cavaleiro", "Essa classe é a principal responsável por desempenhar o papel de tank devido a alta resistência",{
     .VID = 100, .ATQ = 30, .DEF = 80 
    }, 60,
    {
      .qtd_sangue = 8, .turnos = 4
    }
  },
  {
    "Arqueiro", "Esta classe é responsável por causar dano ao inimigos, porém não possui muita resistência",{
    .VID = 100, .ATQ = 45, .DEF = 40  
    }, 90, 
    {
      .qtd_sangue = 10, .turnos = 2 
    }
  },
  {
    "Mago", " Assim como Arqueiros, sempre atacam de longe e evitam estar perto do perigo. Costumam ser indispensáveis em grupos pela capacidade insana de dano, mas também possuem alta dependência por outras classes que segurem o tranco para eles.",{
    .VID = 100, .ATQ = 60, .DEF = 30
    }, 120,
    {
      .qtd_sangue = 8, .turnos = 3
    }
  },
  {
    "Assassino", " São classes com habilidades exclusivas de furtividade e geralmente causam dano absurdo e instantâneo. Apesar de não possuírem grande resistência, seu foco principal é não dar chance para os oponentes atacarem.",{
    .VID = 100, .ATQ = 90, .DEF = 10
    }, 180,
    {
      .qtd_sangue = 0, .turnos = 0 
    }
  },
  {
    "Clérigo", "São as famosas classes de suporte cujas habilidades são voltadas para o grupo como curas, buffs, expurgos de debuffs e ressurreições.",{
    .VID = 100, .ATQ = 10, .DEF = 15
    }, 20,
    {
      .qtd_sangue = 6, .turnos = 5
    }
  },
  {
    "Paladino", "Seu foco principal é a capacidade de tankar resultante da alta resistência e das habilidades de cura. Além disso, podem oferecer tipos de suporte diferentes de Sacerdotes como, por exemplo, o compartilhamento de dano e escudos de luz para a absorção de dano.",{
    .VID = 100, .ATQ = 40, .DEF = 90
    }, 80,
    {
      .qtd_sangue = 15, .turnos = 3
    }
  }
};

struct Atributos ObterAtributosPorNomeClasse(string nome){
  for(auto it: classes){
    if(it.Nome == nome){
      return it.atributo;
    }
  }
  return {0, 0, 0};
}
void imprimirClasses(){
	cout << "As classes disponíveis são: \n";
  for(int i=0; i<6; i++){
    cout << i+1 << " - " << classes[i].Nome << endl;
  }
  cout << endl;
}
int escolherClasse(){
  cout << "Digite o número da classe que deseja: ";
	int escolha;
	cin >> escolha;
	escolha--;
  cout << endl;
	return escolha;
}
