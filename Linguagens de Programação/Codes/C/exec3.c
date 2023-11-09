#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dados_pessoa {
    char nome[50];
    char cpf[50];
    int rg;
    int conta_criada;
};

struct dados_conta {
    float saldo;
    float deposito;
    float saque;
};

int main() {
    float result;

    struct dados_pessoa pessoa;
    struct dados_conta conta;
    char pick;

    setlocale(LC_ALL, "Portuguese");

    pessoa.conta_criada = 0; // Inicialmente, o usuário não tem conta criada

jump2:

    printf("\n---------- Seja bem vindo ao ByteBank! -----------\n\n");
    printf("\nEscolha o que deseja fazer digitando o número correspondente à opção:\n\n");
    printf("1 - Criar conta\n2 - Depositar dinheiro\n3 - Consultar saldo\n4 - Sacar dinheiro  \n5 - Consultar seus dados pessoais");
    printf("\nDigite o número da sua opção: ");
    int PICK;
    scanf("%d", &PICK);

    switch (PICK) {
        case 1:
            printf("\n---------- Cadastro da conta -----------\n\n");
            printf("---------- Informe seus dados -----------\n\n");
            printf("Nome: ");
            scanf(" %[^\n]s", pessoa.nome);
            printf("RG: ");
            scanf("%d", &pessoa.rg);
            printf("CPF: ");
            scanf("%s", pessoa.cpf);
            printf("\nCriando conta...\n");
            printf("\nConta criada!\n");
            pessoa.conta_criada = 1;
            break;

        case 2:
            if (pessoa.conta_criada != 1) {
                printf("\nVocê precisa criar uma conta primeiro!\n");
                goto jump2;
            }
            printf("\n---------- Efetuar depósito -----------\n\n");
            printf("Digite o valor que deseja depositar em sua conta: ");
            scanf("%f", &conta.deposito);
            conta.saldo += conta.deposito;
            printf("\nRealizando depósito...\n");
            printf("Depósito efetuado!\n");
            break;

        case 3:
            if (pessoa.conta_criada != 1) {
                printf("\nVocê precisa criar uma conta primeiro!\n");
                goto jump2;
            }
            printf("\n---------- Consulta de saldo -----------\n\n");
            printf("Seu saldo é de: %.2f\n", conta.saldo);
            break;

        case 4:
            if (pessoa.conta_criada != 1) {
                printf("\nVocê precisa criar uma conta primeiro!\n");
                goto jump2;
            }
            printf("\n---------- Efetuar saque -----------\n\n");
            printf("Digite o valor que deseja sacar de sua conta: ");
            scanf("%f", &conta.saque);
            if (conta.saque <= conta.saldo) {
                conta.saldo -= conta.saque;
                printf("\nEfetuando saque...\n");
                printf("Saque efetuado!\n");
            } else {
                printf("\nSaldo insuficiente!\n");
            }
            break;
            
        case 5:
        	if (pessoa.conta_criada != 1) {
                printf("\nVocê precisa criar uma conta primeiro!\n");
                goto jump2;
            }
        	printf("\n\n --------- Dados cadastrais ---------\n\n");
			printf("\nNome: %s", pessoa.nome);
			printf("\nRG: %d", pessoa.rg);
			printf("\nCPF: %d" , pessoa.cpf);
            goto jump2;
}

    if (pessoa.conta_criada == 1) {
        do {
            printf("\nDeseja continuar (C) ou sair (S)? ");
            scanf(" %c", &pick);

            if (pick == 'S' || pick == 's') {
                printf("\nSaindo do bytebank...\n");
                break;
            } else if (pick == 'C' || pick == 'c') {
                printf("\nContinuando...\n");
                goto jump2;
            } else {
                printf("Opção inválida. Por favor, digite C para continuar ou S para sair.\n");
            }
        } while (1);
    } else {
        printf("\nVocê não criou uma conta. Saindo do bytebank...\n");
    }

    return 0;
}

