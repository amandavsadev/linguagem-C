#include <stdio.h>
// Voc� pode encontrar o enunciado da quest�o em: https://thehuxley.com/problem/273?locale=pt_BR

int main()
{
	double N1, N2, MEDIA;
	
    printf("Digite sua primeira nota: \n");
    scanf("%lf",&N1);

	printf("Digite sua primeira nota: \n");
	scanf("%lf",&N2);
			
    MEDIA = (N1 * 3.5) + (N2 * 7.5);
    MEDIA = MEDIA / 11;
    
    printf("M�DIA = %.5lf\n",MEDIA);
    
    return 0;
}
