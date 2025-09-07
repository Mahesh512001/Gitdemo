#include <stdio.h>
int main()
{
  int n, m;
  // this is for taking input by the user and display the 1st matrix
  printf("Enter the number of 1st matrix rows and columns: ");
  scanf("%d %d", &n, &m);
  int a[n][m], sum[n][m];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      printf("%4d",a[i][j]);
    }
    printf("\n");
  }

  // this is for taking input  user through,  and display the 2nd matrix

  printf("\nEnter the number of  2nd matrix rows and columns: ");
  scanf("%d %d", &n, &m);
 int b[n][m];
   for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      scanf("%d", &b[i][j]);
    }
  }
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      printf("%4d",b[i][j]);
    }
     printf("\n");
  }

  // this is for sum of two matrix and print the sum matrix
   for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
        sum[i][j]=a[i][j]+b[i][j];
     }
   }


    printf("\nThe sum of two matrix is : \n\n");
    for(int i=0;i<n ;i++){
      for(int j=0;j<m;j++){
        printf("%4d",sum[i][j]);
      }
      printf("\n");
    }
}