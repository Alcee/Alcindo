// Aula2011_Struct1.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>

struct Carro
{
	char modelo[10];
	char marca[10];
	int ano;
	char cor[10];
	char placa[7];
};

void LerDadosCarro(struct Carro carrao)
{
	printf("Digite o modelo \n:");
	fgets(carrao.modelo, 10, stdin); //gets_s(carrao.modelo);

	printf("Digite a marca \n:");
	fgets(carrao.marca, 10, stdin);

	printf("Digite o nao \n:");
	scanf_s("%i", &carrao.ano);

	printf("Digite a cor \n:");
	fgets(carrao.cor, 7, stdin);

	printf("Digite a placa \n:");
	fgets(carrao.placa, 10, stdin);
}
struct Carro meuCarro;
int main()
{
	
	LerDadosCarro(meuCarro);
    return 0;
}

