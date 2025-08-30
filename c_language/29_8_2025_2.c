#include <stdio.h>
int main()
{
  int rn,cn;
  printf("Enter the number row and column : ");
  scanf("%d%d", &rn, &cn);
  for (int i = 1; i <= rn; i++)
  {
    for (int c = 1; c <= cn; c++)
    {
      printf("%c", 64 + c);
      printf("%c", 96 + c);
 
    }
    printf("\n");
  }
}