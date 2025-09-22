#include<stdio.h>


 void iseven_odd(int n){
 int *p;
  p= &n;

 puts(n%2 == 0 ? "even":"odd");
 puts(*p%2 == 0?"even":"odd");

 } 

 void posi_nega(int n){

  int*p;
  p= &n;

puts(n>0?"positive":n<0?"negative":"zero");
puts (*p>0?"positive":*p<0?"negative":"zero");


}
 
void factorial(int n){
  int *p;
  p = &n;
  int fact= 1;
  for(int i = 1;i<=*p;i++){
    fact *= i;
  }
  printf("factorial of %d is %d",*p,fact);

}
/*finding pointer size Always the pointer sotres the address and address is always unsigned int. due to this any type of pointer it taken 2/4/8 in 16/32/64 bit compiler */
int main(){
// float a = 100;
// int *b = &a;
// printf("a = %d",*b);
// return 0; runtime error beacause of type mismatch in pointer same type should be used 

//pointer to pointer /double pointer 
/*The pointer which stroes the address of another pointer is called double pointer they are used to handle dynamic multi dimesional array. */





// int a = 10, *p = &a , **q  = &p,  ***r = &q;
// printf("value of a is %d \n ", **q);
// printf("value of a is %d  %d  %d  %d \n", a,*p,**q,***r);

//Array of pointer 

// int a = 10, b = 25, c= 18, *p[3],i;
//  printf("%u\n",&a);
//  printf("%u\n",&b);
//  printf("%u\n",&c);
//   p[0] = &a;
//   p[1] = &b;
//   p[2] = &c;
//   for(i=0;i<3;i++){
//     printf("value of %c is %d\n",97+i,*p[i]);
//   }



/*pointer to array 

Array is implicit pointer Due. to this it holds the base cell addr [0 cell addr] implicitly by assigning the array name or 0 cell addr to the pointer we can handle array elements using following syntax.

*(ptr variable + offset/index * sizeof(variable));
*/

int a[3] = {10,20,30}, *p , i;
printf("%u\n", &a);
printf("%u\n", &a[0]);

}


/* a man  going any specific hotel then he firslt see the holding where he  see the name of hotel and he indicates the take right a man take the right. again he arrive another road where he again confuse which one left and right then he see again holding he indicate right then agains man take right then he see the hotel  the first banner taken address of the hotel and this second banner taken address of the real hotel address and  and first banner taken from second banner address  then we can say the second banner hoding single pointer but first banner taken double pointer   */