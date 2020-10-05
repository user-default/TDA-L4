#include <stdio.h>

int main()
{ 
  int quantidade = 0;
  int count = 1;
  int i = 0;
  int j = 1;
  int k = 0;
  scanf("%d", &quantidade);
  if (quantidade > 0 && quantidade < 46)
  {
    while(count <= quantidade)
    { 
      if (count != quantidade)
      {
        printf("%d ", k);
        i = j;
        j = k;
        k = i + j;
        count++;
      }
      else
      {
        printf("%d\n", k);
        break;
      }
    }
  }
  return 0;
}
