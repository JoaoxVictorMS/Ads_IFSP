#pragma once
#include <string>
using namespace std;
#include "sangramento.hpp"
struct Ataque{
  string descricao;
  int dano;
  int tipo;
  struct Sangramento sangue;
};