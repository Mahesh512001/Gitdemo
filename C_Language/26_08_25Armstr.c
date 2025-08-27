#include<stdio.h>

int power(int a ,int b){
  int result = 1;
  while (b != 0){
    result *= a;
    b--;
  }
  return result;
}
int isArmstrong(int a){
  int count= 0;
  int s= 0;
 for(int m = a;m!= 0;m/=10)count++;
for(int m= a;m!= 0;m/=10){
 int r = m%10;
 s += power(r,count);
}
if(s==a){
  return 1;
}else return 0;

}

int main(){
int n;
printf("Enter the number : ");
scanf("%d", &n);

for(int i = 1;i<=n;i++){
  if(isArmstrong(i)){
    printf("%4d  ",i);
  }
}

return 0;
}