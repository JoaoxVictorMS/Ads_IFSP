#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char nome[50];
  float nota;
} Estudante;

int main() {
  int i;
  Estudante estudantes[3];

  strcpy(estudantes[0].nome,"Leonardo");
  estudantes[0].nota = 5.5;
  
  strcpy(estudantes[1].nome,"Yago");
  estudantes[1].nota = 8.5;
  
  strcpy(estudantes[2].nome,"Jhonatan");
  estudantes[2].nota = 9.2;

  FILE *arquivo = fopen("estudantes.dat","wb");
  fwrite(estudantes,sizeof(Estudante), 3, arquivo);
  
  fclose(arquivo);

  //LEITURA:
  arquivo = fopen("estudantes.dat","rb");

  Estudante estudantes_r[3];
  fread(estudantes_r,sizeof(Estudante),3,arquivo);
  fclose(arquivo);

  for(i=0; i<3; i++){
    printf("Nome: %s, Nota: %.2f\n",estudantes_r[i].nome, estudantes_r[i].nota);
  }
 
  return 0;
}
