#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	float MP,MF,A1,A2,A3,AF;
	printf("-----------------------------");
	printf("\nInforme a sua primeira nota: ");
	scanf("%f",&A1);
	printf("\nInforme a sua segunda nota: ");
	scanf("%f",&A2);
	printf("\nInforme a sua terceira nota: ");
	scanf("%f",&A3);
	printf("\n-----------------------------\n");

	MP = (A1 + A2 + A3)/3;
	
	if (MP >= 7.0){
		printf("Aluno Aprovado!");
		return (0);
	}
	else if (MP < 3.5){
		printf("Aluno Reprovado!");
	}
	else if ((MP >= 3.5)&&(MP < 7.0)){
		printf("Quarta prova! \n");
		printf("Informe a Nota da avaliação Final: ");
		scanf("%f",&AF);
		MF = ((6 * MP)+(4 * AF))/10;
		if ((MP >= 7.0)||(MF >= 5.0)){
			printf("\nAluno Aprovado!");
		}
		else{
			printf("\nAluno Reprovado!");
		}
	}
	
	return (0);
}
