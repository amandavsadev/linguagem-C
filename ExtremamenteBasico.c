#include <stdio.h>
#include <locale.h>
// Você pode encontrar o enunciado da questão em: https://thehuxley.com/problem/270?locale=pt_BR

int main()
{
	setlocale(LC_ALL,"Portuguese"); //Permite imprimir acentos e cedilha.
	
  int A, B, X;
  
  printf("Digite o valor de A e B, respectivamente: ");
  scanf("%d %d", &A, &B);
  
  X = A + B;
  
  printf("X = %d\n",X);
  
  return 0;
}
