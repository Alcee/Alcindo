// Aula2011_Recursividade2.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"


int fat(int n)
{
	if (n == 0)
		return 1;
		return n * fat(n - 1);
}

int main()
{
	int n = 0;
    printf("Digite um numero inteiro \n");
	scanf_s("%i", &n);
	printf("Fatorial: %i \n", fat(n));
}

