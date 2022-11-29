#include<stdio.h>
int main()
{
	int y,d;
	printf("enter the number of days=");
	scanf("%d",&d);
	
	y=(d/365);
	d=(y*365);
	printf("years = %d\n days =%d",y,d);
	
}
