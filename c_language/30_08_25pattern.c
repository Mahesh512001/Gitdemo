#include <stdio.h>

void star(int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("*");
  }
}

void revstar(int n)
{
  for (int i = n; i > 0; i--)
  {
    printf("*");
  }
}

void space(int n)
{
  for (int i = 0; i < n; i++)
  {
    printf(" ");
  }
}

void revspace(int n)
{
  for (int i = n; i > 0; i--)
  {
    printf(" ");
  }
}

int main()
{
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  for (int r = 1; r <= n; r++)
  {
    space(r);
   revstar();
    printf("\n");
  }
}