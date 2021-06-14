#include<stdio.h> 
#include<string.h> 
#include<ctype.h> 
#include<locale.h> 
#include<stdlib.h> 
int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float meses,meses24,feminino,masculino,fcriancas,ano,quantidade,i;
	float porcentagemmasculino,porcentagem24,porcentagemftotais;
	char sexo;
	
	printf("----------------------------\n");
	printf("Taxa de Mortalidade Infantil\n");
	printf("----------------------------\n");
	
	printf("Digite o ano do nascimento da crianças:  ");
		scanf("%d",&ano);
	printf("Digite a quantidade de crianças que nasceram nesce período: ");
		scanf("%f",&quantidade);
	printf("Quantidade de crianças que morreram no período: ");
		scanf("%f",&fcriancas);
		
	for(i=0;i<fcriancas;i++){
		
		fflush(stdin);
		printf("\n");
		printf("Qual o sexo da criança: ");
			scanf("%c",&sexo);
			sexo=toupper(sexo);
			
			if(sexo=='F'){
				feminino = feminino + 1;
				printf("Quantos meses a criança viveu: ");
					scanf("%f",&meses);
					if(meses<=24){
						meses24 = meses24 + 1;
					}
			}
			else if(sexo=='M'){
				masculino = masculino + 1;
				printf("Quantos meses a criança viveu: ");
					scanf("%f",&meses);
					if(meses<=24){
						meses24 = meses24 + 1;
					}
			}
			
	}
	
	printf("\n");
	
	porcentagemftotais = (fcriancas/quantidade)*100;
	porcentagemmasculino = (masculino/fcriancas)*100;
	porcentagem24 = (meses24/fcriancas)*100;
	
	printf("Porcentagem de crianças falecidas no período: %.1f\n",porcentagemftotais);
	printf("Porcentagem de crianças masculinas mortas no período: %.1f\n",porcentagemmasculino);
	printf("Porcentagem de crianças que viveram menos 24 ou menos de 24 meses: %.1f\n",porcentagem24);
	return 0;
}
