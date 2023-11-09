#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct {
  char usuario[50];
  char senha[50];
} Login;

int main() {
  Inicio:;
  setlocale(LC_ALL, "Portuguese");
  system("cls");
  
  Login login;
  printf("- - - - - - - LOGIN - - - - - - -\n\n\nUsuário: ");
  scanf("%s",login.usuario);
  printf("Senha: ");
  scanf("%s",login.senha);

  system("cls");

  FILE *arquivo = fopen("password.txt","r");
  char tmplinha[50], usuariotxt[50], senhatxt[50];
  int controle=0;
  while(fgets(tmplinha, sizeof(tmplinha), arquivo), controle <= 1){
    tmplinha[strcspn(tmplinha, "\n")] = 0;
    
    if(controle==0){
      strcpy(usuariotxt,tmplinha);      
    } else {
      strcpy(senhatxt,tmplinha);  
    }
    controle++;
  }
  fclose(arquivo);
  
  int usuario_verif = strcmp(usuariotxt,login.usuario);
  int senha_verif = strcmp(senhatxt,login.senha);

    if ((usuario_verif == 0) && (senha_verif == 0)) {
      Logado:;
      int escolha=0;
      printf("\n\n- - - - - - - ÁREA LOGADA - - - - - - -\n\n\n");
      printf("Escolha a ação desejada:\n\n1 - Trocar usuário\n2 - Trocar a Senha\n3 - Sair\n\n");
      scanf("%d",&escolha);  
	  
	  if (escolha==1){
	  	system("cls");
        char novouser[50];
        printf("\n\n- - - - - - - ÁREA LOGADA - TROCAR USUÁRIO - - - - - - -\n\n\n");
        printf("Informe o novo usuário:\n\n");
        scanf("%s",novouser);

        arquivo = fopen("password.txt","w");
        fprintf(arquivo, "%s\n%s",novouser,login.senha);
        fclose(arquivo);
        goto Inicio; 
	  		  	
	  } else if(escolha==2){
        system("cls");
        char novasenha[50];
        printf("\n\n- - - - - - - ÁREA LOGADA - TROCAR SENHA - - - - - - -\n\n\n");
        printf("Informe a nova senha:\n\n");
        scanf("%s",novasenha);

        arquivo = fopen("password.txt","w");
        fprintf(arquivo, "%s\n%s",login.usuario,novasenha);
        fclose(arquivo);
        goto Inicio;        
      } else if(escolha==3){
        goto Inicio;
      } else {
        system("cls");
        goto Logado;
      }
      
    } else {
        printf("Usuário e/ou senha inválido(s).\n");
        sleep(4);
        goto Inicio;
    }

/*
REPLIT

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char usuario[50];
  char senha[50];
} Login;

int main() {
  Inicio:;
  system("clear");
  
  Login login;
  printf("- - - - - - - LOGIN - - - - - - -\n\n\nUsuário: ");
  scanf("%s",login.usuario);
  printf("Senha: ");
  scanf("%s",login.senha);

  system("clear");

  FILE *arquivo = fopen("password.txt","r");
  char tmplinha[50], usuariotxt[50], senhatxt[50];
  int controle=0;
  while(fgets(tmplinha, sizeof(tmplinha), arquivo), controle <= 1){
    tmplinha[strcspn(tmplinha, "\n")] = 0;
    
    if(controle==0){
      strcpy(usuariotxt,tmplinha);      
    } else {
      strcpy(senhatxt,tmplinha);  
    }
    controle++;
  }
  fclose(arquivo);
  
  int usuario_verif = strcmp(usuariotxt,login.usuario);
  int senha_verif = strcmp(senhatxt,login.senha);

    if ((usuario_verif == 0) && (senha_verif == 0)) {
      Logado:;
      int escolha=0;
      printf("\n\n- - - - - - - ÁREA LOGADA - - - - - - -\n\n\n");
      printf("Escolha a ação desejada:\n\n1 - Trocar o usuário\n2 - Trocar a Senha\n3 - Sair\n\n");
      scanf("%d",&escolha);

      if(escolha==1){
        system("clear");
        char novouser[50];
        printf("\n\n- - - - - - - ÁREA LOGADA - TROCAR USUÁRIO - - - - - - -\n\n\n");
        printf("Informe o novo usuário:\n\n");
        scanf("%s",novouser);

        arquivo = fopen("password.txt","w");
        fprintf(arquivo, "%s\n%s",novouser,login.senha);
        fclose(arquivo);
        goto Inicio;
        
      } else if(escolha==2){
        system("clear");
        char novasenha[50];
        printf("\n\n- - - - - - - ÁREA LOGADA - TROCAR SENHA - - - - - - -\n\n\n");
        printf("Informe a nova senha:\n\n");
        scanf("%s",novasenha);

        arquivo = fopen("password.txt","w");
        fprintf(arquivo, "%s\n%s",login.usuario,novasenha);
        fclose(arquivo);
        goto Inicio;       
        
      } else if(escolha==3){
        goto Inicio;
      } else {
        system("clear");
        goto Logado;
      }
      
    } else {
        printf("Usuário e/ou senha inválido(s).\n");
        sleep(4);
        goto Inicio;
    }
  
  return 0;
}

}
*/
  
  return 0;
}
