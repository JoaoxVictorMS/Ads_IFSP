#include <stdio.h>

int main() {
  FILE *arquivo;
  arquivo = fopen("saida.txt", "w"); // "w" significa write. "r" significa read
 
  if(arquivo==NULL){
    printf("Arquivo não encontrado!");
    return 1;
  }
  int idade = 19;
  fprintf(arquivo, "IFSP, Campus Catanduva\n");
  fprintf(arquivo, "Minha idade é: %d\n", idade);
  fputs("Outra linha...\n", arquivo);
  fclose(arquivo);

  return 0;
}
