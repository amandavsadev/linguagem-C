#include <stdio.h>
#include <locale.h>
// Você pode encontrar o enunciado da questão em: https://thehuxley.com/problem/17?locale=pt_BR
int main() 
{
	setlocale(LC_ALL,"Portuguese"); //Permite imprimir acentos e cedilha.
	
  int num, antecessor, sucessor;
  
  printf("Digite um número\n");
  scanf("%d",&num);
  
  antecessor = num - 1;
  sucessor = num + 1;
  
  printf("Seu antecessor e sucessor são, respectivamente, %d e %d",antecessor,sucessor);
  
	  return 0;
	}
