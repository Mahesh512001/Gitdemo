/* Printing 1..n tables:
Eg: printing 1 to 3 tables */


#include<stdio.h>
int main(){
  int n ; 
  printf("Enter the number: ");
  scanf("%d",&n);
  for(int i = 1; i<=10;i++){
    for(int j = 1; j<= n;j++){
      printf("%4d * %d = %4d", i, j, i*j);
    }
    printf("\n");
  }


/*  Finding generic root of given no?
1234  1+2+3+4=10  1+0 = 1
5677  5+6+7+7=25  2+5 = 7*/
printf("Enter the number For generic root : ");
int m;
scanf("%d",&m);
int s = 0;
while(m>9){
for( s=0;m!= 0;m /=10){
 s =s + m%10;
}
m= s;

}
printf("The generic number is : %d ", m);


/*Finding magic no or not?
If the given no generic root is 1 it is a magic
no.

1234  1+2+3+4=10  1+0  1 */




  return 0;
}
