#include<stdio.h>
int main(){
    int a[5] = {2, 4, 6, 8, 10};
    int *p = a, i;

    printf("Start = %d\n", *p);

    *p++ += 3;        
    printf("Step1 = %d\n", *p);

    ++*p;             
    printf("Step2 = %d\n", *p);

    (*p)++;           
    printf("Step3 = %d\n", *p);

    p += 2;           
    *--p -= 2;        
    printf("Step4 = %d\n", *p);

    *(p+1) = *p + *(p-1); 
    printf("Step5 = %d\n", *(p+1));

    printf("Final Array: ");
    for(i=0;i<5;i++){
        printf("%3d", a[i]);
    }
}
