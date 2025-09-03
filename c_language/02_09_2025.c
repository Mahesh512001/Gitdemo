#include <stdio.h>

int main()
{
  int n;
  printf("how many enter the number you want : ");
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    printf("Enter the value of %d index: ", i);
    scanf("%d", &a[i]);
  }

  for (int j = 0; j < n; j++)
  {
      int count = 0;
    for (int i = 1; i <= 9; i++)
    {
      if (a[j] % i == 0)
        count++;
    }
    if (a[j] == 0 || a[j] == 1)
      {
        printf("%d is neither prime nor composite\n", a[j]);
        continue;
      }
        if (count == 2){
          printf("%d is prime number\n", a[j]);}
        else
          printf("%d is composite\n", a[j]);
  }
  return 0;
}
