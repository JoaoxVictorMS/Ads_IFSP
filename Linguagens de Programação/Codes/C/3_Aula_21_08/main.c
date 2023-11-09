#include <stdio.h>
#include <stdio.h>
#include <string.h>

typedef struct {
  char nome[50];
  float nota;

} Estudante; // Quando for necessário referenciar esta struct no código, basta escrever Estudante, sem precisar ficar colocando o struct na frente, graças ao typedef

int main() {
  Estudante estudantes[3]; // = struct Estudante estudantes


  //********************************ESCRITA*******************************************
  strcpy(estudantes[0].nome, "João");
  estudantes[0].nota = 9.5;

  strcpy(estudantes[1].nome, "Pedro");
  estudantes[1].nota = 1.0;

  strcpy(estudantes[2].nome, "Marcia");
  estudantes[2].nota = 10.0;

  

  FILE *arquivo = fopen("estudantes.dat","wb"); // "wb" significa write e binary
  fwrite(estudantes,sizeof(Estudante), 3, arquivo);
  fclose(arquivo);

  //*********************************LEITURA*****************************************
  arquivo = fopen("estudantes.dat", "rb"); // "rb" significa read e binary

  Estudante estudantes_leitura[3];
  fread(estudantes_leitura, sizeof(Estudante), 3,arquivo); // Lê o file, referencia onde armazena, qual o tamanho, as 3 posições, referência  de onde está sendo pegado
  fclose(arquivo);

  for(int i=0; i<3; i++){
    printf("Nome: %s, Nota: %.2f\n", estudantes_leitura[i].nome,  estudantes_leitura[i].nota);
  }
  

  return 0;
}
