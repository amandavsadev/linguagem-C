#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL,"Portuguese"); //Permite imprimir acentos e cedilha.
	int numA, numB, op; //Declaração da variáveis.
	
	printf("Difite o valor de A e B, respectivamente: ");
	scanf("%d%d",&numA,&numB);
	printf("\n");
	
	printf("Escolha:\n");
	printf("1-Soma ; 2-Subtração ; 3-Multiplicação ; 4-Divisão\n");
	scanf("%d",&op);
	
	switch(op)
	{
		case 1:
			printf("%d + %d = %d",numA, numB, numA+numB);
		break;
		
		case 2:
			printf("%d - %d = %d",numA, numB, numA-numB);
		break;
		
		case 3:
			printf("%d * %d = %d",numA, numB, numA*numB);
		break;
		
		case 4:
			if(numB == 0)
			{
				printf("Erro! Divisão por 0.");
			}
			else
			printf("%d / %d = %d",numA, numB, numA/numB);
		break;
	}

}
