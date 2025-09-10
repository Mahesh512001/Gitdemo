#include<stdio.h>
#include<string.h>
int main(){
	char name[20];
	int length = 0;
	printf("Enter the name:  ");
	
	scanf("%s",&name);
for(int i= 0;name[i]!='\0';i++){
	length++;
}
printf("the length of string is %d\n",length);
for(int i = 0;i<length;i++){
	for(int j= 0; j<length-i;j++){
		printf("%c",name[j]);
}
printf("\n");
}

printf("+++++++++++++++++++++++++++++++++++++++");

 char new[30] = "";
for(int i = 0;i<length;i++){
	 char new[30] = "";
	for(int j= 0; j<length-i;j++){
		new[j] = name[length-j-1];
}
 printf("%s",strrev(new));
printf("\n");
}
}
