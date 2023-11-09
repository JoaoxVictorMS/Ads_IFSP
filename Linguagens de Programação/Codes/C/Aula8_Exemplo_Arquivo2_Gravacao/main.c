#include <stdio.h>

int main() {
  FILE *arquivo;
  arquivo = fopen("saida.txt","w");

  if(arquivo==NULL){
    printf("Arquivo não encontrado");
    return 1;
  }
  int idade = 27;
  fprintf(arquivo, "IFSP Catanduva\n");
  fprintf(arquivo, "A idade e: %d\n",idade);
  fputs("Outra linha...\n", arquivo);

  fclose(arquivo);

 
  return 0;
}
