#include <stdio.h>
#include <locale.h>
// Voc� pode encontrar o enunciado da quest�o em: https://thehuxley.com/problem/279?locale=pt_BR

int main()
{
	setlocale(LC_ALL,"Portuguese"); //Permite imprimir acentos e cedilha.
	
  int NF, HT;
  float valor;
  
  printf("Digite o n�mero do funcion�rio: ");
  scanf("%d",&NF);
  
  printf("Digite o num�ro de horas trabalhadas: ");
  scanf("%d",&HT);
  
  printf("Valor que recebe por hora trabalhada: ");
  scanf("%f",&valor);
  
  valor = HT * valor;
  
  printf("\nNUMBER = %d\nSALARY = R$ %.2f",NF,valor);
  
  return 0;
}
