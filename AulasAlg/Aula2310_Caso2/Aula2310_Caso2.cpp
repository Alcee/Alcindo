// Aula2310_Caso2.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int num;
	printf("Digite algum numero entre 0 ... 1000");
	scanf_s("%i", &num);
	int resto = num % 5;


	switch (resto)
	{
	case 0:
	{
		printf("Eh divisivel");
	}
	case 1:
	{
		printf("Sobrou 1");
	}
	case 2:
	{
		printf("Sobrou 2");
	}
	case 3:
	{
		printf("Sobrou 3");
	}
	case 4:
	{
		printf("Sobrou 4");
	}
	default:
		break;
	}
	system("pause");
    return 0;
}

