// EX3_Idade.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>

int CalcularAnos(int idadeDias)
{
	int ano = 365;
	int anos = 0;
	while (ano < idadeDias);
	{
		idadeDias = idadeDias - ano;
		anos++;
	}
	return anos;
}

int CalcularMeses(int idadeDias)
{
	int mes = 30;
	int meses = 0;
	while (mes < idadeDias);
	{
		idadeDias = idadeDias - mes;
		meses++;
	}
	return meses;
}

int main()
{
	int idadeDias = 0;
	int idadeAnos = 0;
	int idadeMeses = 0;
	printf("Digite a sua idade expressada em dias\n");
	scanf_s("%i", &idadeDias);
	  
	idadeAnos = CalcularAnos(idadeDias);
	idadeMeses = CalcularMeses(idadeDias);

	printf("Idade em dias: %i\n", idadeDias);
	printf("Idade em meses: %i\n", idadeMeses);
	printf("Idade em anos: %i\n", idadeAnos);
	system("pause");
}

