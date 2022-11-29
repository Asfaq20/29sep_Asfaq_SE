#include<stdio.h>
int main()
{
	int x, y;
	float div;
	printf("enter value of x and y:");
	scanf("%d%d",&x,&y);
	printf("\naddision is:%d",x+y);
	printf("\nsubstraction is:%d",x-y);
	printf("\nmultiplication is:%d",x*y);
	div=x/y;
	printf("\ndivission is:%f",div);
	printf("\nmodulo is:%d",x%y);
}
