#pragma once
struct Sangramento {
  int qtd_sangue;
  int turnos;
  Sangramento operator+=(struct Sangramento s){
    this->qtd_sangue = (this->qtd_sangue >= s.qtd_sangue) ? this->qtd_sangue: s.qtd_sangue;
    this->turnos += s.turnos;
    return (*this);
  }
};