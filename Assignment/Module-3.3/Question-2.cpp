#include<stdio.h>
int main()
{
	float x,y;
	int expression;
	printf("enter 2 no");
	scanf("%f%f",&x,&y);
	printf("\n1.addision\n2.substrication\n3.multplication\n4.divission");
	printf("\nenter your choice:");
	scanf("%d",&expression);
	switch (expression)
	{
	case 1:
		printf("\naddission is%f",x+y);
		break;
		
	case 2:
	    printf("\nsubstrication is%f",x-y);
		break;
		
	case 3:
	    printf("\nmultplication is%f",x*y);
		break;
		
	case 4:
	    printf("\ndivission is%f",x/y);
		break;
		
	dafault:
	    printf("\nenter valid choice.....");
		break;			
	}
}
