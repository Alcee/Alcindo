// Aula1110_Funcoes.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>

void HelloWorld() 
{
	printf("\nHello World!\n");
}

int Soma2Valores(int x, int y) 
{
	int c;
	c = x + y;

	return c;
}
int main()
{
	HelloWorld();
	int a = Soma2Valores(55, 33);
	printf("Resultado da soma: %i \n", a);

	system("pause");
}



