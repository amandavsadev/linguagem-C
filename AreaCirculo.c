#include <stdio.h>
#include <locale.h>
// Voc� pode encontrar o enunciado da quest�o em: https://thehuxley.com/problem/271?locale=pt_BR

int main()
{
	setlocale(LC_ALL,"Portuguese"); //Permite imprimir acentos e cedilha.
	
	float pi, raio, area, r;
	pi = 3.14159;
	
	printf("Valos do raio (em cm): \n");
	scanf("%f",&raio);
	
	//Calculo do c�rculo
	r = raio * raio;
	area = (pi * r) / 10000;
	
	printf("�rea = %.4fm�",area);
	
	return 0;
}
