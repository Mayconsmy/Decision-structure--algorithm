#include <stdio.h>
#include <locale.h>
/*Um feirista vende suas ma�as a R$ 1,30 por unidade, se forem compradas menos de
uma d�zia, e a R$ 1,10 por unidade, se forem compradas pelo menos uma d�zia.
Sabendo disso, crie um programa que solicita e l� a quantidade de ma�as desejadas,
calcula e informa o pre�o a ser pago pelo cliente, considerando os pre�os definidos
anteriormente.*/

int main(){
	setlocale(LC_ALL,"portuguese");
	float n1;  
	printf("Informe quantas ma��s foram compradas: ");
	scanf("%f",&n1);
	if(n1 < 12){
		printf("Voc� deve pagar: %.2f$",n1 * 1.3);
	}
	else{
		printf("Voc� deve pagar: %.2f$",n1 * 1.1);
	}
	return(0);
}