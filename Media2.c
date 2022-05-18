#include <stdio.h>
// Você pode encontrar o enunciado da questão em: https://thehuxley.com/problem/274?locale=pt_BR

int main()
{
  float N1, N2, N3, MEDIA;
  
  printf("Digite sua primeira nota: ");
  scanf("%f",&N1);
  
  printf("Digite sua segunda nota: ");
  scanf("%f",&N2);
  
  printf("Digite sua terceira nota: ");
  scanf("%f",&N3);
  
  MEDIA = (N1 * 2) + (N2 * 3) + (N3 * 5);
  MEDIA = MEDIA / 10;
  
  printf("\nMedia = %.1f", MEDIA);
  
  return 0;
}
