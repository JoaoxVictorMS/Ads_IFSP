#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float result, c, f, k, r, re, n, d, ro;
	int PICK;
	
	printf("Digite uma temperatura em graus celcius:");
	scanf("%f", &c);
	
	printf("Informe qual unidade de medida deseja converter");
	printf("\n1 - Fahrenheit \n2 - Kelvin \n3 - Rankine  \n4 - Réaumur  \n5 - Newton  \n6 - Delisle  \n7 - Rømer");
	printf("\nDigite aqui sua opção: ");
	scanf("%d", &PICK);
	
	
	switch(PICK){
		
		case 1:
			f = (c * 9/5) + 32;
			result = f;
			printf("\nA temperatura informada convertida para Fahrenheit é: %6.2f", result);
			break;		
		case 2:
			k = c + 273.15;
			result = k;
			printf("\nA temperatura informada convertida para Kelvin é: %6.2f", result);
			break;
		case 3:
			r = (c + 273.15) * 9/5;
			result = r;
			printf("\nA temperatura informada convertida para Rankine é: %6.2f", result);
			break;
		case 4:
			re =  c * 9/5;
			result = re;
			printf("\nA temperatura informada convertida para Réaumur é: %6.2f", result);
			break;
		case 5:
			n = c * 33/100;
			result = n;
			printf("\nA temperatura informada convertida para Newton é: %6.2f", result);
			break;
		case 6:
			d = (100 - c * 3/2);
			result = d;
			printf("\nA temperatura informada convertida para Delisle é: %6.2f", result);
			break;
		case 7:
			ro = c * 21/40 + 7.5;
			result = ro;
			printf("\nA temperatura informada convertida para Rømer é: %6.2f", result);
			break;	
			
	}	
	return 0;	
}
