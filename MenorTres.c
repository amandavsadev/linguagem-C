#include <stdio.h>
#include <locale.h>
// Voc� pode encontrar o enunciado da quest�o em: https://thehuxley.com/problem/43?locale=pt_BR

int main()
{
	setlocale(LC_ALL,"Portuguese"); //Permite imprimir acentos e cedilha.
	
	int num1, num2, num3, menor;
	
    printf("Digite tr�s n�meros inteiros: \n");
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
