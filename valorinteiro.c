#include <stdio.h>
#include <locale.h>
/*Escreva um programa que solicita e lê um valor inteiro e informa se ele é positivo,
negativo ou neutro.*/

int main(){
	setlocale(LC_ALL,"portuguese");
	int x;
	printf("informe um valor inteiro: ");
	scanf("%d",&x);
	if (x > 0){
	  	printf("o número %d é positivo", x);
	}
	else if (x < 0){
		printf("o número %d é negativo", x);
	}
	else{
		printf("o número %d é neutro", x);
	}
	return(0);
}