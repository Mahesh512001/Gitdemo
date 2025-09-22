#include <stdio.h>

int main()
{
  int arr[10] = {7, 5, 6, 3, 2, 6, 8, 5, 9, 0};

  for (int i = 0; arr[i] != '\0'; i++)
  {
    for(int j = i+1; arr[j] != '\0'; j++)
      if (arr[i] > arr[j])
      {
       arr[i] = arr[i]+arr[j];
        arr[j] = arr[i]-arr[j];
        arr[i] = arr[i]-arr[j];
      }
  }
  printf("Sorted array is: {");
  for (int i = 0; i < 10; i++)
  {
    printf("%d, ", arr[i]);
  }
  printf("}");
}