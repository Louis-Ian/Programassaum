#include <stdio.h>
#include <stdlib.h>

int main2(int argc, char **argv){
	//A SEGUIR: funções
	int soma(int a, int b){
		return a+b;
	}

	float pf(){
		return 3.0;
	}

	void semRetorno(){
		printf("NAO HA RETORNO, COROI!\n");
	}
}

int main(int argc, char **argv){
	int inteiro = 2;
	double db;
	float pf;
	char nome[20];

	//printf("Digite um número: ");
	//scanf("%d", &inteiro);

	/*if(inteiro == 2){
		printf("é dois! \n");
	}*/

	scanf("%[^\n]", nome);
	printf("%s", nome);


	//A SEGUIR: laço!
	/*int i = 10;
	while(i > 0){
		printf("FAZ O URRO!\n");
		i--;
	}

	int j = 10;
	do{
		printf("UAHHHH \n");
		j--;
	}while(j > 0);

	for(i = 0;i < 5;i=i+2){
		printf("NOFA SHUREG\n");
	}*/

	return EXIT_SUCCESS;
}
