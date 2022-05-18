#include <stdio.h>
#include <locale.h>
// Você pode encontrar o enunciado da questão em: https://thehuxley.com/problem/278?locale=pt_BR

int main()
{
	setlocale(LC_ALL,"Portuguese"); //Permite imprimir acentos e cedilha.
	int A, B, C, D, produto;
	
  printf("Digite os valores de A, B, C e D, respectivamente: \n");
  scanf("%d%d%d%d",&A,&B,&C,&D);
  
  produto = (A*B) - (C*D);
  
  printf("DIFERENCA =  %d",produto);
  return 0;
}
