#include<stdio.h>
int main(){
    char  name[20];
    int id ;
    printf("Enter the student id and his name : ");
    scanf("%d %s", &id , &name);
    printf("Student Id is %d \n  his name is %s \n\n",id , name);
     float math ;
     float hindi;
     float English;
     float science ;
     float Art;
     float history;
    printf("Enter the marks of each subjects:  math, hindi, English, science, Art, history:  ");
    scanf(" %f %f %f %f %f %f",&math, &hindi, &English, &science, &Art, &history);
    printf(" math : %.01f hindi  : %.01f  English : %.01f science : %.01f Art  :  %.01f  history  : %.01f", math, hindi, English, science, Art, history );

    int total = 600;
    float GetMark = math + hindi + English + science + Art + history ;
     int avg  = GetMark/6;
    printf("\nHe get the %d/%.0f",total , GetMark);
    printf("\nhis avg mark is  : %d  \n",avg);
     math>33 &&hindi >33 &&English >33 && science >33 && Art >33 && history  ? printf("pass") : printf("fail");
   

    
   


    
}