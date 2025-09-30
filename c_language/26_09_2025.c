#include<stdio.h>


int main(){
	FILE * fp = fopen("abc.txt","w");
	if(fp == NULL) puts("file not found");
	else{
		char ch;
		while((ch=getchar())!=EOF)fputc(ch,fp);
		puts(" file created");	
		fclose(fp);
		
	}
	

}