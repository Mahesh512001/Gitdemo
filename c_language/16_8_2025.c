#include <stdio.h>
int main()
{
  int n[11] = {4, 5, 6, 3, 2, 1, 8, 6, 5, 9, 0};
  int length = sizeof(n) / sizeof(n[0]);
  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < length - i - 1; j++)
    {
      if (n[j] >= n[j + 1])
      {
        n[j] = n[j] + n[j + 1];
        n[j + 1] = n[j] - n[j + 1];
        n[j] = n[j] - n[j + 1];
      }
    }
  }
  printf("{ ");
  for (int i = 0; i < length; i++)
  {
    printf("%d ,", n[i]);
  }
  printf("\b }");
}