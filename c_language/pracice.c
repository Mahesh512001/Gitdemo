#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

int main(){
// Read a student id name 6 sub mark find total avg and pass/fail using ternary operator
  int id;
  char name[20];
printf("Enter the Student : id  : ");
scanf("%d ", &id);
printf("Enter the name: "); gets(name);
printf("id : %d \n name : %s\n", id, name);
  float math ;
  float english;
  float hindi;
  float physics;
  float chamistry;
  float history;
  printf("Write the marks of (Math , Eglish , hindi , physics , chamistry , history) : ");
  scanf(" %f %f %f %f %f %f" , &math , &english, &hindi , &physics , &chamistry, &history );
  printf ("Math : %.2f \n English : %.2f \n Hindi : %.2f \n Physics : %.2f \n Chamistry : %.2f \n Histroy : %.2f ", math , english, hindi , physics , chamistry, history);
  float total = math + english + hindi + physics +  chamistry + history ;
   float avg = total/6 ;
   printf("\n id : %d  \n name : %s  is  ", id , name );
   printf("Total marks :  %d/%d  ",(int)total,600);
 math >= 35 && english >= 35 && hindi >= 35 && physics >= 35 &&   chamistry >= 35 &&  history ? printf("pass\n") : printf("fail\n");



 printf("\n\n \nRead a costomer id name  quantity parchesed item price find amount 35%, discount and total\n\n");

 int customer_id ;
 char costomer_name[20];
 printf("Enter the costomer id  and name ");
 scanf(" %d ", &customer_id);
 flushall();
 printf("Enter the name "); gets(name);
 printf("id : %d  \n name : %s\n " , customer_id , costomer_name);
 char item[20];
 float price ;
 int quantity;

 printf("Enter the name of item , price  and quantity : ");
 scanf(" %s %f %d", &item, &price ,&quantity);
 printf("price : Rs. %.2f and Quantity : %d\n", price , quantity);

 float Amount = price*quantity;
 float payble_amount = Amount - (Amount*35)/100;

 printf("your total amount is Rs.-  %.2f and your payble amount is Rs.-  %.0f " , Amount , payble_amount);



return 0;
// int a = 20;
// int b =  30 ;

// printf(" before  a = %d  b = %d",a, b );
//  a = a+b ;
//  b = a-b;
//  a = a-b;
// printf(" after   a = %d  b = %d", a, b );
  
  // int a= 3;
  // printf("%d + %d = %d\n", '1','2','3');
  // printf("%d + %d = %d\n ", 'a', 'b', 'A' + 'B');
  // printf("%c + %c = %c\n ", 65 , 66 , 90);
  // printf("%i + %i = %i\n", 1,2,3 );
  // printf("%id + %id = %id\n", 1,2,3);
  // printf("%d + %d = %d\n", 1,2);
  // printf("%d + %d = %d\n ", 1,2 );
  // printf("%d  + %d = %d\n ", 1,2,3,4);

   /*
  49 + 50 = 51 
  97 + 98 = 131  a = 97 , b = 98 A + B = 65 + 66 = 131
  A + B = Z
  1 + 2 = 3
  1d + 2d = 3d 
   1 + 2 = 3
   1 + 2 = -798359834
   1 + 2 = 3
 */
  // printf("%D + %d = %d\n" , 1,2,3);
  // printf("%d + %D = %d\n ", 1,2,3);
  // printf("%d + %d = %D\n", 1,2,3);
  // printf("%d  % %d = %d\n" , 5,2, 5%2);
  // printf("%d %% %d = %d\n", 5,2, 5%2);
  //printf("%% %d + %d = %d\n ", 5,2,3, 5%2);
  //printf("%%d%d ", 5);
 /*
 %D + %d = %d
 1 + %D = %d
 1 + 2 = %D
 5 % %d = %d 
5 % 2 = 1
 %d %d = %d
 */

//  int a;
//  int b;
//  scanf("%d and %d" , &a, &b);

//  printf("befor program a: %d , b : %d\n",a, b);
// //  int c ;
// //  c = a;   // c  = a => c =  30;
// //  a = b ; //    a =  30 , b = 20  => a =  20;
// //  b= c;  // b= 20 , c = 30  =>  b = 30
//  a = a*b ;
//  b = a/b;
//  a = a/b;


//  printf("after program a : %d , b : %d\n ",a ,b);

// int a = 49 ;
// int*p ;
// p = &a;
// printf("value of a: %d\n", a);
// printf("address of a %d\n",(void*)&a);
// printf("Address stored in p: %d\n", (void*)p);
// printf("value pointed by p: %d\n", *p);

// printf("Enter the name : ");
// char name[30];
// scanf("%s", name);
// int length = strlen(name) ;

// printf("Your name %s and \bname\b length is %d", name , length);




}