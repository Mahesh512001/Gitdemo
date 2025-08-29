#include <stdio.h>
int main()
{
  int rn;
  int cn;
  printf("Enter the number First Cn and Rn : ");
  scanf("%d%d", &cn, &rn);
  if(rn%2 != 0)rn += 1;
  for (int i = 1; i <= rn/2; i++)
  {
    
    for (int c = 1; c <= cn; c++)
    {
      if (i % 2 == 0)
      {
        printf("%c", 96 + i);
      }
      else
        printf("%c", 64 + i);
    }
     printf("\n");
    
     for (int c = 1; c <= cn; c++)
    {
      if (i % 2 == 0)
      {
         printf("%c", 64 + i);
      
      }
      else   printf("%c", 96 + i);
       
    }
    printf("\n");
  }
}