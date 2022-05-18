#include <stdio.h>
#include <locale.h>
// Você pode encontrar o enunciado da questão em: https://thehuxley.com/problem/279?locale=pt_BR

int main()
{
	setlocale(LC_ALL,"Portuguese"); //Permite imprimir acentos e cedilha.
	
  int NF, HT;
  float valor;
  
  printf("Digite o número do funcionário: ");
  scanf("%d",&NF);
  
  printf("Digite o numéro de horas trabalhadas: ");
  scanf("%d",&HT);
  
  printf("Valor que recebe por hora trabalhada: ");
  scanf("%f",&valor);
  
  valor = HT * valor;
  
  printf("\nNUMBER = %d\nSALARY = R$ %.2f",NF,valor);
  
  return 0;
}
