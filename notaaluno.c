#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");
float MP, MF, A1, A2, A3, AF;
printf("-----------------------------");
printf("\nInforme a sua primeira nota: ");
scanf("%f", &A1);
printf("\nInforme a sua segunda nota: ");
scanf("%f", &A2);
printf("\nInforme a sua terceira nota: ");
scanf("%f", &A3);
printf("\n-----------------------------\n");

	MP = (A1 + A2 + A3)/3;
	printf("Média Parcial: %.1f\n", MP);
	
	if(MP >= 7.0){
		printf("Aluno aprovado direto!");
	}
	else if(MP < 3.5){
		printf("Aluno reprovado direto!");
	}
	else{
		printf("\nQuarta prova! \n");
		printf("Informe a nota da avaliação final: ");
		scanf("%f", &AF);
		MF = ((6 * MP) + (4 * AF)) / 10;
		printf("Média Final: %.1f\n", MF);
	if(MF >= 5.0){
		printf("Aluno aprovado na final!");
	}
	else{
		printf("Aluno reprovado na final!");
	}
	}
	return(0);
}
