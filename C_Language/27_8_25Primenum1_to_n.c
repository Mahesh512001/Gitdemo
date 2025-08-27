#include<stdio.h>
int main(){
  int n;
  int count = 0;
  printf("Enter the number of : ");
  scanf("%d" ,&n);

  for(int j = 2 ; j<n;j++){
  int  result = 1;
    for(int i = 2 ; i*i <= j;i++){
        if(j%i == 0) {
          result = 0;
          break;
        }
       
    }
      if(result){
      printf("%4d",j);
    count++;
      }
  }
 printf("\nin this range there are %d primes number.",count);
 return 0;
}