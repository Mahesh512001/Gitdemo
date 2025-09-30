//student addstudent, enquiry report update delete close 
#include<stdio.h>
#include<stdlib.h>

struct student_details{
  int rollno;
  char name[20];
  int age;
  char address[50];
  char course[20];
  float fee;
 
}std;


FILE *fp, *t;
char ch;
void addstudent(){
fp = fopen("student","a");
 
printf("Enter roll no: \n");
scanf("%d", &std.rollno);

printf("Enter name: \n");
fgets(std.name,sizeof(std.name),stdin);

printf("Enter age: \n");
scanf(" %d", &std.age);
 
printf("Enter address: \n");
fgets(std.address ,sizeof(std.address),stdin);
 
printf("Enter course: \n");
scanf(" %s",std.course);
 
printf("Enter fee: \n");
scanf("%f", &std.fee);
fwrite(&std, sizeof(std), 1 ,fp);
 
printf(" %s added successfully\n", std.name);
 
printf("Next record  [y/n]: ");
scanf(" %c", &ch);
if(ch == 'y' || ch == 'y') addstudent();
fclose(fp);
}
void enquiry(){

}
void report(){

}
void update(){

}
void delete(){

}

void line(){
  printf("--------------------------------------------------\n");
}

int main(){
printf("\t\t\tSTUDENT MANAGEMENT SYSTEM\n");
line();
printf("\t\t\t1. Add Student\n");
printf("\t\t\t2. Enquiry\n");
printf("\t\t\t3. Report\n");
printf("\t\t\t4. Update\n");
printf("\t\t\t5. Delete\n");
printf("\t\t\t6. Close\n");
line();
printf("Enter your choice [ ]\b\b");
scanf("%c",&ch);
switch (ch){
  case '1': addstudent(); break;
  case '2': enquiry(); break;
  case '3': report(); break;
  case '4': update(); break;
  case '5': delete(); break;
  case '6':  printf("Application closed\n");exit(0); 
  default: printf("write correct option\n");
   
}
main();
}
