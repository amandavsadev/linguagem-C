#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL,"Portuguese"); //Permite imprimir acentos e cedilha.
//Fa�a um programa que solicita o usuario digitar o nome e sobrenome

  char nome[30], sobrenome[30];
  char rua[30], numero[30], bairro[30], cidade[30];

  printf("Entre com seu nome: \n");
  fflush(stdin);
  gets(nome);

  printf("\nEntre com seu sobrenome: \n");
  fflush(stdin);
  gets(sobrenome);

 //digitar rua, numero, bairro, cidade
  printf("\nDigite sua rua: ");
  fflush(stdin);
  gets(rua);

  printf("\nDigite o n�mero: ");
  fflush(stdin);
  gets(numero);
  
  printf("\nDigite o bairro: ");
  fflush(stdin);
  gets(bairro);

  printf("\nDigite a cidade: ");
  fflush(stdin);
  gets(cidade);

//Finalmente o programa concatena o nome e sobrenome e mostra na tela.
  printf("\nNome: %s %s", nome, sobrenome);
  
//Depois o programa concatena os dados do endereco e imprime o endere�o de uma s� vez.
  printf("\nEndere�o: Rua %s, n� %s, %s - %s", rua, numero, bairro, cidade);

 getchar(); 
}




