#include<stdio.h>
int main()
{
	int year;
	printf("enter year\n");
	scanf("%d",&year);
	if((year%4)==0)
	{
		printf("%dis leap year",year);
	}
	else
	{
		printf("%d is not leap year",year);
	}
}
