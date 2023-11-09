#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>

typedef struct{
	int dia;
	int mes;
	int ano;
}DataNasc;

typedef struct{
	DataNasc datanasc;
	int idade;
	char sexo;
	char nome[100];
}Pessoa;


Pessoa lerDadosPessoa(){
	Pessoa pessoa;
	printf("***** Seja bem vindo ao BytePerson! *****\n\n");
	printf("\nDigite seu nome: ");
	fgets(pessoa.nome, 100, stdin);
	printf("\nDigite sua idade: ");
	scanf("%d", &pessoa.idade);
	scanf("%c");
	printf("\nDigite seu sexo, f para feminio e m para masculino: ");
	scanf("%c", &pessoa.sexo);
	printf("\nDigite sua data de nasicmento(dd/mm/aaaa): ");
	scanf("%d%d%d", &pessoa.datanasc.dia, &pessoa.datanasc.mes, &pessoa.datanasc.ano);
	scanf("%c");
	return pessoa;
}

void imprimeDadosPessoa(Pessoa pessoa){
	printf("\nSeu nome: %s", pessoa.nome);
	printf("\nSua idade: %d", pessoa.idade);
	printf("\nSeu sexo: %c", pessoa.sexo);
	printf("\nSua data de nascimento: %d/%d/%d\n\n", pessoa.datanasc.dia, pessoa.datanasc.mes, pessoa.datanasc.ano)	;
}

int main(){
	setlocale(LC_ALL, "Portuguese");

	Pessoa pessoas[2][2];

	pessoas[0][0] = lerDadosPessoa(); // Os dados da pessoa são armazenados na matriz pessoas

	imprimeDadosPessoa(pessoas[0][0]); // Imprime os dados da pessoa, passando a variável que guarda os dados como parâmetro

	return 0;
}




















