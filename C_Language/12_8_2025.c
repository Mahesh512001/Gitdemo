#include <stdio.h>
int main()
{

  int id;
  char name[20];
  printf("Enter the id: ");
  scanf("%d", &id);
  printf("Enter the name: ");
  scanf("%s", name);
  int hin, engl, math, physics, chemistry, art;
  printf("Enter the each subjects number");
  scanf("%d %d %d %d %d %d    ", &hin, &engl, &math, &physics, &chemistry, &art);
  printf("hindi : %d  English : %d Math : %d Physics : %d  Chamistry : %d  art : %d", hin, engl, math, physics, chemistry, art);
  int total = hin + engl + math + physics + chemistry + art;
  float avg = total / 6;
  int result = 0;
  printf("\nTotal = %d", total);
  (hin >= 33) && (engl >= 33) && (math >= 33) && (physics >= 33) && (chemistry >= 33) && (art >= 33) ? ++result : result;
  if (result)
  {
    if (avg >= 60)
    {
      printf("\nfirst-div pass");
    }
    else if (avg >= 50)
    {
      printf("\nsecond-div pass");
    }
    else if (avg >= 35)
    {
      printf("\nthird div pass");
    }
  }
  else
    printf("fail");

  return 0;
}