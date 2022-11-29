#include<stdio.h>
int main()
{
	int n, sum=0,firstdigit, lastdigit;
	
	printf("enter number to find sum of first and last digit=");
	scanf("%d",&n);
	
	lastdigit = n % 10;
	 
	while(n >= 10)
	{
		n = n / 10;
	}
	firstdigit = n;
	
	sum = firstdigit + lastdigit;
	
	printf("sum of first and last digit = %d",sum);
	
	return 0;
}
