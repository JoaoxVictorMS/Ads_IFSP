#include <iostream>
using namespace std;
struct Disciplina{
  string nome;
  float nota;
};
struct Aluno{
  string nome;
  int idade;
  struct Disciplina disciplina[5];
};
struct Aluno alunos[10];
struct Disciplina disciplinas[5];
int posicao = 0;
int posicaoD = 0;
int CadastroAluno() {
  cout << "Você quer adicionar algum aluno?" << endl;
  cout << "1 - Sim, 2 - Não\nEscolha: ";
  int escolha;
  cin >> escolha;
  if(escolha == 1){
    struct Aluno aluno;
    struct Disciplina disciplina;
    cout << "Insira o nome do aluno: ";
    cin >> aluno.nome;
    cout << "Insira a idade deste aluno: ";
    cin >> aluno.idade;
    cout << "Insira a nota do aluno: ";
    cin >> disciplina.nota;
    cout << "Insira a matéria referente a este aluno: ";
    cin >> disciplina.nome;
    
    
    // Coloca os dados inseridos na lista alunos
    if(posicao < 10){
      alunos[posicao] = aluno;
      posicao++;
    } else {
      cout << "Não é possível cadastrar mais alunos!";
      return 0;
    }
    
    if(posicaoD < 5){
      disciplinas[posicaoD] = disciplina;
      posicaoD++;
    } else {
      cout << "Não é possível cadastrar mais disciplinas!";
      return 0;
    }
    return 1;
  }
  return 0;
}

int main(){
  int retorno = 0;
  do{
    retorno = CadastroAluno();
  } while(retorno == 1);
  for(int i = 0; i < posicao; i++){
    cout << "Nome do aluno: " << alunos[i].nome << endl;
    cout << "Idade do aluno: " << alunos[i].idade << endl;
    cout << "Nota do aluno: " << disciplinas[i].nota << endl;
    cout << "Disciplina da nota: " << disciplinas[i].nome << endl;
  }
}