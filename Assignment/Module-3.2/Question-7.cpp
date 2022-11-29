#include<stdio.h>
int main()
{
	int w,x,y,i, number;
	printf("enter number of:");
	scanf("%d",&number);
	
	w = 0;
	x = 1;
	y = 0;
	
	printf("\nenter fibonicce number");
	for(i=0;i<=number;i++)
	{
		printf("%d",y);
        
		w=x;
		x=y;
		y=w+x;
	}
	
	return 0;
	
	
	
	
}
