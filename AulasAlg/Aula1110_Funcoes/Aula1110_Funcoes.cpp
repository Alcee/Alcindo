// Aula1110_Funcoes.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>

void HelloWorld() 
{
	printf("\nHello World!\n");
}

int LerNumeroInteiro()
{
	int num;
	printf("Favor digitar um numero inteiro:");
	scanf_s("%i", &num);
	return num;
}

int Soma2Valores(int x, int y) 
{
	int c;
	c = x + y;

	return c;
}

int main()
{
	int b = LerNumeroInteiro();
	int c = LerNumeroInteiro();
	
	//HelloWorld();

	int a = Soma2Valores(b, c);
	printf("Resultado da soma: %i \n", a);

	system("pause");
}



