#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL,"Portuguese"); //Permite imprimir acentos e cedilha.
	int numA, numB, op; //Declara��o da vari�veis.
	
	printf("Difite o valor de A e B, respectivamente: ");
	scanf("%d%d",&numA,&numB);
	printf("\n");
	
	printf("Escolha:\n");
	printf("1-Soma ; 2-Subtra��o ; 3-Multiplica��o ; 4-Divis�o\n");
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
				printf("Erro! Divis�o por 0.");
			}
			else
			printf("%d / %d = %d",numA, numB, numA/numB);
		break;
	}

}
