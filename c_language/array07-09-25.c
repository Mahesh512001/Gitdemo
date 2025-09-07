#include <stdio.h>
int main()
{
  int even = 0;
  int odd = 0;
  int zero = 0;
  int n, m;
  printf("Enter the number of rows and columns: ");
  scanf("%d %d", &n, &m);
  int a[n][m];
  // this is for taking input in the array
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  // this if for display the full array
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      printf("%4d", a[i][j]);
    }
    printf("\n");
  }

  // sum of pricnipal diagonal like trace of matrix
  int sumDiagonal = 0;
  int rightDiagonal = 0;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (i == j)
      {
        sumDiagonal += a[i][j];
      }
      if (i + j == m - 1)
      {
        rightDiagonal += a[i][j];
      }
    }
  }
  // sum of z shaped element
  int zshapedsum = 0;
  if (n == m)
  {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if (i == 0 || i == n - 1 || i + j == n - 1)
        {
          zshapedsum += a[i][j];
        }
      }
    }
    printf("Sum of z shaped element: %d\n", zshapedsum);
  }
  else
    printf("Z shaped sum is not possible as the matrix is not square.\n");
  printf("Sum of principal diagonal: %d\n", sumDiagonal);
  printf("Sum of right diagonal: %d\n", rightDiagonal);

  // theis is for row  dispalay  the array
  printf("        Even    odd   zero\n");
  for (int i = 0; i < n; i++)
  {
    even = 0;
    zero = 0; 
    odd = 0;
    for (int j = 0; j < m; j++)
    {
      if (a[i][j] == 0)
        zero++;
      else if (a[i][j] % 2 == 0)
        even++;
      else
        odd++;
    }
    printf("%d-row   %d      %d     %d\n", i + 1, even, odd, zero);
  }

  // theis is for column  dispalay  the array
  printf("        Even    odd   zero\n");
  for (int i = 0; i < m; i++)
  {
    even = 0;
    zero = 0;
    odd = 0;
    for (int j = 0; j < n; j++)
    {
      if (a[j][i] == 0)
        zero++;
      else if (a[j][i] % 2 == 0)
        even++;
      else
        odd++;
    }
    printf("%d-column   %d      %d     %d\n", i + 1, even, odd, zero);
  }
  return 0;
}
