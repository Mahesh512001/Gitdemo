#include <stdio.h>
int main()
{
  int rn, cn;
  printf("Enter the number numbe of row and number of column : ");
  scanf("%d %d", &rn, &cn);
  for (int i = 1; i <= rn; i++)
  {
    for (int c = 1; c <= cn-i; c++)
    {
      printf("1");
    }
    for(int c = 1; c <= i;c++ ){
       printf("%d",i);
    }
    printf("\n");
  }
  return 0;
}