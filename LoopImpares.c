#include <stdio.h>
// Voc� pode encontrar o enunciado da quest�o em: https://thehuxley.com/problem/21?locale=pt_BR

int main(void) 
{
  int n, m;
  printf("Digite dois n�meros: \n");
  scanf("%d%d",&n,&m);
  while (n<m)    
  {
    if (n % 2 != 0)
    {
      printf("%d ",n);
    }
    n++;
  }
  return 0;
}
