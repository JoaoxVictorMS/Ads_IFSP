#include <stdio.h>
#include<locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
  FILE *arquivo;
  arquivo = fopen("exemplo.txt", "r");

  if (arquivo==NULL){
    printf("Arquivo não encontrado");
    return 1;
    
  } else {
    //printf("Arquivo encontrado!!!");
  }

  char linha[100];
  while(fgets(linha, sizeof(linha), arquivo) != NULL) {
    printf("%s", linha);
  };

  fclose(arquivo);
  
  
return 0;
  
}
