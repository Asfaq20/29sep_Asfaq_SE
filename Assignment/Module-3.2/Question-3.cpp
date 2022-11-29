#include<stdio.h>
int main()
{
	int x;
	printf("\nenter an int number");
	scanf("%d",&x);
	(x % 8 == 0)?
	(printf("%d even number\n",x)):
	(printf("%d odd number\n",x));
	
}
