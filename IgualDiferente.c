#include <stdio.h>
#include <locale.h>
// Você pode encontrar o enunciado da questão em: https://thehuxley.com/problem/43?locale=pt_BR

int main()
{
	setlocale(LC_ALL,"Portuguese"); //Permite imprimir acentos e cedilha.
	
	int n1,n2,n3;
	
    printf("Digite três números inteiros: \n");
	scanf("%d%d%d",&n1,&n2,&n3);
	
	if ((n1 == n2) && (n2 == n3))
	{
		printf("1\n");
	}
	
    else if ((n1 != n2) && (n2 != n3))
    {
		printf("2\n");
    }
    
    else
	{
        printf("3\n");
    }
    
  return 0;
}
