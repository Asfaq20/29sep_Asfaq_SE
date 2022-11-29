#include<stdio.h>
int main()
{
	int x=20, y=30;
	printf("\nswap after x=%d, y=%d",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\nswap before x=%d, y=%d",x,y);
	
}
