// EX4_MediaPonderada.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>

float CalcMediaPonderada(float n1, float n2, float n3)
{
	float mediaP = 0;
	mediaP = (2 * n1 + 3 * n2 + 5 * n3) / (2 + 3 + 5);
	return mediaP;
}

int main()
{
	float n1 = 0, n2 = 0, n3 = 0, mediaP = 0;
	printf("Digite a primeira nota:\n");
	scanf_s("%f", &n1);
	printf("Digite a segunda nota:\n");
	scanf_s("%f", &n2);
	printf("Digite a terceira nota:\n");
	scanf_s("%f", &n3);
	mediaP = CalcMediaPonderada(n1, n2, n3);

	printf("Media ponderada: %.2f\n", mediaP);
	system("pause");
}

