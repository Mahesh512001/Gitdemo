#include<stdio.h>
int main(){
	int nr ,nc,r,c,**P;
	printf("Enter the row and column");
	scanf("%d %d ,&nr,&nc);
	p = (int**)calloc(nr,size(int));
	for(r=0;r<nr;r++)p[r]=(int*)calloc(nc,sizeof(int));
	printf("Enter %d integers",nr*nc);
	for(r=0;r<nr;r++)for(c=0;c<nc;c++)scanf("%d",&p[r][c]);
	puts("Element are");
	for(r=0;r<nr;r++)
	{
		for(c=0;c<nc;c++)
		{
			printf("%3d",p[r][c]);
		}
	}
}