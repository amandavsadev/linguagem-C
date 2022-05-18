#include <stdio.h>
#include <locale.h>
// Você pode encontrar o enunciado da questão em: https://thehuxley.com/problem/43?locale=pt_BR

int main()
{
	setlocale(LC_ALL,"Portuguese"); //Permite imprimir acentos e cedilha.
	
	int num1, num2, num3, menor;
	
    printf("Digite três números inteiros: \n");
    scanf("%d%d%d",&num1,&num2,&num3);

    menor = num1;
    
    if (num2 < menor)
   {
    	menor = num2;
   }
   
    if (num3 < menor)
   {
    	menor = num3;
   }
   
  printf("%d",menor);
  
  return 0;
}
