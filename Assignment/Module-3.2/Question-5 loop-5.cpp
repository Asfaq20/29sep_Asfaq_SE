#include<stdio.h> 
int main()
{
	int a, b, sum=0;
	printf("enter any number:");
	scanf("%d",&b);
	for(a=2;a<=b;a+=2)
	{
		sum +=a;
	}
	printf("sum even number from 1 to %d:%d",b,sum);
	return 0;
}
