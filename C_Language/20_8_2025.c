#include <stdio.h>
int main()
{
  long long n;
  int max = -9;
  int min  = 9;
  
  printf("enter the number : ");
  scanf("%llu", &n);

  while (n)
  {
   int r = n%10;
   if(max>r) max = r;
   if(min<r) min = r;
   n/10;

  }

  printf("max = %d and min = %d",max, min);
  return 0;
}