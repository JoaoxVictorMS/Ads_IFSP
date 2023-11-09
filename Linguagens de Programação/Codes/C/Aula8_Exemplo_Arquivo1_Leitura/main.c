#include <stdio.h>

int main() {
  FILE *arquivo;
  arquivo = fopen("exemplo.txt","r");

  if(arquivo==NULL){
    printf("Arquivo não encontrado");
    return 1;
  } else {
    //printf("Arquivo encontrado!");
  }
  char linha[100];
  while(fgets(linha, sizeof(linha), arquivo) != NULL){
    printf("%s",linha);
  }
 
  fclose(arquivo);
  return 0;
}
