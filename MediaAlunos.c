#include <stdio.h>
#include <locale.h>
// Você pode encontrar o enunciado da questão em: https://thehuxley.com/problem/18?locale=pt_BR

int main()
{
	setlocale(LC_ALL,"Portuguese"); //Permite imprimir acentos e cedilha.
	
	float N1, N2, N3, media;
	
   printf("Digite a sua primeira nota: ");
   scanf("%f",&N1);
   
   printf("Digite a sua segunda nota: ");
   scanf("%f",&N2);
   
   printf("Digite a sua terceira nota: ");
   scanf("%f",&N3);
    
   media = (N1 + N2 + N3) / 3;
   
   if (media >= 7)
   {
    	printf("Aprovado!");
   }
   
   else if (media < 3)
   {
    	printf("Reprovado!");
   }
   
   else
   {
  	printf("Prova final."); 
   }
   
  return 0;
}
