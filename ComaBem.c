#include <stdio.h>
#include <math.h>
#include <locale.h>
// Você pode encontrar o enunciado da questão em: https://thehuxley.com/problem/40?locale=pt_BR

int main() 
{
	setlocale(LC_ALL,"Portuguese"); //Permite imprimir acentos e cedilha.
  float gasto, Tpago, perc;
  
  printf("Insira o total de gastos do cliente: \n");
  scanf("%f",&gasto);
  
  perc = gasto * 10/100;
  Tpago = gasto + perc;
  
  printf("O total a ser pago é: %.2f\n",Tpago);
  
  return 0;
}
