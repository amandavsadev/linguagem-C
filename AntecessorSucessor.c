#include <stdio.h>
#include <locale.h>
// Voc� pode encontrar o enunciado da quest�o em: https://thehuxley.com/problem/17?locale=pt_BR
int main() 
{
	setlocale(LC_ALL,"Portuguese"); //Permite imprimir acentos e cedilha.
	
  int num, antecessor, sucessor;
  
  printf("Digite um n�mero\n");
  scanf("%d",&num);
  
  antecessor = num - 1;
  sucessor = num + 1;
  
  printf("Seu antecessor e sucessor s�o, respectivamente, %d e %d",antecessor,sucessor);
  
	  return 0;
	}
