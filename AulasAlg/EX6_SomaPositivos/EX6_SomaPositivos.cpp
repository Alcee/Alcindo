// EX6_SomaPositivos.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int n, soma;

	printf("Calculo da soma dos n primeiros inteiros positivos\n");
	printf("Digite o valor de n:\n");
	scanf_s("%d", &n);

	soma = (n * (n + 1)) / 2;

	printf("A soma dos %d primeiros inteiros positivos eh %d\n", n, soma);
	system("pause");
}

