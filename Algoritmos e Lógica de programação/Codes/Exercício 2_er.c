#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int i, soma=0;
    
      setlocale(LC_ALL,"Portuguese");
      for (i = 0; i < 10; i = i + 1){
         soma = soma + (i*i);
      }
         printf("A soma é igual: %d\n", soma);

    return 0;
}
